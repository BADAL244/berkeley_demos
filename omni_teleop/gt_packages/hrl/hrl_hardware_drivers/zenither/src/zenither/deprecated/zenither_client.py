# Copyright (c) 2009, Georgia Tech Research Corporation
# All rights reserved.
# 
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#     * Redistributions of source code must retain the above copyright
#       notice, this list of conditions and the following disclaimer.
#     * Redistributions in binary form must reproduce the above copyright
#       notice, this list of conditions and the following disclaimer in the
#       documentation and/or other materials provided with the distribution.
#     * Neither the name of the Georgia Tech Research Corporation nor the
#       names of its contributors may be used to endorse or promote products
#       derived from this software without specific prior written permission.
# 
# THIS SOFTWARE IS PROVIDED BY GEORGIA TECH RESEARCH CORPORATION ''AS IS'' AND
# ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL GEORGIA TECH BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
# OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
# LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
# OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
# ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
## author Advait Jain (Healthcare Robotics Lab, Georgia Tech.)

import roslib; roslib.load_manifest('zenither')
import rospy
from hrl_msgs.msg import FloatArray
from threading import RLock

class ZenitherClient():
    def __init__(self, init_ros_node = False,
                 zenither_pose_topic = 'zenither_pose'):
        if init_ros_node:
            rospy.init_node('ZenitherClient')
        self.h = None
        self.lock = RLock()
        rospy.Subscriber(zenither_pose_topic, FloatArray, self.pose_cb)

    def pose_cb(self, fa):
        self.lock.acquire()
        self.h = fa.data[0]
        self.lock.release()

    def height(self):
        self.lock.acquire()
        h = self.h
        self.lock.release()
        return h

if __name__ == '__main__':
    zc = ZenitherClient(init_ros_node = True)
    while not rospy.is_shutdown():
        print 'h:', zc.height()
        rospy.sleep(0.1)



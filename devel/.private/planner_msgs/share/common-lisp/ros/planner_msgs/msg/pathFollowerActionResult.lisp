; Auto-generated. Do not edit!


(cl:in-package planner_msgs-msg)


;//! \htmlinclude pathFollowerActionResult.msg.html

(cl:defclass <pathFollowerActionResult> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass pathFollowerActionResult (<pathFollowerActionResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <pathFollowerActionResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'pathFollowerActionResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name planner_msgs-msg:<pathFollowerActionResult> is deprecated: use planner_msgs-msg:pathFollowerActionResult instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <pathFollowerActionResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader planner_msgs-msg:success-val is deprecated.  Use planner_msgs-msg:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <pathFollowerActionResult>) ostream)
  "Serializes a message object of type '<pathFollowerActionResult>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <pathFollowerActionResult>) istream)
  "Deserializes a message object of type '<pathFollowerActionResult>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<pathFollowerActionResult>)))
  "Returns string type for a message object of type '<pathFollowerActionResult>"
  "planner_msgs/pathFollowerActionResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'pathFollowerActionResult)))
  "Returns string type for a message object of type 'pathFollowerActionResult"
  "planner_msgs/pathFollowerActionResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<pathFollowerActionResult>)))
  "Returns md5sum for a message object of type '<pathFollowerActionResult>"
  "358e233cde0c8a8bcfea4ce193f8fc15")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'pathFollowerActionResult)))
  "Returns md5sum for a message object of type 'pathFollowerActionResult"
  "358e233cde0c8a8bcfea4ce193f8fc15")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<pathFollowerActionResult>)))
  "Returns full string definition for message of type '<pathFollowerActionResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# result~%bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'pathFollowerActionResult)))
  "Returns full string definition for message of type 'pathFollowerActionResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# result~%bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <pathFollowerActionResult>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <pathFollowerActionResult>))
  "Converts a ROS message object to a list"
  (cl:list 'pathFollowerActionResult
    (cl:cons ':success (success msg))
))

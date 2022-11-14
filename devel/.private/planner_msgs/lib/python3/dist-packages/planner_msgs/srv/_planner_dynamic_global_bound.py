# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from planner_msgs/planner_dynamic_global_boundRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class planner_dynamic_global_boundRequest(genpy.Message):
  _md5sum = "77084cd2fbed3f310ab736521dfcf7b1"
  _type = "planner_msgs/planner_dynamic_global_boundRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# reset_to_default:
#   true:  reset to the default bounding box
#   false: set new bounding box
bool reset_to_default

# Header contains the frame in which the bounding box is expressed
std_msgs/Header header

# All coordinates are absolute and expressed in global frame (as set in the header)
geometry_msgs/Point center  # Origin of bounding box
geometry_msgs/Point left    # Vertex on the left of center when looking along the vector of the bb
geometry_msgs/Point front   # Vertex in the front of center when looking along the vector of the bb
geometry_msgs/Point up      # Vertex above center when looking along the vector of the bb


================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z
"""
  __slots__ = ['reset_to_default','header','center','left','front','up']
  _slot_types = ['bool','std_msgs/Header','geometry_msgs/Point','geometry_msgs/Point','geometry_msgs/Point','geometry_msgs/Point']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       reset_to_default,header,center,left,front,up

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(planner_dynamic_global_boundRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.reset_to_default is None:
        self.reset_to_default = False
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.center is None:
        self.center = geometry_msgs.msg.Point()
      if self.left is None:
        self.left = geometry_msgs.msg.Point()
      if self.front is None:
        self.front = geometry_msgs.msg.Point()
      if self.up is None:
        self.up = geometry_msgs.msg.Point()
    else:
      self.reset_to_default = False
      self.header = std_msgs.msg.Header()
      self.center = geometry_msgs.msg.Point()
      self.left = geometry_msgs.msg.Point()
      self.front = geometry_msgs.msg.Point()
      self.up = geometry_msgs.msg.Point()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_B3I().pack(_x.reset_to_default, _x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_12d().pack(_x.center.x, _x.center.y, _x.center.z, _x.left.x, _x.left.y, _x.left.z, _x.front.x, _x.front.y, _x.front.z, _x.up.x, _x.up.y, _x.up.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.center is None:
        self.center = geometry_msgs.msg.Point()
      if self.left is None:
        self.left = geometry_msgs.msg.Point()
      if self.front is None:
        self.front = geometry_msgs.msg.Point()
      if self.up is None:
        self.up = geometry_msgs.msg.Point()
      end = 0
      _x = self
      start = end
      end += 13
      (_x.reset_to_default, _x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_B3I().unpack(str[start:end])
      self.reset_to_default = bool(self.reset_to_default)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 96
      (_x.center.x, _x.center.y, _x.center.z, _x.left.x, _x.left.y, _x.left.z, _x.front.x, _x.front.y, _x.front.z, _x.up.x, _x.up.y, _x.up.z,) = _get_struct_12d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_B3I().pack(_x.reset_to_default, _x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_12d().pack(_x.center.x, _x.center.y, _x.center.z, _x.left.x, _x.left.y, _x.left.z, _x.front.x, _x.front.y, _x.front.z, _x.up.x, _x.up.y, _x.up.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.center is None:
        self.center = geometry_msgs.msg.Point()
      if self.left is None:
        self.left = geometry_msgs.msg.Point()
      if self.front is None:
        self.front = geometry_msgs.msg.Point()
      if self.up is None:
        self.up = geometry_msgs.msg.Point()
      end = 0
      _x = self
      start = end
      end += 13
      (_x.reset_to_default, _x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_B3I().unpack(str[start:end])
      self.reset_to_default = bool(self.reset_to_default)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 96
      (_x.center.x, _x.center.y, _x.center.z, _x.left.x, _x.left.y, _x.left.z, _x.front.x, _x.front.y, _x.front.z, _x.up.x, _x.up.y, _x.up.z,) = _get_struct_12d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_12d = None
def _get_struct_12d():
    global _struct_12d
    if _struct_12d is None:
        _struct_12d = struct.Struct("<12d")
    return _struct_12d
_struct_B3I = None
def _get_struct_B3I():
    global _struct_B3I
    if _struct_B3I is None:
        _struct_B3I = struct.Struct("<B3I")
    return _struct_B3I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from planner_msgs/planner_dynamic_global_boundResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class planner_dynamic_global_boundResponse(genpy.Message):
  _md5sum = "358e233cde0c8a8bcfea4ce193f8fc15"
  _type = "planner_msgs/planner_dynamic_global_boundResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
bool success
"""
  __slots__ = ['success']
  _slot_types = ['bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       success

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(planner_dynamic_global_boundResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.success is None:
        self.success = False
    else:
      self.success = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.success
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.success,) = _get_struct_B().unpack(str[start:end])
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.success
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.success,) = _get_struct_B().unpack(str[start:end])
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
class planner_dynamic_global_bound(object):
  _type          = 'planner_msgs/planner_dynamic_global_bound'
  _md5sum = '31ef93df2f4c5feda83abcda3ab1ffb3'
  _request_class  = planner_dynamic_global_boundRequest
  _response_class = planner_dynamic_global_boundResponse
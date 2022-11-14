# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from planner_msgs/Vertex.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class Vertex(genpy.Message):
  _md5sum = "663034a815fe27eaa71d6d6b0f8b9b78"
  _type = "planner_msgs/Vertex"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """int32 id
geometry_msgs/Pose pose

# For volumetric gain
int32 num_unknown_voxels
int32 num_occupied_voxels
int32 num_free_voxels
bool is_frontier
================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['id','pose','num_unknown_voxels','num_occupied_voxels','num_free_voxels','is_frontier']
  _slot_types = ['int32','geometry_msgs/Pose','int32','int32','int32','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       id,pose,num_unknown_voxels,num_occupied_voxels,num_free_voxels,is_frontier

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Vertex, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.id is None:
        self.id = 0
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      if self.num_unknown_voxels is None:
        self.num_unknown_voxels = 0
      if self.num_occupied_voxels is None:
        self.num_occupied_voxels = 0
      if self.num_free_voxels is None:
        self.num_free_voxels = 0
      if self.is_frontier is None:
        self.is_frontier = False
    else:
      self.id = 0
      self.pose = geometry_msgs.msg.Pose()
      self.num_unknown_voxels = 0
      self.num_occupied_voxels = 0
      self.num_free_voxels = 0
      self.is_frontier = False

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
      buff.write(_get_struct_i7d3iB().pack(_x.id, _x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.num_unknown_voxels, _x.num_occupied_voxels, _x.num_free_voxels, _x.is_frontier))
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
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 73
      (_x.id, _x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.num_unknown_voxels, _x.num_occupied_voxels, _x.num_free_voxels, _x.is_frontier,) = _get_struct_i7d3iB().unpack(str[start:end])
      self.is_frontier = bool(self.is_frontier)
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
      buff.write(_get_struct_i7d3iB().pack(_x.id, _x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.num_unknown_voxels, _x.num_occupied_voxels, _x.num_free_voxels, _x.is_frontier))
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
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 73
      (_x.id, _x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.num_unknown_voxels, _x.num_occupied_voxels, _x.num_free_voxels, _x.is_frontier,) = _get_struct_i7d3iB().unpack(str[start:end])
      self.is_frontier = bool(self.is_frontier)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_i7d3iB = None
def _get_struct_i7d3iB():
    global _struct_i7d3iB
    if _struct_i7d3iB is None:
        _struct_i7d3iB = struct.Struct("<i7d3iB")
    return _struct_i7d3iB
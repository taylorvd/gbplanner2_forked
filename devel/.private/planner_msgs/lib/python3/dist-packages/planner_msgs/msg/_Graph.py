# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from planner_msgs/Graph.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import planner_msgs.msg
import std_msgs.msg

class Graph(genpy.Message):
  _md5sum = "0f1eb1d0b23f9055c17c609dc10e68a8"
  _type = "planner_msgs/Graph"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """Header header
planner_msgs/Vertex[] vertices
planner_msgs/Edge[] edges
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
MSG: planner_msgs/Vertex
int32 id
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

================================================================================
MSG: planner_msgs/Edge
int32 source_id
int32 target_id
float32 weight"""
  __slots__ = ['header','vertices','edges']
  _slot_types = ['std_msgs/Header','planner_msgs/Vertex[]','planner_msgs/Edge[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,vertices,edges

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Graph, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.vertices is None:
        self.vertices = []
      if self.edges is None:
        self.edges = []
    else:
      self.header = std_msgs.msg.Header()
      self.vertices = []
      self.edges = []

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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.vertices)
      buff.write(_struct_I.pack(length))
      for val1 in self.vertices:
        _x = val1.id
        buff.write(_get_struct_i().pack(_x))
        _v1 = val1.pose
        _v2 = _v1.position
        _x = _v2
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v3 = _v1.orientation
        _x = _v3
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
        _x = val1
        buff.write(_get_struct_3iB().pack(_x.num_unknown_voxels, _x.num_occupied_voxels, _x.num_free_voxels, _x.is_frontier))
      length = len(self.edges)
      buff.write(_struct_I.pack(length))
      for val1 in self.edges:
        _x = val1
        buff.write(_get_struct_2if().pack(_x.source_id, _x.target_id, _x.weight))
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
      if self.vertices is None:
        self.vertices = None
      if self.edges is None:
        self.edges = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.vertices = []
      for i in range(0, length):
        val1 = planner_msgs.msg.Vertex()
        start = end
        end += 4
        (val1.id,) = _get_struct_i().unpack(str[start:end])
        _v4 = val1.pose
        _v5 = _v4.position
        _x = _v5
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v6 = _v4.orientation
        _x = _v6
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        _x = val1
        start = end
        end += 13
        (_x.num_unknown_voxels, _x.num_occupied_voxels, _x.num_free_voxels, _x.is_frontier,) = _get_struct_3iB().unpack(str[start:end])
        val1.is_frontier = bool(val1.is_frontier)
        self.vertices.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.edges = []
      for i in range(0, length):
        val1 = planner_msgs.msg.Edge()
        _x = val1
        start = end
        end += 12
        (_x.source_id, _x.target_id, _x.weight,) = _get_struct_2if().unpack(str[start:end])
        self.edges.append(val1)
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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.vertices)
      buff.write(_struct_I.pack(length))
      for val1 in self.vertices:
        _x = val1.id
        buff.write(_get_struct_i().pack(_x))
        _v7 = val1.pose
        _v8 = _v7.position
        _x = _v8
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v9 = _v7.orientation
        _x = _v9
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
        _x = val1
        buff.write(_get_struct_3iB().pack(_x.num_unknown_voxels, _x.num_occupied_voxels, _x.num_free_voxels, _x.is_frontier))
      length = len(self.edges)
      buff.write(_struct_I.pack(length))
      for val1 in self.edges:
        _x = val1
        buff.write(_get_struct_2if().pack(_x.source_id, _x.target_id, _x.weight))
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
      if self.vertices is None:
        self.vertices = None
      if self.edges is None:
        self.edges = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.vertices = []
      for i in range(0, length):
        val1 = planner_msgs.msg.Vertex()
        start = end
        end += 4
        (val1.id,) = _get_struct_i().unpack(str[start:end])
        _v10 = val1.pose
        _v11 = _v10.position
        _x = _v11
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v12 = _v10.orientation
        _x = _v12
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        _x = val1
        start = end
        end += 13
        (_x.num_unknown_voxels, _x.num_occupied_voxels, _x.num_free_voxels, _x.is_frontier,) = _get_struct_3iB().unpack(str[start:end])
        val1.is_frontier = bool(val1.is_frontier)
        self.vertices.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.edges = []
      for i in range(0, length):
        val1 = planner_msgs.msg.Edge()
        _x = val1
        start = end
        end += 12
        (_x.source_id, _x.target_id, _x.weight,) = _get_struct_2if().unpack(str[start:end])
        self.edges.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2if = None
def _get_struct_2if():
    global _struct_2if
    if _struct_2if is None:
        _struct_2if = struct.Struct("<2if")
    return _struct_2if
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
_struct_3iB = None
def _get_struct_3iB():
    global _struct_3iB
    if _struct_3iB is None:
        _struct_3iB = struct.Struct("<3iB")
    return _struct_3iB
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i

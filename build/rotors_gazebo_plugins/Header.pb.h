// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Header.proto

#ifndef PROTOBUF_INCLUDED_Header_2eproto
#define PROTOBUF_INCLUDED_Header_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_Header_2eproto 

namespace protobuf_Header_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_Header_2eproto
namespace gz_std_msgs {
class Header;
class HeaderDefaultTypeInternal;
extern HeaderDefaultTypeInternal _Header_default_instance_;
class Header_Stamp;
class Header_StampDefaultTypeInternal;
extern Header_StampDefaultTypeInternal _Header_Stamp_default_instance_;
}  // namespace gz_std_msgs
namespace google {
namespace protobuf {
template<> ::gz_std_msgs::Header* Arena::CreateMaybeMessage<::gz_std_msgs::Header>(Arena*);
template<> ::gz_std_msgs::Header_Stamp* Arena::CreateMaybeMessage<::gz_std_msgs::Header_Stamp>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz_std_msgs {

// ===================================================================

class Header_Stamp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz_std_msgs.Header.Stamp) */ {
 public:
  Header_Stamp();
  virtual ~Header_Stamp();

  Header_Stamp(const Header_Stamp& from);

  inline Header_Stamp& operator=(const Header_Stamp& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Header_Stamp(Header_Stamp&& from) noexcept
    : Header_Stamp() {
    *this = ::std::move(from);
  }

  inline Header_Stamp& operator=(Header_Stamp&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Header_Stamp& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Header_Stamp* internal_default_instance() {
    return reinterpret_cast<const Header_Stamp*>(
               &_Header_Stamp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Header_Stamp* other);
  friend void swap(Header_Stamp& a, Header_Stamp& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Header_Stamp* New() const final {
    return CreateMaybeMessage<Header_Stamp>(NULL);
  }

  Header_Stamp* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Header_Stamp>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Header_Stamp& from);
  void MergeFrom(const Header_Stamp& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Header_Stamp* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 sec = 1;
  bool has_sec() const;
  void clear_sec();
  static const int kSecFieldNumber = 1;
  ::google::protobuf::uint32 sec() const;
  void set_sec(::google::protobuf::uint32 value);

  // required uint32 nsec = 2;
  bool has_nsec() const;
  void clear_nsec();
  static const int kNsecFieldNumber = 2;
  ::google::protobuf::uint32 nsec() const;
  void set_nsec(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:gz_std_msgs.Header.Stamp)
 private:
  void set_has_sec();
  void clear_has_sec();
  void set_has_nsec();
  void clear_has_nsec();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 sec_;
  ::google::protobuf::uint32 nsec_;
  friend struct ::protobuf_Header_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Header : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz_std_msgs.Header) */ {
 public:
  Header();
  virtual ~Header();

  Header(const Header& from);

  inline Header& operator=(const Header& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Header(Header&& from) noexcept
    : Header() {
    *this = ::std::move(from);
  }

  inline Header& operator=(Header&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Header& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Header* internal_default_instance() {
    return reinterpret_cast<const Header*>(
               &_Header_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Header* other);
  friend void swap(Header& a, Header& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Header* New() const final {
    return CreateMaybeMessage<Header>(NULL);
  }

  Header* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Header>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Header& from);
  void MergeFrom(const Header& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Header* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Header_Stamp Stamp;

  // accessors -------------------------------------------------------

  // required string frame_id = 1;
  bool has_frame_id() const;
  void clear_frame_id();
  static const int kFrameIdFieldNumber = 1;
  const ::std::string& frame_id() const;
  void set_frame_id(const ::std::string& value);
  #if LANG_CXX11
  void set_frame_id(::std::string&& value);
  #endif
  void set_frame_id(const char* value);
  void set_frame_id(const char* value, size_t size);
  ::std::string* mutable_frame_id();
  ::std::string* release_frame_id();
  void set_allocated_frame_id(::std::string* frame_id);

  // required .gz_std_msgs.Header.Stamp stamp = 2;
  bool has_stamp() const;
  void clear_stamp();
  static const int kStampFieldNumber = 2;
  private:
  const ::gz_std_msgs::Header_Stamp& _internal_stamp() const;
  public:
  const ::gz_std_msgs::Header_Stamp& stamp() const;
  ::gz_std_msgs::Header_Stamp* release_stamp();
  ::gz_std_msgs::Header_Stamp* mutable_stamp();
  void set_allocated_stamp(::gz_std_msgs::Header_Stamp* stamp);

  // @@protoc_insertion_point(class_scope:gz_std_msgs.Header)
 private:
  void set_has_frame_id();
  void clear_has_frame_id();
  void set_has_stamp();
  void clear_has_stamp();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr frame_id_;
  ::gz_std_msgs::Header_Stamp* stamp_;
  friend struct ::protobuf_Header_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Header_Stamp

// required uint32 sec = 1;
inline bool Header_Stamp::has_sec() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Header_Stamp::set_has_sec() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Header_Stamp::clear_has_sec() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Header_Stamp::clear_sec() {
  sec_ = 0u;
  clear_has_sec();
}
inline ::google::protobuf::uint32 Header_Stamp::sec() const {
  // @@protoc_insertion_point(field_get:gz_std_msgs.Header.Stamp.sec)
  return sec_;
}
inline void Header_Stamp::set_sec(::google::protobuf::uint32 value) {
  set_has_sec();
  sec_ = value;
  // @@protoc_insertion_point(field_set:gz_std_msgs.Header.Stamp.sec)
}

// required uint32 nsec = 2;
inline bool Header_Stamp::has_nsec() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Header_Stamp::set_has_nsec() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Header_Stamp::clear_has_nsec() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Header_Stamp::clear_nsec() {
  nsec_ = 0u;
  clear_has_nsec();
}
inline ::google::protobuf::uint32 Header_Stamp::nsec() const {
  // @@protoc_insertion_point(field_get:gz_std_msgs.Header.Stamp.nsec)
  return nsec_;
}
inline void Header_Stamp::set_nsec(::google::protobuf::uint32 value) {
  set_has_nsec();
  nsec_ = value;
  // @@protoc_insertion_point(field_set:gz_std_msgs.Header.Stamp.nsec)
}

// -------------------------------------------------------------------

// Header

// required string frame_id = 1;
inline bool Header::has_frame_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Header::set_has_frame_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Header::clear_has_frame_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Header::clear_frame_id() {
  frame_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_frame_id();
}
inline const ::std::string& Header::frame_id() const {
  // @@protoc_insertion_point(field_get:gz_std_msgs.Header.frame_id)
  return frame_id_.GetNoArena();
}
inline void Header::set_frame_id(const ::std::string& value) {
  set_has_frame_id();
  frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz_std_msgs.Header.frame_id)
}
#if LANG_CXX11
inline void Header::set_frame_id(::std::string&& value) {
  set_has_frame_id();
  frame_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz_std_msgs.Header.frame_id)
}
#endif
inline void Header::set_frame_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_frame_id();
  frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz_std_msgs.Header.frame_id)
}
inline void Header::set_frame_id(const char* value, size_t size) {
  set_has_frame_id();
  frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz_std_msgs.Header.frame_id)
}
inline ::std::string* Header::mutable_frame_id() {
  set_has_frame_id();
  // @@protoc_insertion_point(field_mutable:gz_std_msgs.Header.frame_id)
  return frame_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Header::release_frame_id() {
  // @@protoc_insertion_point(field_release:gz_std_msgs.Header.frame_id)
  if (!has_frame_id()) {
    return NULL;
  }
  clear_has_frame_id();
  return frame_id_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Header::set_allocated_frame_id(::std::string* frame_id) {
  if (frame_id != NULL) {
    set_has_frame_id();
  } else {
    clear_has_frame_id();
  }
  frame_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), frame_id);
  // @@protoc_insertion_point(field_set_allocated:gz_std_msgs.Header.frame_id)
}

// required .gz_std_msgs.Header.Stamp stamp = 2;
inline bool Header::has_stamp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Header::set_has_stamp() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Header::clear_has_stamp() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Header::clear_stamp() {
  if (stamp_ != NULL) stamp_->Clear();
  clear_has_stamp();
}
inline const ::gz_std_msgs::Header_Stamp& Header::_internal_stamp() const {
  return *stamp_;
}
inline const ::gz_std_msgs::Header_Stamp& Header::stamp() const {
  const ::gz_std_msgs::Header_Stamp* p = stamp_;
  // @@protoc_insertion_point(field_get:gz_std_msgs.Header.stamp)
  return p != NULL ? *p : *reinterpret_cast<const ::gz_std_msgs::Header_Stamp*>(
      &::gz_std_msgs::_Header_Stamp_default_instance_);
}
inline ::gz_std_msgs::Header_Stamp* Header::release_stamp() {
  // @@protoc_insertion_point(field_release:gz_std_msgs.Header.stamp)
  clear_has_stamp();
  ::gz_std_msgs::Header_Stamp* temp = stamp_;
  stamp_ = NULL;
  return temp;
}
inline ::gz_std_msgs::Header_Stamp* Header::mutable_stamp() {
  set_has_stamp();
  if (stamp_ == NULL) {
    auto* p = CreateMaybeMessage<::gz_std_msgs::Header_Stamp>(GetArenaNoVirtual());
    stamp_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz_std_msgs.Header.stamp)
  return stamp_;
}
inline void Header::set_allocated_stamp(::gz_std_msgs::Header_Stamp* stamp) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete stamp_;
  }
  if (stamp) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      stamp = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, stamp, submessage_arena);
    }
    set_has_stamp();
  } else {
    clear_has_stamp();
  }
  stamp_ = stamp;
  // @@protoc_insertion_point(field_set_allocated:gz_std_msgs.Header.stamp)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace gz_std_msgs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_Header_2eproto

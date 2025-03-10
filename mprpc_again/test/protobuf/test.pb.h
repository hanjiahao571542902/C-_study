// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_test_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_test_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_test_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_test_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_test_2eproto;
namespace fixbug {
class GetFriendListsRequest;
class GetFriendListsRequestDefaultTypeInternal;
extern GetFriendListsRequestDefaultTypeInternal _GetFriendListsRequest_default_instance_;
class GetFriendListsResponse;
class GetFriendListsResponseDefaultTypeInternal;
extern GetFriendListsResponseDefaultTypeInternal _GetFriendListsResponse_default_instance_;
class ResultCode;
class ResultCodeDefaultTypeInternal;
extern ResultCodeDefaultTypeInternal _ResultCode_default_instance_;
class User;
class UserDefaultTypeInternal;
extern UserDefaultTypeInternal _User_default_instance_;
}  // namespace fixbug
PROTOBUF_NAMESPACE_OPEN
template<> ::fixbug::GetFriendListsRequest* Arena::CreateMaybeMessage<::fixbug::GetFriendListsRequest>(Arena*);
template<> ::fixbug::GetFriendListsResponse* Arena::CreateMaybeMessage<::fixbug::GetFriendListsResponse>(Arena*);
template<> ::fixbug::ResultCode* Arena::CreateMaybeMessage<::fixbug::ResultCode>(Arena*);
template<> ::fixbug::User* Arena::CreateMaybeMessage<::fixbug::User>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace fixbug {

enum User_Sex : int {
  User_Sex_MAN = 0,
  User_Sex_WOMEN = 1,
  User_Sex_User_Sex_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  User_Sex_User_Sex_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool User_Sex_IsValid(int value);
constexpr User_Sex User_Sex_Sex_MIN = User_Sex_MAN;
constexpr User_Sex User_Sex_Sex_MAX = User_Sex_WOMEN;
constexpr int User_Sex_Sex_ARRAYSIZE = User_Sex_Sex_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* User_Sex_descriptor();
template<typename T>
inline const std::string& User_Sex_Name(T enum_t_value) {
  static_assert(::std::is_same<T, User_Sex>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function User_Sex_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    User_Sex_descriptor(), enum_t_value);
}
inline bool User_Sex_Parse(
    const std::string& name, User_Sex* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<User_Sex>(
    User_Sex_descriptor(), name, value);
}
// ===================================================================

class ResultCode :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:fixbug.ResultCode) */ {
 public:
  ResultCode();
  virtual ~ResultCode();

  ResultCode(const ResultCode& from);
  ResultCode(ResultCode&& from) noexcept
    : ResultCode() {
    *this = ::std::move(from);
  }

  inline ResultCode& operator=(const ResultCode& from) {
    CopyFrom(from);
    return *this;
  }
  inline ResultCode& operator=(ResultCode&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ResultCode& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ResultCode* internal_default_instance() {
    return reinterpret_cast<const ResultCode*>(
               &_ResultCode_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ResultCode& a, ResultCode& b) {
    a.Swap(&b);
  }
  inline void Swap(ResultCode* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ResultCode* New() const final {
    return CreateMaybeMessage<ResultCode>(nullptr);
  }

  ResultCode* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ResultCode>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ResultCode& from);
  void MergeFrom(const ResultCode& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ResultCode* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "fixbug.ResultCode";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_test_2eproto);
    return ::descriptor_table_test_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrmsgFieldNumber = 2,
    kErrcodeFieldNumber = 1,
  };
  // bytes errmsg = 2;
  void clear_errmsg();
  const std::string& errmsg() const;
  void set_errmsg(const std::string& value);
  void set_errmsg(std::string&& value);
  void set_errmsg(const char* value);
  void set_errmsg(const void* value, size_t size);
  std::string* mutable_errmsg();
  std::string* release_errmsg();
  void set_allocated_errmsg(std::string* errmsg);
  private:
  const std::string& _internal_errmsg() const;
  void _internal_set_errmsg(const std::string& value);
  std::string* _internal_mutable_errmsg();
  public:

  // int32 errcode = 1;
  void clear_errcode();
  ::PROTOBUF_NAMESPACE_ID::int32 errcode() const;
  void set_errcode(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_errcode() const;
  void _internal_set_errcode(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:fixbug.ResultCode)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr errmsg_;
  ::PROTOBUF_NAMESPACE_ID::int32 errcode_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_test_2eproto;
};
// -------------------------------------------------------------------

class GetFriendListsRequest :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:fixbug.GetFriendListsRequest) */ {
 public:
  GetFriendListsRequest();
  virtual ~GetFriendListsRequest();

  GetFriendListsRequest(const GetFriendListsRequest& from);
  GetFriendListsRequest(GetFriendListsRequest&& from) noexcept
    : GetFriendListsRequest() {
    *this = ::std::move(from);
  }

  inline GetFriendListsRequest& operator=(const GetFriendListsRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetFriendListsRequest& operator=(GetFriendListsRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const GetFriendListsRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetFriendListsRequest* internal_default_instance() {
    return reinterpret_cast<const GetFriendListsRequest*>(
               &_GetFriendListsRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GetFriendListsRequest& a, GetFriendListsRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(GetFriendListsRequest* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GetFriendListsRequest* New() const final {
    return CreateMaybeMessage<GetFriendListsRequest>(nullptr);
  }

  GetFriendListsRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GetFriendListsRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GetFriendListsRequest& from);
  void MergeFrom(const GetFriendListsRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetFriendListsRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "fixbug.GetFriendListsRequest";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_test_2eproto);
    return ::descriptor_table_test_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUseridFieldNumber = 1,
  };
  // uint32 userid = 1;
  void clear_userid();
  ::PROTOBUF_NAMESPACE_ID::uint32 userid() const;
  void set_userid(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_userid() const;
  void _internal_set_userid(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:fixbug.GetFriendListsRequest)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::uint32 userid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_test_2eproto;
};
// -------------------------------------------------------------------

class User :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:fixbug.User) */ {
 public:
  User();
  virtual ~User();

  User(const User& from);
  User(User&& from) noexcept
    : User() {
    *this = ::std::move(from);
  }

  inline User& operator=(const User& from) {
    CopyFrom(from);
    return *this;
  }
  inline User& operator=(User&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const User& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const User* internal_default_instance() {
    return reinterpret_cast<const User*>(
               &_User_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(User& a, User& b) {
    a.Swap(&b);
  }
  inline void Swap(User* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline User* New() const final {
    return CreateMaybeMessage<User>(nullptr);
  }

  User* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<User>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const User& from);
  void MergeFrom(const User& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(User* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "fixbug.User";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_test_2eproto);
    return ::descriptor_table_test_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef User_Sex Sex;
  static constexpr Sex MAN =
    User_Sex_MAN;
  static constexpr Sex WOMEN =
    User_Sex_WOMEN;
  static inline bool Sex_IsValid(int value) {
    return User_Sex_IsValid(value);
  }
  static constexpr Sex Sex_MIN =
    User_Sex_Sex_MIN;
  static constexpr Sex Sex_MAX =
    User_Sex_Sex_MAX;
  static constexpr int Sex_ARRAYSIZE =
    User_Sex_Sex_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Sex_descriptor() {
    return User_Sex_descriptor();
  }
  template<typename T>
  static inline const std::string& Sex_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Sex>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Sex_Name.");
    return User_Sex_Name(enum_t_value);
  }
  static inline bool Sex_Parse(const std::string& name,
      Sex* value) {
    return User_Sex_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kAgeFieldNumber = 2,
    kSexFieldNumber = 3,
  };
  // bytes name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const void* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // uint32 age = 2;
  void clear_age();
  ::PROTOBUF_NAMESPACE_ID::uint32 age() const;
  void set_age(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_age() const;
  void _internal_set_age(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // .fixbug.User.Sex sex = 3;
  void clear_sex();
  ::fixbug::User_Sex sex() const;
  void set_sex(::fixbug::User_Sex value);
  private:
  ::fixbug::User_Sex _internal_sex() const;
  void _internal_set_sex(::fixbug::User_Sex value);
  public:

  // @@protoc_insertion_point(class_scope:fixbug.User)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::uint32 age_;
  int sex_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_test_2eproto;
};
// -------------------------------------------------------------------

class GetFriendListsResponse :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:fixbug.GetFriendListsResponse) */ {
 public:
  GetFriendListsResponse();
  virtual ~GetFriendListsResponse();

  GetFriendListsResponse(const GetFriendListsResponse& from);
  GetFriendListsResponse(GetFriendListsResponse&& from) noexcept
    : GetFriendListsResponse() {
    *this = ::std::move(from);
  }

  inline GetFriendListsResponse& operator=(const GetFriendListsResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetFriendListsResponse& operator=(GetFriendListsResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const GetFriendListsResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetFriendListsResponse* internal_default_instance() {
    return reinterpret_cast<const GetFriendListsResponse*>(
               &_GetFriendListsResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(GetFriendListsResponse& a, GetFriendListsResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(GetFriendListsResponse* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GetFriendListsResponse* New() const final {
    return CreateMaybeMessage<GetFriendListsResponse>(nullptr);
  }

  GetFriendListsResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GetFriendListsResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GetFriendListsResponse& from);
  void MergeFrom(const GetFriendListsResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetFriendListsResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "fixbug.GetFriendListsResponse";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_test_2eproto);
    return ::descriptor_table_test_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFriendListFieldNumber = 2,
    kCodeFieldNumber = 1,
  };
  // repeated .fixbug.User friend_list = 2;
  int friend_list_size() const;
  private:
  int _internal_friend_list_size() const;
  public:
  void clear_friend_list();
  ::fixbug::User* mutable_friend_list(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::fixbug::User >*
      mutable_friend_list();
  private:
  const ::fixbug::User& _internal_friend_list(int index) const;
  ::fixbug::User* _internal_add_friend_list();
  public:
  const ::fixbug::User& friend_list(int index) const;
  ::fixbug::User* add_friend_list();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::fixbug::User >&
      friend_list() const;

  // .fixbug.ResultCode code = 1;
  bool has_code() const;
  private:
  bool _internal_has_code() const;
  public:
  void clear_code();
  const ::fixbug::ResultCode& code() const;
  ::fixbug::ResultCode* release_code();
  ::fixbug::ResultCode* mutable_code();
  void set_allocated_code(::fixbug::ResultCode* code);
  private:
  const ::fixbug::ResultCode& _internal_code() const;
  ::fixbug::ResultCode* _internal_mutable_code();
  public:

  // @@protoc_insertion_point(class_scope:fixbug.GetFriendListsResponse)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::fixbug::User > friend_list_;
  ::fixbug::ResultCode* code_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_test_2eproto;
};
// ===================================================================

class UserServiceRpc_Stub;

class UserServiceRpc : public ::PROTOBUF_NAMESPACE_ID::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline UserServiceRpc() {};
 public:
  virtual ~UserServiceRpc();

  typedef UserServiceRpc_Stub Stub;

  static const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* descriptor();

  virtual void GetFriendLists(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::fixbug::GetFriendListsRequest* request,
                       ::fixbug::GetFriendListsResponse* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                  ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                  const ::PROTOBUF_NAMESPACE_ID::Message* request,
                  ::PROTOBUF_NAMESPACE_ID::Message* response,
                  ::google::protobuf::Closure* done);
  const ::PROTOBUF_NAMESPACE_ID::Message& GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const;
  const ::PROTOBUF_NAMESPACE_ID::Message& GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(UserServiceRpc);
};

class UserServiceRpc_Stub : public UserServiceRpc {
 public:
  UserServiceRpc_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel);
  UserServiceRpc_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
                   ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership);
  ~UserServiceRpc_Stub();

  inline ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel() { return channel_; }

  // implements UserServiceRpc ------------------------------------------

  void GetFriendLists(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::fixbug::GetFriendListsRequest* request,
                       ::fixbug::GetFriendListsResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(UserServiceRpc_Stub);
};


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ResultCode

// int32 errcode = 1;
inline void ResultCode::clear_errcode() {
  errcode_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ResultCode::_internal_errcode() const {
  return errcode_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ResultCode::errcode() const {
  // @@protoc_insertion_point(field_get:fixbug.ResultCode.errcode)
  return _internal_errcode();
}
inline void ResultCode::_internal_set_errcode(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  errcode_ = value;
}
inline void ResultCode::set_errcode(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_errcode(value);
  // @@protoc_insertion_point(field_set:fixbug.ResultCode.errcode)
}

// bytes errmsg = 2;
inline void ResultCode::clear_errmsg() {
  errmsg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ResultCode::errmsg() const {
  // @@protoc_insertion_point(field_get:fixbug.ResultCode.errmsg)
  return _internal_errmsg();
}
inline void ResultCode::set_errmsg(const std::string& value) {
  _internal_set_errmsg(value);
  // @@protoc_insertion_point(field_set:fixbug.ResultCode.errmsg)
}
inline std::string* ResultCode::mutable_errmsg() {
  // @@protoc_insertion_point(field_mutable:fixbug.ResultCode.errmsg)
  return _internal_mutable_errmsg();
}
inline const std::string& ResultCode::_internal_errmsg() const {
  return errmsg_.GetNoArena();
}
inline void ResultCode::_internal_set_errmsg(const std::string& value) {
  
  errmsg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void ResultCode::set_errmsg(std::string&& value) {
  
  errmsg_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:fixbug.ResultCode.errmsg)
}
inline void ResultCode::set_errmsg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  errmsg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:fixbug.ResultCode.errmsg)
}
inline void ResultCode::set_errmsg(const void* value, size_t size) {
  
  errmsg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:fixbug.ResultCode.errmsg)
}
inline std::string* ResultCode::_internal_mutable_errmsg() {
  
  return errmsg_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ResultCode::release_errmsg() {
  // @@protoc_insertion_point(field_release:fixbug.ResultCode.errmsg)
  
  return errmsg_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ResultCode::set_allocated_errmsg(std::string* errmsg) {
  if (errmsg != nullptr) {
    
  } else {
    
  }
  errmsg_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), errmsg);
  // @@protoc_insertion_point(field_set_allocated:fixbug.ResultCode.errmsg)
}

// -------------------------------------------------------------------

// GetFriendListsRequest

// uint32 userid = 1;
inline void GetFriendListsRequest::clear_userid() {
  userid_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GetFriendListsRequest::_internal_userid() const {
  return userid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GetFriendListsRequest::userid() const {
  // @@protoc_insertion_point(field_get:fixbug.GetFriendListsRequest.userid)
  return _internal_userid();
}
inline void GetFriendListsRequest::_internal_set_userid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  userid_ = value;
}
inline void GetFriendListsRequest::set_userid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_userid(value);
  // @@protoc_insertion_point(field_set:fixbug.GetFriendListsRequest.userid)
}

// -------------------------------------------------------------------

// User

// bytes name = 1;
inline void User::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& User::name() const {
  // @@protoc_insertion_point(field_get:fixbug.User.name)
  return _internal_name();
}
inline void User::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:fixbug.User.name)
}
inline std::string* User::mutable_name() {
  // @@protoc_insertion_point(field_mutable:fixbug.User.name)
  return _internal_mutable_name();
}
inline const std::string& User::_internal_name() const {
  return name_.GetNoArena();
}
inline void User::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void User::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:fixbug.User.name)
}
inline void User::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:fixbug.User.name)
}
inline void User::set_name(const void* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:fixbug.User.name)
}
inline std::string* User::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* User::release_name() {
  // @@protoc_insertion_point(field_release:fixbug.User.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void User::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:fixbug.User.name)
}

// uint32 age = 2;
inline void User::clear_age() {
  age_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 User::_internal_age() const {
  return age_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 User::age() const {
  // @@protoc_insertion_point(field_get:fixbug.User.age)
  return _internal_age();
}
inline void User::_internal_set_age(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  age_ = value;
}
inline void User::set_age(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_age(value);
  // @@protoc_insertion_point(field_set:fixbug.User.age)
}

// .fixbug.User.Sex sex = 3;
inline void User::clear_sex() {
  sex_ = 0;
}
inline ::fixbug::User_Sex User::_internal_sex() const {
  return static_cast< ::fixbug::User_Sex >(sex_);
}
inline ::fixbug::User_Sex User::sex() const {
  // @@protoc_insertion_point(field_get:fixbug.User.sex)
  return _internal_sex();
}
inline void User::_internal_set_sex(::fixbug::User_Sex value) {
  
  sex_ = value;
}
inline void User::set_sex(::fixbug::User_Sex value) {
  _internal_set_sex(value);
  // @@protoc_insertion_point(field_set:fixbug.User.sex)
}

// -------------------------------------------------------------------

// GetFriendListsResponse

// .fixbug.ResultCode code = 1;
inline bool GetFriendListsResponse::_internal_has_code() const {
  return this != internal_default_instance() && code_ != nullptr;
}
inline bool GetFriendListsResponse::has_code() const {
  return _internal_has_code();
}
inline void GetFriendListsResponse::clear_code() {
  if (GetArenaNoVirtual() == nullptr && code_ != nullptr) {
    delete code_;
  }
  code_ = nullptr;
}
inline const ::fixbug::ResultCode& GetFriendListsResponse::_internal_code() const {
  const ::fixbug::ResultCode* p = code_;
  return p != nullptr ? *p : *reinterpret_cast<const ::fixbug::ResultCode*>(
      &::fixbug::_ResultCode_default_instance_);
}
inline const ::fixbug::ResultCode& GetFriendListsResponse::code() const {
  // @@protoc_insertion_point(field_get:fixbug.GetFriendListsResponse.code)
  return _internal_code();
}
inline ::fixbug::ResultCode* GetFriendListsResponse::release_code() {
  // @@protoc_insertion_point(field_release:fixbug.GetFriendListsResponse.code)
  
  ::fixbug::ResultCode* temp = code_;
  code_ = nullptr;
  return temp;
}
inline ::fixbug::ResultCode* GetFriendListsResponse::_internal_mutable_code() {
  
  if (code_ == nullptr) {
    auto* p = CreateMaybeMessage<::fixbug::ResultCode>(GetArenaNoVirtual());
    code_ = p;
  }
  return code_;
}
inline ::fixbug::ResultCode* GetFriendListsResponse::mutable_code() {
  // @@protoc_insertion_point(field_mutable:fixbug.GetFriendListsResponse.code)
  return _internal_mutable_code();
}
inline void GetFriendListsResponse::set_allocated_code(::fixbug::ResultCode* code) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete code_;
  }
  if (code) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      code = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, code, submessage_arena);
    }
    
  } else {
    
  }
  code_ = code;
  // @@protoc_insertion_point(field_set_allocated:fixbug.GetFriendListsResponse.code)
}

// repeated .fixbug.User friend_list = 2;
inline int GetFriendListsResponse::_internal_friend_list_size() const {
  return friend_list_.size();
}
inline int GetFriendListsResponse::friend_list_size() const {
  return _internal_friend_list_size();
}
inline void GetFriendListsResponse::clear_friend_list() {
  friend_list_.Clear();
}
inline ::fixbug::User* GetFriendListsResponse::mutable_friend_list(int index) {
  // @@protoc_insertion_point(field_mutable:fixbug.GetFriendListsResponse.friend_list)
  return friend_list_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::fixbug::User >*
GetFriendListsResponse::mutable_friend_list() {
  // @@protoc_insertion_point(field_mutable_list:fixbug.GetFriendListsResponse.friend_list)
  return &friend_list_;
}
inline const ::fixbug::User& GetFriendListsResponse::_internal_friend_list(int index) const {
  return friend_list_.Get(index);
}
inline const ::fixbug::User& GetFriendListsResponse::friend_list(int index) const {
  // @@protoc_insertion_point(field_get:fixbug.GetFriendListsResponse.friend_list)
  return _internal_friend_list(index);
}
inline ::fixbug::User* GetFriendListsResponse::_internal_add_friend_list() {
  return friend_list_.Add();
}
inline ::fixbug::User* GetFriendListsResponse::add_friend_list() {
  // @@protoc_insertion_point(field_add:fixbug.GetFriendListsResponse.friend_list)
  return _internal_add_friend_list();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::fixbug::User >&
GetFriendListsResponse::friend_list() const {
  // @@protoc_insertion_point(field_list:fixbug.GetFriendListsResponse.friend_list)
  return friend_list_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace fixbug

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::fixbug::User_Sex> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::fixbug::User_Sex>() {
  return ::fixbug::User_Sex_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_test_2eproto

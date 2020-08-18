// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef PROTOBUF_test_2eproto__INCLUDED
#define PROTOBUF_test_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Test {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_test_2eproto();
void protobuf_AssignDesc_test_2eproto();
void protobuf_ShutdownFile_test_2eproto();

class User;
class User_PhoneNumber;
class StockInfo;

enum User_PhoneType {
  User_PhoneType_MOBILE = 0,
  User_PhoneType_HOME = 1,
  User_PhoneType_WORK = 2
};
bool User_PhoneType_IsValid(int value);
const User_PhoneType User_PhoneType_PhoneType_MIN = User_PhoneType_MOBILE;
const User_PhoneType User_PhoneType_PhoneType_MAX = User_PhoneType_WORK;
const int User_PhoneType_PhoneType_ARRAYSIZE = User_PhoneType_PhoneType_MAX + 1;

const ::google::protobuf::EnumDescriptor* User_PhoneType_descriptor();
inline const ::std::string& User_PhoneType_Name(User_PhoneType value) {
  return ::google::protobuf::internal::NameOfEnum(
    User_PhoneType_descriptor(), value);
}
inline bool User_PhoneType_Parse(
    const ::std::string& name, User_PhoneType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<User_PhoneType>(
    User_PhoneType_descriptor(), name, value);
}
// ===================================================================

class User_PhoneNumber : public ::google::protobuf::Message {
 public:
  User_PhoneNumber();
  virtual ~User_PhoneNumber();

  User_PhoneNumber(const User_PhoneNumber& from);

  inline User_PhoneNumber& operator=(const User_PhoneNumber& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const User_PhoneNumber& default_instance();

  void Swap(User_PhoneNumber* other);

  // implements Message ----------------------------------------------

  User_PhoneNumber* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const User_PhoneNumber& from);
  void MergeFrom(const User_PhoneNumber& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string number = 1;
  inline bool has_number() const;
  inline void clear_number();
  static const int kNumberFieldNumber = 1;
  inline const ::std::string& number() const;
  inline void set_number(const ::std::string& value);
  inline void set_number(const char* value);
  inline void set_number(const char* value, size_t size);
  inline ::std::string* mutable_number();
  inline ::std::string* release_number();
  inline void set_allocated_number(::std::string* number);

  // optional .Test.User.PhoneType type = 2 [default = HOME];
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline ::Test::User_PhoneType type() const;
  inline void set_type(::Test::User_PhoneType value);

  // @@protoc_insertion_point(class_scope:Test.User.PhoneNumber)
 private:
  inline void set_has_number();
  inline void clear_has_number();
  inline void set_has_type();
  inline void clear_has_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* number_;
  int type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static User_PhoneNumber* default_instance_;
};
// -------------------------------------------------------------------

class User : public ::google::protobuf::Message {
 public:
  User();
  virtual ~User();

  User(const User& from);

  inline User& operator=(const User& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const User& default_instance();

  void Swap(User* other);

  // implements Message ----------------------------------------------

  User* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const User& from);
  void MergeFrom(const User& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef User_PhoneNumber PhoneNumber;

  typedef User_PhoneType PhoneType;
  static const PhoneType MOBILE = User_PhoneType_MOBILE;
  static const PhoneType HOME = User_PhoneType_HOME;
  static const PhoneType WORK = User_PhoneType_WORK;
  static inline bool PhoneType_IsValid(int value) {
    return User_PhoneType_IsValid(value);
  }
  static const PhoneType PhoneType_MIN =
    User_PhoneType_PhoneType_MIN;
  static const PhoneType PhoneType_MAX =
    User_PhoneType_PhoneType_MAX;
  static const int PhoneType_ARRAYSIZE =
    User_PhoneType_PhoneType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  PhoneType_descriptor() {
    return User_PhoneType_descriptor();
  }
  static inline const ::std::string& PhoneType_Name(PhoneType value) {
    return User_PhoneType_Name(value);
  }
  static inline bool PhoneType_Parse(const ::std::string& name,
      PhoneType* value) {
    return User_PhoneType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional string nickname = 2;
  inline bool has_nickname() const;
  inline void clear_nickname();
  static const int kNicknameFieldNumber = 2;
  inline const ::std::string& nickname() const;
  inline void set_nickname(const ::std::string& value);
  inline void set_nickname(const char* value);
  inline void set_nickname(const char* value, size_t size);
  inline ::std::string* mutable_nickname();
  inline ::std::string* release_nickname();
  inline void set_allocated_nickname(::std::string* nickname);

  // repeated .Test.User.PhoneNumber phone = 4;
  inline int phone_size() const;
  inline void clear_phone();
  static const int kPhoneFieldNumber = 4;
  inline const ::Test::User_PhoneNumber& phone(int index) const;
  inline ::Test::User_PhoneNumber* mutable_phone(int index);
  inline ::Test::User_PhoneNumber* add_phone();
  inline const ::google::protobuf::RepeatedPtrField< ::Test::User_PhoneNumber >&
      phone() const;
  inline ::google::protobuf::RepeatedPtrField< ::Test::User_PhoneNumber >*
      mutable_phone();

  // optional .Test.StockInfo stock_ids = 5;
  inline bool has_stock_ids() const;
  inline void clear_stock_ids();
  static const int kStockIdsFieldNumber = 5;
  inline const ::Test::StockInfo& stock_ids() const;
  inline ::Test::StockInfo* mutable_stock_ids();
  inline ::Test::StockInfo* release_stock_ids();
  inline void set_allocated_stock_ids(::Test::StockInfo* stock_ids);

  // @@protoc_insertion_point(class_scope:Test.User)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_nickname();
  inline void clear_has_nickname();
  inline void set_has_stock_ids();
  inline void clear_has_stock_ids();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* nickname_;
  ::google::protobuf::RepeatedPtrField< ::Test::User_PhoneNumber > phone_;
  ::Test::StockInfo* stock_ids_;
  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static User* default_instance_;
};
// -------------------------------------------------------------------

class StockInfo : public ::google::protobuf::Message {
 public:
  StockInfo();
  virtual ~StockInfo();

  StockInfo(const StockInfo& from);

  inline StockInfo& operator=(const StockInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const StockInfo& default_instance();

  void Swap(StockInfo* other);

  // implements Message ----------------------------------------------

  StockInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const StockInfo& from);
  void MergeFrom(const StockInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int32 stockid = 1;
  inline int stockid_size() const;
  inline void clear_stockid();
  static const int kStockidFieldNumber = 1;
  inline ::google::protobuf::int32 stockid(int index) const;
  inline void set_stockid(int index, ::google::protobuf::int32 value);
  inline void add_stockid(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      stockid() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_stockid();

  // @@protoc_insertion_point(class_scope:Test.StockInfo)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > stockid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static StockInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// User_PhoneNumber

// required string number = 1;
inline bool User_PhoneNumber::has_number() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void User_PhoneNumber::set_has_number() {
  _has_bits_[0] |= 0x00000001u;
}
inline void User_PhoneNumber::clear_has_number() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void User_PhoneNumber::clear_number() {
  if (number_ != &::google::protobuf::internal::kEmptyString) {
    number_->clear();
  }
  clear_has_number();
}
inline const ::std::string& User_PhoneNumber::number() const {
  return *number_;
}
inline void User_PhoneNumber::set_number(const ::std::string& value) {
  set_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    number_ = new ::std::string;
  }
  number_->assign(value);
}
inline void User_PhoneNumber::set_number(const char* value) {
  set_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    number_ = new ::std::string;
  }
  number_->assign(value);
}
inline void User_PhoneNumber::set_number(const char* value, size_t size) {
  set_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    number_ = new ::std::string;
  }
  number_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* User_PhoneNumber::mutable_number() {
  set_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    number_ = new ::std::string;
  }
  return number_;
}
inline ::std::string* User_PhoneNumber::release_number() {
  clear_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = number_;
    number_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void User_PhoneNumber::set_allocated_number(::std::string* number) {
  if (number_ != &::google::protobuf::internal::kEmptyString) {
    delete number_;
  }
  if (number) {
    set_has_number();
    number_ = number;
  } else {
    clear_has_number();
    number_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional .Test.User.PhoneType type = 2 [default = HOME];
inline bool User_PhoneNumber::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void User_PhoneNumber::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void User_PhoneNumber::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void User_PhoneNumber::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::Test::User_PhoneType User_PhoneNumber::type() const {
  return static_cast< ::Test::User_PhoneType >(type_);
}
inline void User_PhoneNumber::set_type(::Test::User_PhoneType value) {
  assert(::Test::User_PhoneType_IsValid(value));
  set_has_type();
  type_ = value;
}

// -------------------------------------------------------------------

// User

// required int32 id = 1;
inline bool User::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void User::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void User::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void User::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 User::id() const {
  return id_;
}
inline void User::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional string nickname = 2;
inline bool User::has_nickname() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void User::set_has_nickname() {
  _has_bits_[0] |= 0x00000002u;
}
inline void User::clear_has_nickname() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void User::clear_nickname() {
  if (nickname_ != &::google::protobuf::internal::kEmptyString) {
    nickname_->clear();
  }
  clear_has_nickname();
}
inline const ::std::string& User::nickname() const {
  return *nickname_;
}
inline void User::set_nickname(const ::std::string& value) {
  set_has_nickname();
  if (nickname_ == &::google::protobuf::internal::kEmptyString) {
    nickname_ = new ::std::string;
  }
  nickname_->assign(value);
}
inline void User::set_nickname(const char* value) {
  set_has_nickname();
  if (nickname_ == &::google::protobuf::internal::kEmptyString) {
    nickname_ = new ::std::string;
  }
  nickname_->assign(value);
}
inline void User::set_nickname(const char* value, size_t size) {
  set_has_nickname();
  if (nickname_ == &::google::protobuf::internal::kEmptyString) {
    nickname_ = new ::std::string;
  }
  nickname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* User::mutable_nickname() {
  set_has_nickname();
  if (nickname_ == &::google::protobuf::internal::kEmptyString) {
    nickname_ = new ::std::string;
  }
  return nickname_;
}
inline ::std::string* User::release_nickname() {
  clear_has_nickname();
  if (nickname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = nickname_;
    nickname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void User::set_allocated_nickname(::std::string* nickname) {
  if (nickname_ != &::google::protobuf::internal::kEmptyString) {
    delete nickname_;
  }
  if (nickname) {
    set_has_nickname();
    nickname_ = nickname;
  } else {
    clear_has_nickname();
    nickname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .Test.User.PhoneNumber phone = 4;
inline int User::phone_size() const {
  return phone_.size();
}
inline void User::clear_phone() {
  phone_.Clear();
}
inline const ::Test::User_PhoneNumber& User::phone(int index) const {
  return phone_.Get(index);
}
inline ::Test::User_PhoneNumber* User::mutable_phone(int index) {
  return phone_.Mutable(index);
}
inline ::Test::User_PhoneNumber* User::add_phone() {
  return phone_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Test::User_PhoneNumber >&
User::phone() const {
  return phone_;
}
inline ::google::protobuf::RepeatedPtrField< ::Test::User_PhoneNumber >*
User::mutable_phone() {
  return &phone_;
}

// optional .Test.StockInfo stock_ids = 5;
inline bool User::has_stock_ids() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void User::set_has_stock_ids() {
  _has_bits_[0] |= 0x00000008u;
}
inline void User::clear_has_stock_ids() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void User::clear_stock_ids() {
  if (stock_ids_ != NULL) stock_ids_->::Test::StockInfo::Clear();
  clear_has_stock_ids();
}
inline const ::Test::StockInfo& User::stock_ids() const {
  return stock_ids_ != NULL ? *stock_ids_ : *default_instance_->stock_ids_;
}
inline ::Test::StockInfo* User::mutable_stock_ids() {
  set_has_stock_ids();
  if (stock_ids_ == NULL) stock_ids_ = new ::Test::StockInfo;
  return stock_ids_;
}
inline ::Test::StockInfo* User::release_stock_ids() {
  clear_has_stock_ids();
  ::Test::StockInfo* temp = stock_ids_;
  stock_ids_ = NULL;
  return temp;
}
inline void User::set_allocated_stock_ids(::Test::StockInfo* stock_ids) {
  delete stock_ids_;
  stock_ids_ = stock_ids;
  if (stock_ids) {
    set_has_stock_ids();
  } else {
    clear_has_stock_ids();
  }
}

// -------------------------------------------------------------------

// StockInfo

// repeated int32 stockid = 1;
inline int StockInfo::stockid_size() const {
  return stockid_.size();
}
inline void StockInfo::clear_stockid() {
  stockid_.Clear();
}
inline ::google::protobuf::int32 StockInfo::stockid(int index) const {
  return stockid_.Get(index);
}
inline void StockInfo::set_stockid(int index, ::google::protobuf::int32 value) {
  stockid_.Set(index, value);
}
inline void StockInfo::add_stockid(::google::protobuf::int32 value) {
  stockid_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
StockInfo::stockid() const {
  return stockid_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
StockInfo::mutable_stockid() {
  return &stockid_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Test

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Test::User_PhoneType>() {
  return ::Test::User_PhoneType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_test_2eproto__INCLUDED

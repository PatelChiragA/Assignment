// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto_vector.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "proto_vector.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* myvector_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  myvector_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_proto_5fvector_2eproto() {
  protobuf_AddDesc_proto_5fvector_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "proto_vector.proto");
  GOOGLE_CHECK(file != NULL);
  myvector_descriptor_ = file->message_type(0);
  static const int myvector_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(myvector, str_),
  };
  myvector_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      myvector_descriptor_,
      myvector::default_instance_,
      myvector_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(myvector, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(myvector, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(myvector));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_proto_5fvector_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    myvector_descriptor_, &myvector::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_proto_5fvector_2eproto() {
  delete myvector::default_instance_;
  delete myvector_reflection_;
}

void protobuf_AddDesc_proto_5fvector_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022proto_vector.proto\"\027\n\010myvector\022\013\n\003str\030"
    "\001 \003(\t", 45);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto_vector.proto", &protobuf_RegisterTypes);
  myvector::default_instance_ = new myvector();
  myvector::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_proto_5fvector_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_proto_5fvector_2eproto {
  StaticDescriptorInitializer_proto_5fvector_2eproto() {
    protobuf_AddDesc_proto_5fvector_2eproto();
  }
} static_descriptor_initializer_proto_5fvector_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int myvector::kStrFieldNumber;
#endif  // !_MSC_VER

myvector::myvector()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:myvector)
}

void myvector::InitAsDefaultInstance() {
}

myvector::myvector(const myvector& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:myvector)
}

void myvector::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

myvector::~myvector() {
  // @@protoc_insertion_point(destructor:myvector)
  SharedDtor();
}

void myvector::SharedDtor() {
  if (this != default_instance_) {
  }
}

void myvector::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* myvector::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return myvector_descriptor_;
}

const myvector& myvector::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_proto_5fvector_2eproto();
  return *default_instance_;
}

myvector* myvector::default_instance_ = NULL;

myvector* myvector::New() const {
  return new myvector;
}

void myvector::Clear() {
  str_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool myvector::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:myvector)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string str = 1;
      case 1: {
        if (tag == 10) {
         parse_str:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_str()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->str(this->str_size() - 1).data(),
            this->str(this->str_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "str");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_str;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:myvector)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:myvector)
  return false;
#undef DO_
}

void myvector::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:myvector)
  // repeated string str = 1;
  for (int i = 0; i < this->str_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
    this->str(i).data(), this->str(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE,
    "str");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->str(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:myvector)
}

::google::protobuf::uint8* myvector::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:myvector)
  // repeated string str = 1;
  for (int i = 0; i < this->str_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->str(i).data(), this->str(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "str");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->str(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:myvector)
  return target;
}

int myvector::ByteSize() const {
  int total_size = 0;

  // repeated string str = 1;
  total_size += 1 * this->str_size();
  for (int i = 0; i < this->str_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->str(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void myvector::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const myvector* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const myvector*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void myvector::MergeFrom(const myvector& from) {
  GOOGLE_CHECK_NE(&from, this);
  str_.MergeFrom(from.str_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void myvector::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void myvector::CopyFrom(const myvector& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool myvector::IsInitialized() const {

  return true;
}

void myvector::Swap(myvector* other) {
  if (other != this) {
    str_.Swap(&other->str_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata myvector::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = myvector_descriptor_;
  metadata.reflection = myvector_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

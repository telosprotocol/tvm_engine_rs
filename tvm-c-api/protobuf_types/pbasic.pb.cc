// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf_types/pbasic.proto

#include "protobuf_types/pbasic.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace top {
namespace tvm_engine {
namespace basic {
class PAddressDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PAddress>
      _instance;
} _PAddress_default_instance_;
}  // namespace basic
}  // namespace tvm_engine
}  // namespace top
namespace protobuf_protobuf_5ftypes_2fpbasic_2eproto {
static void InitDefaultsPAddress() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::top::tvm_engine::basic::_PAddress_default_instance_;
    new (ptr) ::top::tvm_engine::basic::PAddress();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::top::tvm_engine::basic::PAddress::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_PAddress =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsPAddress}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_PAddress.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::top::tvm_engine::basic::PAddress, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::top::tvm_engine::basic::PAddress, value_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::top::tvm_engine::basic::PAddress)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::top::tvm_engine::basic::_PAddress_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "protobuf_types/pbasic.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\033protobuf_types/pbasic.proto\022\024top.tvm_e"
      "ngine.basic\"\031\n\010PAddress\022\r\n\005value\030\001 \001(\014b\006"
      "proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 86);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "protobuf_types/pbasic.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_protobuf_5ftypes_2fpbasic_2eproto
namespace top {
namespace tvm_engine {
namespace basic {

// ===================================================================

void PAddress::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PAddress::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PAddress::PAddress()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_protobuf_5ftypes_2fpbasic_2eproto::scc_info_PAddress.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:top.tvm_engine.basic.PAddress)
}
PAddress::PAddress(const PAddress& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.value().size() > 0) {
    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  // @@protoc_insertion_point(copy_constructor:top.tvm_engine.basic.PAddress)
}

void PAddress::SharedCtor() {
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

PAddress::~PAddress() {
  // @@protoc_insertion_point(destructor:top.tvm_engine.basic.PAddress)
  SharedDtor();
}

void PAddress::SharedDtor() {
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PAddress::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* PAddress::descriptor() {
  ::protobuf_protobuf_5ftypes_2fpbasic_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_protobuf_5ftypes_2fpbasic_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PAddress& PAddress::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_protobuf_5ftypes_2fpbasic_2eproto::scc_info_PAddress.base);
  return *internal_default_instance();
}


void PAddress::Clear() {
// @@protoc_insertion_point(message_clear_start:top.tvm_engine.basic.PAddress)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool PAddress::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:top.tvm_engine.basic.PAddress)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes value = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_value()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:top.tvm_engine.basic.PAddress)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:top.tvm_engine.basic.PAddress)
  return false;
#undef DO_
}

void PAddress::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:top.tvm_engine.basic.PAddress)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes value = 1;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->value(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:top.tvm_engine.basic.PAddress)
}

::google::protobuf::uint8* PAddress::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:top.tvm_engine.basic.PAddress)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes value = 1;
  if (this->value().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->value(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:top.tvm_engine.basic.PAddress)
  return target;
}

size_t PAddress::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:top.tvm_engine.basic.PAddress)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bytes value = 1;
  if (this->value().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->value());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PAddress::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:top.tvm_engine.basic.PAddress)
  GOOGLE_DCHECK_NE(&from, this);
  const PAddress* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PAddress>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:top.tvm_engine.basic.PAddress)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:top.tvm_engine.basic.PAddress)
    MergeFrom(*source);
  }
}

void PAddress::MergeFrom(const PAddress& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:top.tvm_engine.basic.PAddress)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.value().size() > 0) {

    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
}

void PAddress::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:top.tvm_engine.basic.PAddress)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PAddress::CopyFrom(const PAddress& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:top.tvm_engine.basic.PAddress)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PAddress::IsInitialized() const {
  return true;
}

void PAddress::Swap(PAddress* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PAddress::InternalSwap(PAddress* other) {
  using std::swap;
  value_.Swap(&other->value_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata PAddress::GetMetadata() const {
  protobuf_protobuf_5ftypes_2fpbasic_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_protobuf_5ftypes_2fpbasic_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace basic
}  // namespace tvm_engine
}  // namespace top
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::top::tvm_engine::basic::PAddress* Arena::CreateMaybeMessage< ::top::tvm_engine::basic::PAddress >(Arena* arena) {
  return Arena::CreateInternal< ::top::tvm_engine::basic::PAddress >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

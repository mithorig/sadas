// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Target Unity version: 2021.3.0 - 2023.1.99

#if defined(_IDACLANG_) || defined(_BINARYNINJA_)
#define IS_LIBCLANG_DECOMPILER
#endif

#if defined(_GHIDRA_) || defined(_IDA_) || defined(IS_LIBCLANG_DECOMPILER)
#define IS_DECOMPILER
#endif

#if defined(_GHIDRA_) || defined(_IDA_)
typedef unsigned __int8 uint8_t;
typedef unsigned __int16 uint16_t;
typedef unsigned __int32 uint32_t;
typedef unsigned __int64 uint64_t;
typedef __int8 int8_t;
typedef __int16 int16_t;
typedef __int32 int32_t;
typedef __int64 int64_t;
#endif

#if defined(IS_LIBCLANG_DECOMPILER)
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;
typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long int64_t;

#ifdef linux
#undef linux
#endif

#endif

#if defined(_GHIDRA_) || defined(IS_LIBCLANG_DECOMPILER)
typedef int64_t intptr_t;
typedef uint64_t uintptr_t;
typedef uint64_t size_t;
#endif

#ifndef IS_DECOMPILER
#define _CPLUSPLUS_
#endif
// ******************************************************************************
// * IL2CPP internal types
// ******************************************************************************

typedef struct Il2CppClass Il2CppClass;
typedef struct Il2CppType Il2CppType;
typedef struct EventInfo EventInfo;
typedef struct MethodInfo MethodInfo;
typedef struct FieldInfo FieldInfo;
typedef struct PropertyInfo PropertyInfo;
typedef struct Il2CppAssembly Il2CppAssembly;
typedef struct Il2CppArray Il2CppArray;
typedef struct Il2CppDelegate Il2CppDelegate;
typedef struct Il2CppDomain Il2CppDomain;
typedef struct Il2CppImage Il2CppImage;
typedef struct Il2CppException Il2CppException;
typedef struct Il2CppProfiler Il2CppProfiler;
typedef struct Il2CppObject Il2CppObject;
typedef struct Il2CppReflectionMethod Il2CppReflectionMethod;
typedef struct Il2CppReflectionType Il2CppReflectionType;
typedef struct Il2CppString Il2CppString;
typedef struct Il2CppThread Il2CppThread;
typedef struct Il2CppAsyncResult Il2CppAsyncResult;
typedef struct Il2CppManagedMemorySnapshot Il2CppManagedMemorySnapshot;
typedef struct Il2CppCustomAttrInfo Il2CppCustomAttrInfo;
typedef enum
{
    IL2CPP_PROFILE_NONE = 0,
    IL2CPP_PROFILE_APPDOMAIN_EVENTS = 1 << 0,
    IL2CPP_PROFILE_ASSEMBLY_EVENTS = 1 << 1,
    IL2CPP_PROFILE_MODULE_EVENTS = 1 << 2,
    IL2CPP_PROFILE_CLASS_EVENTS = 1 << 3,
    IL2CPP_PROFILE_JIT_COMPILATION = 1 << 4,
    IL2CPP_PROFILE_INLINING = 1 << 5,
    IL2CPP_PROFILE_EXCEPTIONS = 1 << 6,
    IL2CPP_PROFILE_ALLOCATIONS = 1 << 7,
    IL2CPP_PROFILE_GC = 1 << 8,
    IL2CPP_PROFILE_THREADS = 1 << 9,
    IL2CPP_PROFILE_REMOTING = 1 << 10,
    IL2CPP_PROFILE_TRANSITIONS = 1 << 11,
    IL2CPP_PROFILE_ENTER_LEAVE = 1 << 12,
    IL2CPP_PROFILE_COVERAGE = 1 << 13,
    IL2CPP_PROFILE_INS_COVERAGE = 1 << 14,
    IL2CPP_PROFILE_STATISTICAL = 1 << 15,
    IL2CPP_PROFILE_METHOD_EVENTS = 1 << 16,
    IL2CPP_PROFILE_MONITOR_EVENTS = 1 << 17,
    IL2CPP_PROFILE_IOMAP_EVENTS = 1 << 18,
    IL2CPP_PROFILE_GC_MOVES = 1 << 19,
    IL2CPP_PROFILE_FILEIO = 1 << 20
} Il2CppProfileFlags;
typedef enum
{
    IL2CPP_PROFILE_FILEIO_WRITE = 0,
    IL2CPP_PROFILE_FILEIO_READ
} Il2CppProfileFileIOKind;
typedef enum
{
    IL2CPP_GC_EVENT_START,
    IL2CPP_GC_EVENT_MARK_START,
    IL2CPP_GC_EVENT_MARK_END,
    IL2CPP_GC_EVENT_RECLAIM_START,
    IL2CPP_GC_EVENT_RECLAIM_END,
    IL2CPP_GC_EVENT_END,
    IL2CPP_GC_EVENT_PRE_STOP_WORLD,
    IL2CPP_GC_EVENT_POST_STOP_WORLD,
    IL2CPP_GC_EVENT_PRE_START_WORLD,
    IL2CPP_GC_EVENT_POST_START_WORLD
} Il2CppGCEvent;
typedef enum
{
    IL2CPP_GC_MODE_DISABLED = 0,
    IL2CPP_GC_MODE_ENABLED = 1,
    IL2CPP_GC_MODE_MANUAL = 2
} Il2CppGCMode;
typedef enum
{
    IL2CPP_STAT_NEW_OBJECT_COUNT,
    IL2CPP_STAT_INITIALIZED_CLASS_COUNT,
    IL2CPP_STAT_METHOD_COUNT,
    IL2CPP_STAT_CLASS_STATIC_DATA_SIZE,
    IL2CPP_STAT_GENERIC_INSTANCE_COUNT,
    IL2CPP_STAT_GENERIC_CLASS_COUNT,
    IL2CPP_STAT_INFLATED_METHOD_COUNT,
    IL2CPP_STAT_INFLATED_TYPE_COUNT,
} Il2CppStat;
typedef enum
{
    IL2CPP_UNHANDLED_POLICY_LEGACY,
    IL2CPP_UNHANDLED_POLICY_CURRENT
} Il2CppRuntimeUnhandledExceptionPolicy;
typedef struct Il2CppStackFrameInfo
{
    const MethodInfo *method;
    uintptr_t raw_ip;
    int sourceCodeLineNumber;
    int ilOffset;
    const char* filePath;
} Il2CppStackFrameInfo;
typedef void(*Il2CppMethodPointer)();
typedef struct Il2CppMethodDebugInfo
{
    Il2CppMethodPointer methodPointer;
    int32_t code_size;
    const char *file;
} Il2CppMethodDebugInfo;
typedef struct
{
    void* (*malloc_func)(size_t size);
    void* (*aligned_malloc_func)(size_t size, size_t alignment);
    void (*free_func)(void *ptr);
    void (*aligned_free_func)(void *ptr);
    void* (*calloc_func)(size_t nmemb, size_t size);
    void* (*realloc_func)(void *ptr, size_t size);
    void* (*aligned_realloc_func)(void *ptr, size_t size, size_t alignment);
} Il2CppMemoryCallbacks;
typedef struct
{
    const char *name;
    void(*connect)(const char *address);
    int(*wait_for_attach)(void);
    void(*close1)(void);
    void(*close2)(void);
    int(*send)(void *buf, int len);
    int(*recv)(void *buf, int len);
} Il2CppDebuggerTransport;
typedef uint16_t Il2CppChar;
typedef char Il2CppNativeChar;
typedef void (*il2cpp_register_object_callback)(Il2CppObject** arr, int size, void* userdata);
typedef void* (*il2cpp_liveness_reallocate_callback)(void* ptr, size_t size, void* userdata);
typedef void (*Il2CppFrameWalkFunc) (const Il2CppStackFrameInfo *info, void *user_data);
typedef void (*Il2CppProfileFunc) (Il2CppProfiler* prof);
typedef void (*Il2CppProfileMethodFunc) (Il2CppProfiler* prof, const MethodInfo *method);
typedef void (*Il2CppProfileAllocFunc) (Il2CppProfiler* prof, Il2CppObject *obj, Il2CppClass *klass);
typedef void (*Il2CppProfileGCFunc) (Il2CppProfiler* prof, Il2CppGCEvent event, int generation);
typedef void (*Il2CppProfileGCResizeFunc) (Il2CppProfiler* prof, int64_t new_size);
typedef void (*Il2CppProfileFileIOFunc) (Il2CppProfiler* prof, Il2CppProfileFileIOKind kind, int count);
typedef void (*Il2CppProfileThreadFunc) (Il2CppProfiler *prof, unsigned long tid);
typedef const Il2CppNativeChar* (*Il2CppSetFindPlugInCallback)(const Il2CppNativeChar*);
typedef void (*Il2CppLogCallback)(const char*);
typedef size_t(*Il2CppBacktraceFunc) (Il2CppMethodPointer* buffer, size_t maxSize);
typedef struct Il2CppManagedMemorySnapshot Il2CppManagedMemorySnapshot;
typedef uintptr_t il2cpp_array_size_t;
typedef void ( *SynchronizationContextCallback)(intptr_t arg);
typedef void ( *CultureInfoChangedCallback)(const Il2CppChar* arg);
typedef uint16_t Il2CppMethodSlot;
static const uint16_t kInvalidIl2CppMethodSlot = 65535;
static const int ipv6AddressSize = 16;
typedef int32_t il2cpp_hresult_t;
typedef enum
{
    IL2CPP_TOKEN_MODULE = 0x00000000,
    IL2CPP_TOKEN_TYPE_REF = 0x01000000,
    IL2CPP_TOKEN_TYPE_DEF = 0x02000000,
    IL2CPP_TOKEN_FIELD_DEF = 0x04000000,
    IL2CPP_TOKEN_METHOD_DEF = 0x06000000,
    IL2CPP_TOKEN_PARAM_DEF = 0x08000000,
    IL2CPP_TOKEN_INTERFACE_IMPL = 0x09000000,
    IL2CPP_TOKEN_MEMBER_REF = 0x0a000000,
    IL2CPP_TOKEN_CUSTOM_ATTRIBUTE = 0x0c000000,
    IL2CPP_TOKEN_PERMISSION = 0x0e000000,
    IL2CPP_TOKEN_SIGNATURE = 0x11000000,
    IL2CPP_TOKEN_EVENT = 0x14000000,
    IL2CPP_TOKEN_PROPERTY = 0x17000000,
    IL2CPP_TOKEN_MODULE_REF = 0x1a000000,
    IL2CPP_TOKEN_TYPE_SPEC = 0x1b000000,
    IL2CPP_TOKEN_ASSEMBLY = 0x20000000,
    IL2CPP_TOKEN_ASSEMBLY_REF = 0x23000000,
    IL2CPP_TOKEN_FILE = 0x26000000,
    IL2CPP_TOKEN_EXPORTED_TYPE = 0x27000000,
    IL2CPP_TOKEN_MANIFEST_RESOURCE = 0x28000000,
    IL2CPP_TOKEN_GENERIC_PARAM = 0x2a000000,
    IL2CPP_TOKEN_METHOD_SPEC = 0x2b000000,
} Il2CppTokenType;
typedef int32_t TypeIndex;
typedef int32_t TypeDefinitionIndex;
typedef int32_t FieldIndex;
typedef int32_t DefaultValueIndex;
typedef int32_t DefaultValueDataIndex;
typedef int32_t CustomAttributeIndex;
typedef int32_t ParameterIndex;
typedef int32_t MethodIndex;
typedef int32_t GenericMethodIndex;
typedef int32_t PropertyIndex;
typedef int32_t EventIndex;
typedef int32_t GenericContainerIndex;
typedef int32_t GenericParameterIndex;
typedef int16_t GenericParameterConstraintIndex;
typedef int32_t NestedTypeIndex;
typedef int32_t InterfacesIndex;
typedef int32_t VTableIndex;
typedef int32_t RGCTXIndex;
typedef int32_t StringIndex;
typedef int32_t StringLiteralIndex;
typedef int32_t GenericInstIndex;
typedef int32_t ImageIndex;
typedef int32_t AssemblyIndex;
typedef int32_t InteropDataIndex;
typedef int32_t TypeFieldIndex;
typedef int32_t TypeMethodIndex;
typedef int32_t MethodParameterIndex;
typedef int32_t TypePropertyIndex;
typedef int32_t TypeEventIndex;
typedef int32_t TypeInterfaceIndex;
typedef int32_t TypeNestedTypeIndex;
typedef int32_t TypeInterfaceOffsetIndex;
typedef int32_t GenericContainerParameterIndex;
typedef int32_t AssemblyTypeIndex;
typedef int32_t AssemblyExportedTypeIndex;
static const TypeIndex kTypeIndexInvalid = -1;
static const TypeDefinitionIndex kTypeDefinitionIndexInvalid = -1;
static const DefaultValueDataIndex kDefaultValueIndexNull = -1;
static const CustomAttributeIndex kCustomAttributeIndexInvalid = -1;
static const EventIndex kEventIndexInvalid = -1;
static const FieldIndex kFieldIndexInvalid = -1;
static const MethodIndex kMethodIndexInvalid = -1;
static const PropertyIndex kPropertyIndexInvalid = -1;
static const GenericContainerIndex kGenericContainerIndexInvalid = -1;
static const GenericParameterIndex kGenericParameterIndexInvalid = -1;
static const RGCTXIndex kRGCTXIndexInvalid = -1;
static const StringLiteralIndex kStringLiteralIndexInvalid = -1;
static const InteropDataIndex kInteropDataIndexInvalid = -1;
static const int kPublicKeyByteLength = 8;
typedef struct Il2CppMethodSpec
{
    MethodIndex methodDefinitionIndex;
    GenericInstIndex classIndexIndex;
    GenericInstIndex methodIndexIndex;
} Il2CppMethodSpec;
typedef enum Il2CppRGCTXDataType
{
    IL2CPP_RGCTX_DATA_INVALID,
    IL2CPP_RGCTX_DATA_TYPE,
    IL2CPP_RGCTX_DATA_CLASS,
    IL2CPP_RGCTX_DATA_METHOD,
    IL2CPP_RGCTX_DATA_ARRAY,
    IL2CPP_RGCTX_DATA_CONSTRAINED,
} Il2CppRGCTXDataType;
typedef union Il2CppRGCTXDefinitionData
{
    int32_t rgctxDataDummy;
    MethodIndex __methodIndex;
    TypeIndex __typeIndex;
} Il2CppRGCTXDefinitionData;
typedef struct Il2CppRGCTXConstrainedData
{
    TypeIndex __typeIndex;
    uint32_t __encodedMethodIndex;
} Il2CppRGCTXConstrainedData;
typedef struct Il2CppRGCTXDefinition
{
    Il2CppRGCTXDataType type;
    const void* data;
} Il2CppRGCTXDefinition;
typedef struct
{
    MethodIndex methodIndex;
    MethodIndex invokerIndex;
    MethodIndex adjustorThunkIndex;
} Il2CppGenericMethodIndices;
typedef struct Il2CppGenericMethodFunctionsDefinitions
{
    GenericMethodIndex genericMethodIndex;
    Il2CppGenericMethodIndices indices;
} Il2CppGenericMethodFunctionsDefinitions;
static inline uint32_t GetTokenType(uint32_t token)
{
    return token & 0xFF000000;
}
static inline uint32_t GetTokenRowId(uint32_t token)
{
    return token & 0x00FFFFFF;
}
typedef const struct ___Il2CppMetadataImageHandle* Il2CppMetadataImageHandle;
typedef const struct ___Il2CppMetadataCustomAttributeHandle* Il2CppMetadataCustomAttributeHandle;
typedef const struct ___Il2CppMetadataTypeHandle* Il2CppMetadataTypeHandle;
typedef const struct ___Il2CppMetadataMethodHandle* Il2CppMetadataMethodDefinitionHandle;
typedef const struct ___Il2CppMetadataGenericContainerHandle* Il2CppMetadataGenericContainerHandle;
typedef const struct ___Il2CppMetadataGenericParameterHandle* Il2CppMetadataGenericParameterHandle;
typedef uint32_t EncodedMethodIndex;
typedef enum Il2CppMetadataUsage
{
    kIl2CppMetadataUsageInvalid,
    kIl2CppMetadataUsageTypeInfo,
    kIl2CppMetadataUsageIl2CppType,
    kIl2CppMetadataUsageMethodDef,
    kIl2CppMetadataUsageFieldInfo,
    kIl2CppMetadataUsageStringLiteral,
    kIl2CppMetadataUsageMethodRef,
} Il2CppMetadataUsage;
typedef enum Il2CppInvalidMetadataUsageToken
{
    kIl2CppInvalidMetadataUsageNoData = 0,
    kIl2CppInvalidMetadataUsageAmbiguousMethod = 1,
} Il2CppInvalidMetadataUsageToken;
typedef struct Il2CppInterfaceOffsetPair
{
    TypeIndex interfaceTypeIndex;
    int32_t offset;
} Il2CppInterfaceOffsetPair;
typedef struct Il2CppTypeDefinition
{
    StringIndex nameIndex;
    StringIndex namespaceIndex;
    TypeIndex byvalTypeIndex;
    TypeIndex declaringTypeIndex;
    TypeIndex parentIndex;
    TypeIndex elementTypeIndex;
    GenericContainerIndex genericContainerIndex;
    uint32_t flags;
    FieldIndex fieldStart;
    MethodIndex methodStart;
    EventIndex eventStart;
    PropertyIndex propertyStart;
    NestedTypeIndex nestedTypesStart;
    InterfacesIndex interfacesStart;
    VTableIndex vtableStart;
    InterfacesIndex interfaceOffsetsStart;
    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;
    uint32_t bitfield;
    uint32_t token;
} Il2CppTypeDefinition;
typedef struct Il2CppFieldDefinition
{
    StringIndex nameIndex;
    TypeIndex typeIndex;
    uint32_t token;
} Il2CppFieldDefinition;
typedef struct Il2CppFieldDefaultValue
{
    FieldIndex fieldIndex;
    TypeIndex typeIndex;
    DefaultValueDataIndex dataIndex;
} Il2CppFieldDefaultValue;
typedef struct Il2CppFieldMarshaledSize
{
    FieldIndex fieldIndex;
    TypeIndex typeIndex;
    int32_t size;
} Il2CppFieldMarshaledSize;
typedef struct Il2CppFieldRef
{
    TypeIndex typeIndex;
    FieldIndex fieldIndex;
} Il2CppFieldRef;
typedef struct Il2CppParameterDefinition
{
    StringIndex nameIndex;
    uint32_t token;
    TypeIndex typeIndex;
} Il2CppParameterDefinition;
typedef struct Il2CppParameterDefaultValue
{
    ParameterIndex parameterIndex;
    TypeIndex typeIndex;
    DefaultValueDataIndex dataIndex;
} Il2CppParameterDefaultValue;
typedef struct Il2CppMethodDefinition
{
    StringIndex nameIndex;
    TypeDefinitionIndex declaringType;
    TypeIndex returnType;
    ParameterIndex parameterStart;
    GenericContainerIndex genericContainerIndex;
    uint32_t token;
    uint16_t flags;
    uint16_t iflags;
    uint16_t slot;
    uint16_t parameterCount;
} Il2CppMethodDefinition;
typedef struct Il2CppEventDefinition
{
    StringIndex nameIndex;
    TypeIndex typeIndex;
    MethodIndex add;
    MethodIndex remove;
    MethodIndex raise;
    uint32_t token;
} Il2CppEventDefinition;
typedef struct Il2CppPropertyDefinition
{
    StringIndex nameIndex;
    MethodIndex get;
    MethodIndex set;
    uint32_t attrs;
    uint32_t token;
} Il2CppPropertyDefinition;
typedef struct Il2CppStringLiteral
{
    uint32_t length;
    StringLiteralIndex dataIndex;
} Il2CppStringLiteral;
typedef struct Il2CppAssemblyNameDefinition
{
    StringIndex nameIndex;
    StringIndex cultureIndex;
    StringIndex publicKeyIndex;
    uint32_t hash_alg;
    int32_t hash_len;
    uint32_t flags;
    int32_t major;
    int32_t minor;
    int32_t build;
    int32_t revision;
    uint8_t public_key_token[8];
} Il2CppAssemblyNameDefinition;
typedef struct Il2CppImageDefinition
{
    StringIndex nameIndex;
    AssemblyIndex assemblyIndex;
    TypeDefinitionIndex typeStart;
    uint32_t typeCount;
    TypeDefinitionIndex exportedTypeStart;
    uint32_t exportedTypeCount;
    MethodIndex entryPointIndex;
    uint32_t token;
    CustomAttributeIndex customAttributeStart;
    uint32_t customAttributeCount;
} Il2CppImageDefinition;
typedef struct Il2CppAssemblyDefinition
{
    ImageIndex imageIndex;
    uint32_t token;
    int32_t referencedAssemblyStart;
    int32_t referencedAssemblyCount;
    Il2CppAssemblyNameDefinition aname;
} Il2CppAssemblyDefinition;
typedef struct Il2CppCustomAttributeDataRange
{
    uint32_t token;
    uint32_t startOffset;
} Il2CppCustomAttributeDataRange;
typedef struct Il2CppMetadataRange
{
    int32_t start;
    int32_t length;
} Il2CppMetadataRange;
typedef struct Il2CppGenericContainer
{
    int32_t ownerIndex;
    int32_t type_argc;
    int32_t is_method;
    GenericParameterIndex genericParameterStart;
} Il2CppGenericContainer;
typedef struct Il2CppGenericParameter
{
    GenericContainerIndex ownerIndex;
    StringIndex nameIndex;
    GenericParameterConstraintIndex constraintsStart;
    int16_t constraintsCount;
    uint16_t num;
    uint16_t flags;
} Il2CppGenericParameter;
typedef struct Il2CppWindowsRuntimeTypeNamePair
{
    StringIndex nameIndex;
    TypeIndex typeIndex;
} Il2CppWindowsRuntimeTypeNamePair;
#pragma pack(push, p1,4)
typedef struct Il2CppGlobalMetadataHeader
{
    int32_t sanity;
    int32_t version;
    int32_t stringLiteralOffset;
    int32_t stringLiteralCount;
    int32_t stringLiteralDataOffset;
    int32_t stringLiteralDataCount;
    int32_t stringOffset;
    int32_t stringCount;
    int32_t eventsOffset;
    int32_t eventsCount;
    int32_t propertiesOffset;
    int32_t propertiesCount;
    int32_t methodsOffset;
    int32_t methodsCount;
    int32_t parameterDefaultValuesOffset;
    int32_t parameterDefaultValuesCount;
    int32_t fieldDefaultValuesOffset;
    int32_t fieldDefaultValuesCount;
    int32_t fieldAndParameterDefaultValueDataOffset;
    int32_t fieldAndParameterDefaultValueDataCount;
    int32_t fieldMarshaledSizesOffset;
    int32_t fieldMarshaledSizesCount;
    int32_t parametersOffset;
    int32_t parametersCount;
    int32_t fieldsOffset;
    int32_t fieldsCount;
    int32_t genericParametersOffset;
    int32_t genericParametersCount;
    int32_t genericParameterConstraintsOffset;
    int32_t genericParameterConstraintsCount;
    int32_t genericContainersOffset;
    int32_t genericContainersCount;
    int32_t nestedTypesOffset;
    int32_t nestedTypesCount;
    int32_t interfacesOffset;
    int32_t interfacesCount;
    int32_t vtableMethodsOffset;
    int32_t vtableMethodsCount;
    int32_t interfaceOffsetsOffset;
    int32_t interfaceOffsetsCount;
    int32_t typeDefinitionsOffset;
    int32_t typeDefinitionsCount;
    int32_t imagesOffset;
    int32_t imagesCount;
    int32_t assembliesOffset;
    int32_t assembliesCount;
    int32_t fieldRefsOffset;
    int32_t fieldRefsCount;
    int32_t referencedAssembliesOffset;
    int32_t referencedAssembliesCount;
    int32_t attributeDataOffset;
    int32_t attributeDataCount;
    int32_t attributeDataRangeOffset;
    int32_t attributeDataRangeCount;
    int32_t unresolvedVirtualCallParameterTypesOffset;
    int32_t unresolvedVirtualCallParameterTypesCount;
    int32_t unresolvedVirtualCallParameterRangesOffset;
    int32_t unresolvedVirtualCallParameterRangesCount;
    int32_t windowsRuntimeTypeNamesOffset;
    int32_t windowsRuntimeTypeNamesSize;
    int32_t windowsRuntimeStringsOffset;
    int32_t windowsRuntimeStringsSize;
    int32_t exportedTypeDefinitionsOffset;
    int32_t exportedTypeDefinitionsCount;
} Il2CppGlobalMetadataHeader;
#pragma pack(pop, p1)
typedef struct Il2CppMetadataField
{
    uint32_t offset;
    uint32_t typeIndex;
    const char* name;
    uint8_t isStatic;
} Il2CppMetadataField;
typedef enum Il2CppMetadataTypeFlags
{
    kNone = 0,
    kValueType = 1 << 0,
    kArray = 1 << 1,
    kArrayRankMask = 0xFFFF0000
} Il2CppMetadataTypeFlags;
typedef struct Il2CppMetadataType
{
    Il2CppMetadataTypeFlags flags;
    Il2CppMetadataField* fields;
    uint32_t fieldCount;
    uint32_t staticsSize;
    uint8_t* statics;
    uint32_t baseOrElementTypeIndex;
    char* name;
    const char* assemblyName;
    uint64_t typeInfoAddress;
    uint32_t size;
} Il2CppMetadataType;
typedef struct Il2CppMetadataSnapshot
{
    uint32_t typeCount;
    Il2CppMetadataType* types;
} Il2CppMetadataSnapshot;
typedef struct Il2CppManagedMemorySection
{
    uint64_t sectionStartAddress;
    uint32_t sectionSize;
    uint8_t* sectionBytes;
} Il2CppManagedMemorySection;
typedef struct Il2CppManagedHeap
{
    uint32_t sectionCount;
    Il2CppManagedMemorySection* sections;
} Il2CppManagedHeap;
typedef struct Il2CppStacks
{
    uint32_t stackCount;
    Il2CppManagedMemorySection* stacks;
} Il2CppStacks;
typedef struct NativeObject
{
    uint32_t gcHandleIndex;
    uint32_t size;
    uint32_t instanceId;
    uint32_t classId;
    uint32_t referencedNativeObjectIndicesCount;
    uint32_t* referencedNativeObjectIndices;
} NativeObject;
typedef struct Il2CppGCHandles
{
    uint32_t trackedObjectCount;
    uint64_t* pointersToObjects;
} Il2CppGCHandles;
typedef struct Il2CppRuntimeInformation
{
    uint32_t pointerSize;
    uint32_t objectHeaderSize;
    uint32_t arrayHeaderSize;
    uint32_t arrayBoundsOffsetInHeader;
    uint32_t arraySizeOffsetInHeader;
    uint32_t allocationGranularity;
} Il2CppRuntimeInformation;
typedef struct Il2CppManagedMemorySnapshot
{
    Il2CppManagedHeap heap;
    Il2CppStacks stacks;
    Il2CppMetadataSnapshot metadata;
    Il2CppGCHandles gcHandles;
    Il2CppRuntimeInformation runtimeInformation;
    void* additionalUserInformation;
} Il2CppManagedMemorySnapshot;
typedef enum Il2CppTypeEnum
{
    IL2CPP_TYPE_END = 0x00,
    IL2CPP_TYPE_VOID = 0x01,
    IL2CPP_TYPE_BOOLEAN = 0x02,
    IL2CPP_TYPE_CHAR = 0x03,
    IL2CPP_TYPE_I1 = 0x04,
    IL2CPP_TYPE_U1 = 0x05,
    IL2CPP_TYPE_I2 = 0x06,
    IL2CPP_TYPE_U2 = 0x07,
    IL2CPP_TYPE_I4 = 0x08,
    IL2CPP_TYPE_U4 = 0x09,
    IL2CPP_TYPE_I8 = 0x0a,
    IL2CPP_TYPE_U8 = 0x0b,
    IL2CPP_TYPE_R4 = 0x0c,
    IL2CPP_TYPE_R8 = 0x0d,
    IL2CPP_TYPE_STRING = 0x0e,
    IL2CPP_TYPE_PTR = 0x0f,
    IL2CPP_TYPE_BYREF = 0x10,
    IL2CPP_TYPE_VALUETYPE = 0x11,
    IL2CPP_TYPE_CLASS = 0x12,
    IL2CPP_TYPE_VAR = 0x13,
    IL2CPP_TYPE_ARRAY = 0x14,
    IL2CPP_TYPE_GENERICINST = 0x15,
    IL2CPP_TYPE_TYPEDBYREF = 0x16,
    IL2CPP_TYPE_I = 0x18,
    IL2CPP_TYPE_U = 0x19,
    IL2CPP_TYPE_FNPTR = 0x1b,
    IL2CPP_TYPE_OBJECT = 0x1c,
    IL2CPP_TYPE_SZARRAY = 0x1d,
    IL2CPP_TYPE_MVAR = 0x1e,
    IL2CPP_TYPE_CMOD_REQD = 0x1f,
    IL2CPP_TYPE_CMOD_OPT = 0x20,
    IL2CPP_TYPE_INTERNAL = 0x21,
    IL2CPP_TYPE_MODIFIER = 0x40,
    IL2CPP_TYPE_SENTINEL = 0x41,
    IL2CPP_TYPE_PINNED = 0x45,
    IL2CPP_TYPE_ENUM = 0x55,
    IL2CPP_TYPE_IL2CPP_TYPE_INDEX = 0xff
} Il2CppTypeEnum;
typedef struct Il2CppClass Il2CppClass;
typedef struct MethodInfo MethodInfo;
typedef struct Il2CppType Il2CppType;
typedef struct Il2CppArrayType
{
    const Il2CppType* etype;
    uint8_t rank;
    uint8_t numsizes;
    uint8_t numlobounds;
    int *sizes;
    int *lobounds;
} Il2CppArrayType;
typedef struct Il2CppGenericInst
{
    uint32_t type_argc;
    const Il2CppType **type_argv;
} Il2CppGenericInst;
typedef struct Il2CppGenericContext
{
    const Il2CppGenericInst *class_inst;
    const Il2CppGenericInst *method_inst;
} Il2CppGenericContext;
typedef struct Il2CppGenericClass
{
    const Il2CppType* type;
    Il2CppGenericContext context;
    Il2CppClass *cached_class;
} Il2CppGenericClass;
typedef struct Il2CppGenericMethod
{
    const MethodInfo* methodDefinition;
    Il2CppGenericContext context;
} Il2CppGenericMethod;
typedef struct Il2CppType
{
    union
    {
        void* dummy;
        TypeDefinitionIndex __klassIndex;
        Il2CppMetadataTypeHandle typeHandle;
        const Il2CppType *type;
        Il2CppArrayType *array;
        GenericParameterIndex __genericParameterIndex;
        Il2CppMetadataGenericParameterHandle genericParameterHandle;
        Il2CppGenericClass *generic_class;
    } data;
    unsigned int attrs : 16;
    Il2CppTypeEnum type : 8;
    unsigned int num_mods : 5;
    unsigned int byref : 1;
    unsigned int pinned : 1;
    unsigned int valuetype : 1;
} Il2CppType;
typedef struct Il2CppMetadataFieldInfo
{
    const Il2CppType* type;
    const char* name;
    uint32_t token;
} Il2CppMetadataFieldInfo;
typedef struct Il2CppMetadataMethodInfo
{
    Il2CppMetadataMethodDefinitionHandle handle;
    const char* name;
    const Il2CppType* return_type;
    uint32_t token;
    uint16_t flags;
    uint16_t iflags;
    uint16_t slot;
    uint16_t parameterCount;
} Il2CppMetadataMethodInfo;
typedef struct Il2CppMetadataParameterInfo
{
    const char* name;
    uint32_t token;
    const Il2CppType* type;
} Il2CppMetadataParameterInfo;
typedef struct Il2CppMetadataPropertyInfo
{
    const char* name;
    const MethodInfo* get;
    const MethodInfo* set;
    uint32_t attrs;
    uint32_t token;
} Il2CppMetadataPropertyInfo;
typedef struct Il2CppMetadataEventInfo
{
    const char* name;
    const Il2CppType* type;
    const MethodInfo* add;
    const MethodInfo* remove;
    const MethodInfo* raise;
    uint32_t token;
} Il2CppMetadataEventInfo;
typedef struct Il2CppInterfaceOffsetInfo
{
    const Il2CppType* interfaceType;
    int32_t offset;
} Il2CppInterfaceOffsetInfo;
typedef struct Il2CppGenericParameterInfo
{
    Il2CppMetadataGenericContainerHandle containerHandle;
    const char* name;
    uint16_t num;
    uint16_t flags;
} Il2CppGenericParameterInfo;
typedef enum Il2CppCallConvention
{
    IL2CPP_CALL_DEFAULT,
    IL2CPP_CALL_C,
    IL2CPP_CALL_STDCALL,
    IL2CPP_CALL_THISCALL,
    IL2CPP_CALL_FASTCALL,
    IL2CPP_CALL_VARARG
} Il2CppCallConvention;
typedef enum Il2CppCharSet
{
    CHARSET_ANSI,
    CHARSET_UNICODE,
    CHARSET_NOT_SPECIFIED
} Il2CppCharSet;
typedef struct Il2CppHString__
{
    int unused;
} Il2CppHString__;
typedef Il2CppHString__* Il2CppHString;
typedef struct Il2CppHStringHeader
{
    union
    {
        void* Reserved1;
        char Reserved2[24];
    } Reserved;
} Il2CppHStringHeader;
typedef struct Il2CppGuid
{
    uint32_t data1;
    uint16_t data2;
    uint16_t data3;
    uint8_t data4[8];
} Il2CppGuid;
typedef struct Il2CppSafeArrayBound
{
    uint32_t element_count;
    int32_t lower_bound;
} Il2CppSafeArrayBound;
typedef struct Il2CppSafeArray
{
    uint16_t dimension_count;
    uint16_t features;
    uint32_t element_size;
    uint32_t lock_count;
    void* data;
    Il2CppSafeArrayBound bounds[1];
} Il2CppSafeArray;
typedef struct Il2CppWin32Decimal
{
    uint16_t reserved;
    union
    {
        struct
        {
            uint8_t scale;
            uint8_t sign;
        } s;
        uint16_t signscale;
    } u;
    uint32_t hi32;
    union
    {
        struct
        {
            uint32_t lo32;
            uint32_t mid32;
        } s2;
        uint64_t lo64;
    } u2;
} Il2CppWin32Decimal;
typedef int16_t IL2CPP_VARIANT_BOOL;
typedef enum Il2CppVarType
{
    IL2CPP_VT_EMPTY = 0,
    IL2CPP_VT_NULL = 1,
    IL2CPP_VT_I2 = 2,
    IL2CPP_VT_I4 = 3,
    IL2CPP_VT_R4 = 4,
    IL2CPP_VT_R8 = 5,
    IL2CPP_VT_CY = 6,
    IL2CPP_VT_DATE = 7,
    IL2CPP_VT_BSTR = 8,
    IL2CPP_VT_DISPATCH = 9,
    IL2CPP_VT_ERROR = 10,
    IL2CPP_VT_BOOL = 11,
    IL2CPP_VT_VARIANT = 12,
    IL2CPP_VT_UNKNOWN = 13,
    IL2CPP_VT_DECIMAL = 14,
    IL2CPP_VT_I1 = 16,
    IL2CPP_VT_UI1 = 17,
    IL2CPP_VT_UI2 = 18,
    IL2CPP_VT_UI4 = 19,
    IL2CPP_VT_I8 = 20,
    IL2CPP_VT_UI8 = 21,
    IL2CPP_VT_INT = 22,
    IL2CPP_VT_UINT = 23,
    IL2CPP_VT_VOID = 24,
    IL2CPP_VT_HRESULT = 25,
    IL2CPP_VT_PTR = 26,
    IL2CPP_VT_SAFEARRAY = 27,
    IL2CPP_VT_CARRAY = 28,
    IL2CPP_VT_USERDEFINED = 29,
    IL2CPP_VT_LPSTR = 30,
    IL2CPP_VT_LPWSTR = 31,
    IL2CPP_VT_RECORD = 36,
    IL2CPP_VT_INT_PTR = 37,
    IL2CPP_VT_UINT_PTR = 38,
    IL2CPP_VT_FILETIME = 64,
    IL2CPP_VT_BLOB = 65,
    IL2CPP_VT_STREAM = 66,
    IL2CPP_VT_STORAGE = 67,
    IL2CPP_VT_STREAMED_OBJECT = 68,
    IL2CPP_VT_STORED_OBJECT = 69,
    IL2CPP_VT_BLOB_OBJECT = 70,
    IL2CPP_VT_CF = 71,
    IL2CPP_VT_CLSID = 72,
    IL2CPP_VT_VERSIONED_STREAM = 73,
    IL2CPP_VT_BSTR_BLOB = 0xfff,
    IL2CPP_VT_VECTOR = 0x1000,
    IL2CPP_VT_ARRAY = 0x2000,
    IL2CPP_VT_BYREF = 0x4000,
    IL2CPP_VT_RESERVED = 0x8000,
    IL2CPP_VT_ILLEGAL = 0xffff,
    IL2CPP_VT_ILLEGALMASKED = 0xfff,
    IL2CPP_VT_TYPEMASK = 0xfff,
} Il2CppVarType;
typedef struct Il2CppVariant Il2CppVariant;
typedef struct Il2CppIUnknown Il2CppIUnknown;
typedef struct Il2CppVariant
{
    union
    {
        struct __tagVARIANT
        {
            uint16_t type;
            uint16_t reserved1;
            uint16_t reserved2;
            uint16_t reserved3;
            union
            {
                int64_t llVal;
                int32_t lVal;
                uint8_t bVal;
                int16_t iVal;
                float fltVal;
                double dblVal;
                IL2CPP_VARIANT_BOOL boolVal;
                int32_t scode;
                int64_t cyVal;
                double date;
                Il2CppChar* bstrVal;
                Il2CppIUnknown* punkVal;
                void* pdispVal;
                Il2CppSafeArray* parray;
                uint8_t* pbVal;
                int16_t* piVal;
                int32_t* plVal;
                int64_t* pllVal;
                float* pfltVal;
                double* pdblVal;
                IL2CPP_VARIANT_BOOL* pboolVal;
                int32_t* pscode;
                int64_t* pcyVal;
                double* pdate;
                Il2CppChar* pbstrVal;
                Il2CppIUnknown** ppunkVal;
                void** ppdispVal;
                Il2CppSafeArray** pparray;
                struct Il2CppVariant* pvarVal;
                void* byref;
                char cVal;
                uint16_t uiVal;
                uint32_t ulVal;
                uint64_t ullVal;
                int intVal;
                unsigned int uintVal;
                Il2CppWin32Decimal* pdecVal;
                char* pcVal;
                uint16_t* puiVal;
                uint32_t* pulVal;
                uint64_t* pullVal;
                int* pintVal;
                unsigned int* puintVal;
                struct __tagBRECORD
                {
                    void* pvRecord;
                    void* pRecInfo;
                } n4;
            } n3;
        } n2;
        Il2CppWin32Decimal decVal;
    } n1;
} Il2CppVariant;
typedef struct Il2CppFileTime
{
    uint32_t low;
    uint32_t high;
} Il2CppFileTime;
typedef struct Il2CppStatStg
{
    Il2CppChar* name;
    uint32_t type;
    uint64_t size;
    Il2CppFileTime mtime;
    Il2CppFileTime ctime;
    Il2CppFileTime atime;
    uint32_t mode;
    uint32_t locks;
    Il2CppGuid clsid;
    uint32_t state;
    uint32_t reserved;
} Il2CppStatStg;
typedef enum Il2CppWindowsRuntimeTypeKind
{
    kTypeKindPrimitive = 0,
    kTypeKindMetadata,
    kTypeKindCustom
} Il2CppWindowsRuntimeTypeKind;
typedef struct Il2CppWindowsRuntimeTypeName
{
    Il2CppHString typeName;
    enum Il2CppWindowsRuntimeTypeKind typeKind;
} Il2CppWindowsRuntimeTypeName;
typedef void (*PInvokeMarshalToNativeFunc)(void* managedStructure, void* marshaledStructure);
typedef void (*PInvokeMarshalFromNativeFunc)(void* marshaledStructure, void* managedStructure);
typedef void (*PInvokeMarshalCleanupFunc)(void* marshaledStructure);
typedef struct Il2CppIUnknown* (*CreateCCWFunc)(Il2CppObject* obj);
typedef struct Il2CppInteropData
{
    Il2CppMethodPointer delegatePInvokeWrapperFunction;
    PInvokeMarshalToNativeFunc pinvokeMarshalToNativeFunction;
    PInvokeMarshalFromNativeFunc pinvokeMarshalFromNativeFunction;
    PInvokeMarshalCleanupFunc pinvokeMarshalCleanupFunction;
    CreateCCWFunc createCCWFunction;
    const Il2CppGuid* guid;
    const Il2CppType* type;
} Il2CppInteropData;
typedef struct Il2CppCodeGenModule Il2CppCodeGenModule;
typedef struct Il2CppMetadataRegistration Il2CppMetadataRegistration;
typedef struct Il2CppCodeRegistration Il2CppCodeRegistration;
typedef struct Il2CppClass Il2CppClass;
typedef struct Il2CppGuid Il2CppGuid;
typedef struct Il2CppImage Il2CppImage;
typedef struct Il2CppAppDomain Il2CppAppDomain;
typedef struct Il2CppAppDomainSetup Il2CppAppDomainSetup;
typedef struct Il2CppDelegate Il2CppDelegate;
typedef struct Il2CppAppContext Il2CppAppContext;
typedef struct Il2CppNameToTypeHandleHashTable Il2CppNameToTypeHandleHashTable;
typedef struct Il2CppCodeGenModule Il2CppCodeGenModule;
typedef struct Il2CppMetadataRegistration Il2CppMetadataRegistration;
typedef struct Il2CppCodeRegistration Il2CppCodeRegistration;
typedef struct VirtualInvokeData
{
    Il2CppMethodPointer methodPtr;
    const MethodInfo* method;
} VirtualInvokeData;
typedef enum Il2CppTypeNameFormat
{
    IL2CPP_TYPE_NAME_FORMAT_IL,
    IL2CPP_TYPE_NAME_FORMAT_REFLECTION,
    IL2CPP_TYPE_NAME_FORMAT_FULL_NAME,
    IL2CPP_TYPE_NAME_FORMAT_ASSEMBLY_QUALIFIED
} Il2CppTypeNameFormat;
typedef struct Il2CppDefaults
{
    Il2CppImage *corlib;
    Il2CppImage *corlib_gen;
    Il2CppClass *object_class;
    Il2CppClass *byte_class;
    Il2CppClass *void_class;
    Il2CppClass *boolean_class;
    Il2CppClass *sbyte_class;
    Il2CppClass *int16_class;
    Il2CppClass *uint16_class;
    Il2CppClass *int32_class;
    Il2CppClass *uint32_class;
    Il2CppClass *int_class;
    Il2CppClass *uint_class;
    Il2CppClass *int64_class;
    Il2CppClass *uint64_class;
    Il2CppClass *single_class;
    Il2CppClass *double_class;
    Il2CppClass *char_class;
    Il2CppClass *string_class;
    Il2CppClass *enum_class;
    Il2CppClass *array_class;
    Il2CppClass *delegate_class;
    Il2CppClass *multicastdelegate_class;
    Il2CppClass *asyncresult_class;
    Il2CppClass *manualresetevent_class;
    Il2CppClass *typehandle_class;
    Il2CppClass *fieldhandle_class;
    Il2CppClass *methodhandle_class;
    Il2CppClass *systemtype_class;
    Il2CppClass *monotype_class;
    Il2CppClass *exception_class;
    Il2CppClass *threadabortexception_class;
    Il2CppClass *thread_class;
    Il2CppClass *internal_thread_class;
    Il2CppClass *appdomain_class;
    Il2CppClass *appdomain_setup_class;
    Il2CppClass *member_info_class;
    Il2CppClass *field_info_class;
    Il2CppClass *method_info_class;
    Il2CppClass *property_info_class;
    Il2CppClass *event_info_class;
    Il2CppClass *stringbuilder_class;
    Il2CppClass *stack_frame_class;
    Il2CppClass *stack_trace_class;
    Il2CppClass *marshal_class;
    Il2CppClass *typed_reference_class;
    Il2CppClass *marshalbyrefobject_class;
    Il2CppClass *generic_ilist_class;
    Il2CppClass *generic_icollection_class;
    Il2CppClass *generic_ienumerable_class;
    Il2CppClass *generic_ireadonlylist_class;
    Il2CppClass *generic_ireadonlycollection_class;
    Il2CppClass *runtimetype_class;
    Il2CppClass *generic_nullable_class;
    Il2CppClass *il2cpp_com_object_class;
    Il2CppClass *attribute_class;
    Il2CppClass *customattribute_data_class;
    Il2CppClass *customattribute_typed_argument_class;
    Il2CppClass *customattribute_named_argument_class;
    Il2CppClass *version;
    Il2CppClass *culture_info;
    Il2CppClass *async_call_class;
    Il2CppClass *assembly_class;
    Il2CppClass *assembly_name_class;
    Il2CppClass *parameter_info_class;
    Il2CppClass *module_class;
    Il2CppClass *system_exception_class;
    Il2CppClass *argument_exception_class;
    Il2CppClass *wait_handle_class;
    Il2CppClass *safe_handle_class;
    Il2CppClass *sort_key_class;
    Il2CppClass *dbnull_class;
    Il2CppClass *error_wrapper_class;
    Il2CppClass *missing_class;
    Il2CppClass *value_type_class;
    Il2CppClass *threadpool_wait_callback_class;
    MethodInfo *threadpool_perform_wait_callback_method;
    Il2CppClass *mono_method_message_class;
    Il2CppClass* ireference_class;
    Il2CppClass* ireferencearray_class;
    Il2CppClass* ikey_value_pair_class;
    Il2CppClass* key_value_pair_class;
    Il2CppClass* windows_foundation_uri_class;
    Il2CppClass* windows_foundation_iuri_runtime_class_class;
    Il2CppClass* system_uri_class;
    Il2CppClass* system_guid_class;
    Il2CppClass* sbyte_shared_enum;
    Il2CppClass* int16_shared_enum;
    Il2CppClass* int32_shared_enum;
    Il2CppClass* int64_shared_enum;
    Il2CppClass* byte_shared_enum;
    Il2CppClass* uint16_shared_enum;
    Il2CppClass* uint32_shared_enum;
    Il2CppClass* uint64_shared_enum;
    Il2CppClass* il2cpp_fully_shared_type;
    Il2CppClass* il2cpp_fully_shared_struct_type;
} Il2CppDefaults;
extern Il2CppDefaults il2cpp_defaults;
typedef struct Il2CppClass Il2CppClass;
typedef struct MethodInfo MethodInfo;
typedef struct FieldInfo FieldInfo;
typedef struct Il2CppObject Il2CppObject;
typedef struct MemberInfo MemberInfo;
typedef struct CustomAttributesCache
{
    int count;
    Il2CppObject** attributes;
} CustomAttributesCache;
typedef struct FieldInfo
{
    const char* name;
    const Il2CppType* type;
    Il2CppClass *parent;
    int32_t offset;
    uint32_t token;
} FieldInfo;
typedef struct PropertyInfo
{
    Il2CppClass *parent;
    const char *name;
    const MethodInfo *get;
    const MethodInfo *set;
    uint32_t attrs;
    uint32_t token;
} PropertyInfo;
typedef struct EventInfo
{
    const char* name;
    const Il2CppType* eventType;
    Il2CppClass* parent;
    const MethodInfo* add;
    const MethodInfo* remove;
    const MethodInfo* raise;
    uint32_t token;
} EventInfo;
typedef void (*InvokerMethod)(Il2CppMethodPointer, const MethodInfo*, void*, void**, void*);
typedef enum MethodVariableKind
{
    kMethodVariableKind_This,
    kMethodVariableKind_Parameter,
    kMethodVariableKind_LocalVariable
} MethodVariableKind;
typedef enum SequencePointKind
{
    kSequencePointKind_Normal,
    kSequencePointKind_StepOut
} SequencePointKind;
typedef struct Il2CppMethodExecutionContextInfo
{
    TypeIndex typeIndex;
    int32_t nameIndex;
    int32_t scopeIndex;
} Il2CppMethodExecutionContextInfo;
typedef struct Il2CppMethodExecutionContextInfoIndex
{
    int32_t startIndex;
    int32_t count;
} Il2CppMethodExecutionContextInfoIndex;
typedef struct Il2CppMethodScope
{
    int32_t startOffset;
    int32_t endOffset;
} Il2CppMethodScope;
typedef struct Il2CppMethodHeaderInfo
{
    int32_t code_size;
    int32_t startScope;
    int32_t numScopes;
} Il2CppMethodHeaderInfo;
typedef struct Il2CppSequencePointSourceFile
{
    const char *file;
    uint8_t hash[16];
} Il2CppSequencePointSourceFile;
typedef struct Il2CppTypeSourceFilePair
{
    TypeDefinitionIndex __klassIndex;
    int32_t sourceFileIndex;
} Il2CppTypeSourceFilePair;
typedef struct Il2CppSequencePoint
{
    MethodIndex __methodDefinitionIndex;
    int32_t sourceFileIndex;
    int32_t lineStart, lineEnd;
    int32_t columnStart, columnEnd;
    int32_t ilOffset;
    SequencePointKind kind;
    int32_t isActive;
    int32_t id;
} Il2CppSequencePoint;
typedef struct Il2CppCatchPoint
{
    MethodIndex __methodDefinitionIndex;
    TypeIndex catchTypeIndex;
    int32_t ilOffset;
    int32_t tryId;
    int32_t parentTryId;
} Il2CppCatchPoint;
typedef struct Il2CppDebuggerMetadataRegistration
{
    Il2CppMethodExecutionContextInfo* methodExecutionContextInfos;
    Il2CppMethodExecutionContextInfoIndex* methodExecutionContextInfoIndexes;
    Il2CppMethodScope* methodScopes;
    Il2CppMethodHeaderInfo* methodHeaderInfos;
    Il2CppSequencePointSourceFile* sequencePointSourceFiles;
    int32_t numSequencePoints;
    Il2CppSequencePoint* sequencePoints;
    int32_t numCatchPoints;
    Il2CppCatchPoint* catchPoints;
    int32_t numTypeSourceFileEntries;
    Il2CppTypeSourceFilePair* typeSourceFiles;
    const char** methodExecutionContextInfoStrings;
} Il2CppDebuggerMetadataRegistration;
typedef union Il2CppRGCTXData
{
    void* rgctxDataDummy;
    const MethodInfo* method;
    const Il2CppType* type;
    Il2CppClass* klass;
} Il2CppRGCTXData;
typedef struct MethodInfo
{
    Il2CppMethodPointer methodPointer;
    Il2CppMethodPointer virtualMethodPointer;
    InvokerMethod invoker_method;
    const char* name;
    Il2CppClass *klass;
    const Il2CppType *return_type;
    const Il2CppType** parameters;
    union
    {
        const Il2CppRGCTXData* rgctx_data;
        Il2CppMetadataMethodDefinitionHandle methodMetadataHandle;
    };
    union
    {
        const Il2CppGenericMethod* genericMethod;
        Il2CppMetadataGenericContainerHandle genericContainerHandle;
    };
    uint32_t token;
    uint16_t flags;
    uint16_t iflags;
    uint16_t slot;
    uint8_t parameters_count;
    uint8_t is_generic : 1;
    uint8_t is_inflated : 1;
    uint8_t wrapper_type : 1;
    uint8_t has_full_generic_sharing_signature : 1;
    uint8_t indirect_call_via_invokers : 1;
} MethodInfo;
typedef struct Il2CppRuntimeInterfaceOffsetPair
{
    Il2CppClass* interfaceType;
    int32_t offset;
} Il2CppRuntimeInterfaceOffsetPair;
typedef struct Il2CppClass
{
    const Il2CppImage* image;
    void* gc_desc;
    const char* name;
    const char* namespaze;
    Il2CppType byval_arg;
    Il2CppType this_arg;
    Il2CppClass* element_class;
    Il2CppClass* castClass;
    Il2CppClass* declaringType;
    Il2CppClass* parent;
    Il2CppGenericClass *generic_class;
    Il2CppMetadataTypeHandle typeMetadataHandle;
    const Il2CppInteropData* interopData;
    Il2CppClass* klass;
    FieldInfo* fields;
    const EventInfo* events;
    const PropertyInfo* properties;
    const MethodInfo** methods;
    Il2CppClass** nestedTypes;
    Il2CppClass** implementedInterfaces;
    Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
    void* static_fields;
    const Il2CppRGCTXData* rgctx_data;
    struct Il2CppClass** typeHierarchy;
    void *unity_user_data;
    uint32_t initializationExceptionGCHandle;
    uint32_t cctor_started;
    uint32_t cctor_finished_or_no_cctor;
    __declspec(align(8)) size_t cctor_thread;
    Il2CppMetadataGenericContainerHandle genericContainerHandle;
    uint32_t instance_size;
    uint32_t actualSize;
    uint32_t element_size;
    int32_t native_size;
    uint32_t static_fields_size;
    uint32_t thread_static_fields_size;
    int32_t thread_static_fields_offset;
    uint32_t flags;
    uint32_t token;
    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;
    uint8_t typeHierarchyDepth;
    uint8_t genericRecursionDepth;
    uint8_t rank;
    uint8_t minimumAlignment;
    uint8_t naturalAligment;
    uint8_t packingSize;
    uint8_t initialized_and_no_error : 1;
    uint8_t initialized : 1;
    uint8_t enumtype : 1;
    uint8_t nullabletype : 1;
    uint8_t is_generic : 1;
    uint8_t has_references : 1;
    uint8_t init_pending : 1;
    uint8_t size_init_pending : 1;
    uint8_t size_inited : 1;
    uint8_t has_finalize : 1;
    uint8_t has_cctor : 1;
    uint8_t is_blittable : 1;
    uint8_t is_import_or_windows_runtime : 1;
    uint8_t is_vtable_initialized : 1;
    uint8_t is_byref_like : 1;
    VirtualInvokeData vtable[32];
} Il2CppClass;

typedef struct Il2CppClass_0 {
    const Il2CppImage* image;
    void* gc_desc;
    const char* name;
    const char* namespaze;
    Il2CppType byval_arg;
    Il2CppType this_arg;
    Il2CppClass* element_class;
    Il2CppClass* castClass;
    Il2CppClass* declaringType;
    Il2CppClass* parent;
    Il2CppGenericClass * generic_class;
    Il2CppMetadataTypeHandle typeMetadataHandle;
    const Il2CppInteropData* interopData;
    Il2CppClass* klass;
    FieldInfo* fields;
    const EventInfo* events;
    const PropertyInfo* properties;
    const MethodInfo** methods;
    Il2CppClass** nestedTypes;
    Il2CppClass** implementedInterfaces;
} Il2CppClass_0;

typedef struct Il2CppClass_1 {
    struct Il2CppClass** typeHierarchy;
    void * unity_user_data;
    uint32_t initializationExceptionGCHandle;
    uint32_t cctor_started;
    uint32_t cctor_finished_or_no_cctor;
#ifdef IS_32BIT
    uint32_t cctor_thread;
#else
    __declspec(align(8)) size_t cctor_thread;
#endif
    Il2CppMetadataGenericContainerHandle genericContainerHandle;
    uint32_t instance_size;
    uint32_t actualSize;
    uint32_t element_size;
    int32_t native_size;
    uint32_t static_fields_size;
    uint32_t thread_static_fields_size;
    int32_t thread_static_fields_offset;
    uint32_t flags;
    uint32_t token;
    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;
    uint8_t typeHierarchyDepth;
    uint8_t genericRecursionDepth;
    uint8_t rank;
    uint8_t minimumAlignment;
    uint8_t naturalAligment;
    uint8_t packingSize;
    uint8_t initialized_and_no_error : 1;
    uint8_t initialized : 1;
    uint8_t enumtype : 1;
    uint8_t nullabletype : 1;
    uint8_t is_generic : 1;
    uint8_t has_references : 1;
    uint8_t init_pending : 1;
    uint8_t size_init_pending : 1;
    uint8_t size_inited : 1;
    uint8_t has_finalize : 1;
    uint8_t has_cctor : 1;
    uint8_t is_blittable : 1;
    uint8_t is_import_or_windows_runtime : 1;
    uint8_t is_vtable_initialized : 1;
    uint8_t is_byref_like : 1;
} Il2CppClass_1;

typedef struct __declspec(align(8)) Il2CppClass_Merged {
    struct Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
    void* static_fields;
    const Il2CppRGCTXData* rgctx_data;
    struct Il2CppClass_1 _1;
    VirtualInvokeData vtable[32];
} Il2CppClass_Merged;

typedef struct Il2CppTypeDefinitionSizes
{
    uint32_t instance_size;
    int32_t native_size;
    uint32_t static_fields_size;
    uint32_t thread_static_fields_size;
} Il2CppTypeDefinitionSizes;
typedef struct Il2CppDomain
{
    Il2CppAppDomain* domain;
    Il2CppAppDomainSetup* setup;
    Il2CppAppContext* default_context;
    const char* friendly_name;
    uint32_t domain_id;
    volatile int threadpool_jobs;
    void* agent_info;
} Il2CppDomain;
typedef struct Il2CppAssemblyName
{
    const char* name;
    const char* culture;
    const uint8_t* public_key;
    uint32_t hash_alg;
    int32_t hash_len;
    uint32_t flags;
    int32_t major;
    int32_t minor;
    int32_t build;
    int32_t revision;
    uint8_t public_key_token[8];
} Il2CppAssemblyName;
typedef struct Il2CppImage
{
    const char* name;
    const char *nameNoExt;
    Il2CppAssembly* assembly;
    uint32_t typeCount;
    uint32_t exportedTypeCount;
    uint32_t customAttributeCount;
    Il2CppMetadataImageHandle metadataHandle;
    Il2CppNameToTypeHandleHashTable * nameToClassHashTable;
    const Il2CppCodeGenModule* codeGenModule;
    uint32_t token;
    uint8_t dynamic;
} Il2CppImage;
typedef struct Il2CppAssembly
{
    Il2CppImage* image;
    uint32_t token;
    int32_t referencedAssemblyStart;
    int32_t referencedAssemblyCount;
    Il2CppAssemblyName aname;
} Il2CppAssembly;
typedef struct Il2CppCodeGenOptions
{
    uint8_t enablePrimitiveValueTypeGenericSharing;
    int maximumRuntimeGenericDepth;
    int recursiveGenericIterations;
} Il2CppCodeGenOptions;
typedef struct Il2CppRange
{
    int32_t start;
    int32_t length;
} Il2CppRange;
typedef struct Il2CppTokenRangePair
{
    uint32_t token;
    Il2CppRange range;
} Il2CppTokenRangePair;
typedef struct Il2CppTokenIndexMethodTuple
{
    uint32_t token;
    int32_t index;
    void** method;
    uint32_t __genericMethodIndex;
} Il2CppTokenIndexMethodTuple;
typedef struct Il2CppTokenAdjustorThunkPair
{
    uint32_t token;
    Il2CppMethodPointer adjustorThunk;
} Il2CppTokenAdjustorThunkPair;
typedef struct Il2CppWindowsRuntimeFactoryTableEntry
{
    const Il2CppType* type;
    Il2CppMethodPointer createFactoryFunction;
} Il2CppWindowsRuntimeFactoryTableEntry;
typedef struct Il2CppCodeGenModule
{
    const char* moduleName;
    const uint32_t methodPointerCount;
    const Il2CppMethodPointer* methodPointers;
    const uint32_t adjustorThunkCount;
    const Il2CppTokenAdjustorThunkPair* adjustorThunks;
    const int32_t* invokerIndices;
    const uint32_t reversePInvokeWrapperCount;
    const Il2CppTokenIndexMethodTuple* reversePInvokeWrapperIndices;
    const uint32_t rgctxRangesCount;
    const Il2CppTokenRangePair* rgctxRanges;
    const uint32_t rgctxsCount;
    const Il2CppRGCTXDefinition* rgctxs;
    const Il2CppDebuggerMetadataRegistration *debuggerMetadata;
    const Il2CppMethodPointer moduleInitializer;
    TypeDefinitionIndex* staticConstructorTypeIndices;
    const Il2CppMetadataRegistration* metadataRegistration;
    const Il2CppCodeRegistration* codeRegistaration;
} Il2CppCodeGenModule;
typedef struct Il2CppCodeRegistration
{
    uint32_t reversePInvokeWrapperCount;
    const Il2CppMethodPointer* reversePInvokeWrappers;
    uint32_t genericMethodPointersCount;
    const Il2CppMethodPointer* genericMethodPointers;
    const Il2CppMethodPointer* genericAdjustorThunks;
    uint32_t invokerPointersCount;
    const InvokerMethod* invokerPointers;
    uint32_t unresolvedVirtualCallCount;
    const Il2CppMethodPointer* unresolvedVirtualCallPointers;
    uint32_t interopDataCount;
    Il2CppInteropData* interopData;
    uint32_t windowsRuntimeFactoryCount;
    Il2CppWindowsRuntimeFactoryTableEntry* windowsRuntimeFactoryTable;
    uint32_t codeGenModulesCount;
    const Il2CppCodeGenModule** codeGenModules;
} Il2CppCodeRegistration;
typedef struct Il2CppMetadataRegistration
{
    int32_t genericClassesCount;
    Il2CppGenericClass* const * genericClasses;
    int32_t genericInstsCount;
    const Il2CppGenericInst* const * genericInsts;
    int32_t genericMethodTableCount;
    const Il2CppGenericMethodFunctionsDefinitions* genericMethodTable;
    int32_t typesCount;
    const Il2CppType* const * types;
    int32_t methodSpecsCount;
    const Il2CppMethodSpec* methodSpecs;
    FieldIndex fieldOffsetsCount;
    const int32_t** fieldOffsets;
    TypeDefinitionIndex typeDefinitionsSizesCount;
    const Il2CppTypeDefinitionSizes** typeDefinitionsSizes;
    const size_t metadataUsagesCount;
    void** const* metadataUsages;
} Il2CppMetadataRegistration;
typedef struct Il2CppPerfCounters
{
    uint32_t jit_methods;
    uint32_t jit_bytes;
    uint32_t jit_time;
    uint32_t jit_failures;
    uint32_t exceptions_thrown;
    uint32_t exceptions_filters;
    uint32_t exceptions_finallys;
    uint32_t exceptions_depth;
    uint32_t aspnet_requests_queued;
    uint32_t aspnet_requests;
    uint32_t gc_collections0;
    uint32_t gc_collections1;
    uint32_t gc_collections2;
    uint32_t gc_promotions0;
    uint32_t gc_promotions1;
    uint32_t gc_promotion_finalizers;
    uint32_t gc_gen0size;
    uint32_t gc_gen1size;
    uint32_t gc_gen2size;
    uint32_t gc_lossize;
    uint32_t gc_fin_survivors;
    uint32_t gc_num_handles;
    uint32_t gc_allocated;
    uint32_t gc_induced;
    uint32_t gc_time;
    uint32_t gc_total_bytes;
    uint32_t gc_committed_bytes;
    uint32_t gc_reserved_bytes;
    uint32_t gc_num_pinned;
    uint32_t gc_sync_blocks;
    uint32_t remoting_calls;
    uint32_t remoting_channels;
    uint32_t remoting_proxies;
    uint32_t remoting_classes;
    uint32_t remoting_objects;
    uint32_t remoting_contexts;
    uint32_t loader_classes;
    uint32_t loader_total_classes;
    uint32_t loader_appdomains;
    uint32_t loader_total_appdomains;
    uint32_t loader_assemblies;
    uint32_t loader_total_assemblies;
    uint32_t loader_failures;
    uint32_t loader_bytes;
    uint32_t loader_appdomains_uloaded;
    uint32_t thread_contentions;
    uint32_t thread_queue_len;
    uint32_t thread_queue_max;
    uint32_t thread_num_logical;
    uint32_t thread_num_physical;
    uint32_t thread_cur_recognized;
    uint32_t thread_num_recognized;
    uint32_t interop_num_ccw;
    uint32_t interop_num_stubs;
    uint32_t interop_num_marshals;
    uint32_t security_num_checks;
    uint32_t security_num_link_checks;
    uint32_t security_time;
    uint32_t security_depth;
    uint32_t unused;
    uint64_t threadpool_workitems;
    uint64_t threadpool_ioworkitems;
    unsigned int threadpool_threads;
    unsigned int threadpool_iothreads;
} Il2CppPerfCounters;
typedef struct Il2CppClass Il2CppClass;
typedef struct MethodInfo MethodInfo;
typedef struct PropertyInfo PropertyInfo;
typedef struct FieldInfo FieldInfo;
typedef struct EventInfo EventInfo;
typedef struct Il2CppType Il2CppType;
typedef struct Il2CppAssembly Il2CppAssembly;
typedef struct Il2CppException Il2CppException;
typedef struct Il2CppImage Il2CppImage;
typedef struct Il2CppDomain Il2CppDomain;
typedef struct Il2CppString Il2CppString;
typedef struct Il2CppReflectionMethod Il2CppReflectionMethod;
typedef struct Il2CppAsyncCall Il2CppAsyncCall;
typedef struct Il2CppIUnknown Il2CppIUnknown;
typedef struct Il2CppWaitHandle Il2CppWaitHandle;
typedef struct MonitorData MonitorData;
typedef struct Il2CppReflectionAssembly Il2CppReflectionAssembly;
typedef Il2CppClass Il2CppVTable;
typedef struct Il2CppObject
{
    union
    {
        Il2CppClass *klass;
        Il2CppVTable *vtable;
    };
    MonitorData *monitor;
} Il2CppObject;
typedef int32_t il2cpp_array_lower_bound_t;
typedef struct Il2CppArrayBounds
{
    il2cpp_array_size_t length;
    il2cpp_array_lower_bound_t lower_bound;
} Il2CppArrayBounds;
typedef struct Il2CppArray
{
    Il2CppObject obj;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
} Il2CppArray;
typedef struct Il2CppArraySize
{
    Il2CppObject obj;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    __declspec(align(8)) void* vector[32];
} Il2CppArraySize;
typedef struct Il2CppString
{
    Il2CppObject object;
    int32_t length;
    Il2CppChar chars[32];
} Il2CppString;
typedef struct Il2CppReflectionType
{
    Il2CppObject object;
    const Il2CppType *type;
} Il2CppReflectionType;
typedef struct Il2CppReflectionRuntimeType
{
    Il2CppReflectionType type;
    Il2CppObject* type_info;
    Il2CppObject* genericCache;
    Il2CppObject* serializationCtor;
} Il2CppReflectionRuntimeType;
typedef struct Il2CppReflectionMonoType
{
    Il2CppReflectionRuntimeType type;
} Il2CppReflectionMonoType;
typedef struct Il2CppReflectionEvent
{
    Il2CppObject object;
    Il2CppObject *cached_add_event;
} Il2CppReflectionEvent;
typedef struct Il2CppReflectionMonoEvent
{
    Il2CppReflectionEvent event;
    Il2CppReflectionType* reflectedType;
    const EventInfo* eventInfo;
} Il2CppReflectionMonoEvent;
typedef struct Il2CppReflectionMonoEventInfo
{
    Il2CppReflectionType* declaringType;
    Il2CppReflectionType* reflectedType;
    Il2CppString* name;
    Il2CppReflectionMethod* addMethod;
    Il2CppReflectionMethod* removeMethod;
    Il2CppReflectionMethod* raiseMethod;
    uint32_t eventAttributes;
    Il2CppArray* otherMethods;
} Il2CppReflectionMonoEventInfo;
typedef struct Il2CppReflectionField
{
    Il2CppObject object;
    Il2CppClass *klass;
    FieldInfo *field;
    Il2CppString *name;
    Il2CppReflectionType *type;
    uint32_t attrs;
} Il2CppReflectionField;
typedef struct Il2CppReflectionProperty
{
    Il2CppObject object;
    Il2CppClass *klass;
    const PropertyInfo *property;
} Il2CppReflectionProperty;
typedef struct Il2CppReflectionMethod
{
    Il2CppObject object;
    const MethodInfo *method;
    Il2CppString *name;
    Il2CppReflectionType *reftype;
} Il2CppReflectionMethod;
typedef struct Il2CppReflectionGenericMethod
{
    Il2CppReflectionMethod base;
} Il2CppReflectionGenericMethod;
typedef struct Il2CppMethodInfo
{
    Il2CppReflectionType *parent;
    Il2CppReflectionType *ret;
    uint32_t attrs;
    uint32_t implattrs;
    uint32_t callconv;
} Il2CppMethodInfo;
typedef struct Il2CppPropertyInfo
{
    Il2CppReflectionType* parent;
    Il2CppReflectionType* declaringType;
    Il2CppString *name;
    Il2CppReflectionMethod *get;
    Il2CppReflectionMethod *set;
    uint32_t attrs;
} Il2CppPropertyInfo;
typedef struct Il2CppReflectionParameter
{
    Il2CppObject object;
    uint32_t AttrsImpl;
    Il2CppReflectionType *ClassImpl;
    Il2CppObject *DefaultValueImpl;
    Il2CppObject *MemberImpl;
    Il2CppString *NameImpl;
    int32_t PositionImpl;
    Il2CppObject* MarshalAs;
} Il2CppReflectionParameter;
typedef struct Il2CppReflectionModule
{
    Il2CppObject obj;
    const Il2CppImage* image;
    Il2CppReflectionAssembly* assembly;
    Il2CppString* fqname;
    Il2CppString* name;
    Il2CppString* scopename;
    uint8_t is_resource;
    uint32_t token;
} Il2CppReflectionModule;
typedef struct Il2CppReflectionAssemblyName
{
    Il2CppObject obj;
    Il2CppString *name;
    Il2CppString *codebase;
    int32_t major, minor, build, revision;
    Il2CppObject *cultureInfo;
    uint32_t flags;
    uint32_t hashalg;
    Il2CppObject *keypair;
    Il2CppArray *publicKey;
    Il2CppArray *keyToken;
    uint32_t versioncompat;
    Il2CppObject *version;
    uint32_t processor_architecture;
    uint32_t contentType;
} Il2CppReflectionAssemblyName;
typedef struct Il2CppReflectionAssembly
{
    Il2CppObject object;
    const Il2CppAssembly *assembly;
    Il2CppObject *evidence;
    Il2CppObject *resolve_event_holder;
    Il2CppObject *minimum;
    Il2CppObject *optional;
    Il2CppObject *refuse;
    Il2CppObject *granted;
    Il2CppObject *denied;
    uint8_t from_byte_array;
    Il2CppString *name;
} Il2CppReflectionAssembly;
typedef struct Il2CppReflectionMarshal
{
    Il2CppObject object;
    int32_t count;
    int32_t type;
    int32_t eltype;
    Il2CppString* guid;
    Il2CppString* mcookie;
    Il2CppString* marshaltype;
    Il2CppObject* marshaltyperef;
    int32_t param_num;
    uint8_t has_size;
} Il2CppReflectionMarshal;
typedef struct Il2CppReflectionPointer
{
    Il2CppObject object;
    void* data;
    Il2CppReflectionType* type;
} Il2CppReflectionPointer;
typedef struct Il2CppThreadName
{
    Il2CppChar* chars;
    int32_t unused;
    int32_t length;
} Il2CppThreadName;
typedef struct
{
    uint32_t ref;
    void (*destructor)(void* data);
} Il2CppRefCount;
typedef struct
{
    Il2CppRefCount ref;
    void* synch_cs;
} Il2CppLongLivedThreadData;
typedef struct Il2CppInternalThread
{
    Il2CppObject obj;
    int lock_thread_id;
    void* handle;
    void* native_handle;
    Il2CppThreadName name;
    uint32_t state;
    Il2CppObject* abort_exc;
    int abort_state_handle;
    uint64_t tid;
    intptr_t debugger_thread;
    void** static_data;
    void* runtime_thread_info;
    Il2CppObject* current_appcontext;
    Il2CppObject* root_domain_thread;
    Il2CppArray* _serialized_principal;
    int _serialized_principal_version;
    void* appdomain_refs;
    int32_t interruption_requested;
    void* longlived;
    uint8_t threadpool_thread;
    uint8_t thread_interrupt_requested;
    int stack_size;
    uint8_t apartment_state;
    int critical_region_level;
    int managed_id;
    uint32_t small_id;
    void* manage_callback;
    intptr_t flags;
    void* thread_pinning_ref;
    void* abort_protected_block_count;
    int32_t priority;
    void* owned_mutexes;
    void * suspended;
    int32_t self_suspended;
    size_t thread_state;
    void* unused[3];
    void* last;
} Il2CppInternalThread;
typedef struct Il2CppIOSelectorJob
{
    Il2CppObject object;
    int32_t operation;
    Il2CppObject *callback;
    Il2CppObject *state;
} Il2CppIOSelectorJob;
typedef enum
{
    Il2Cpp_CallType_Sync = 0,
    Il2Cpp_CallType_BeginInvoke = 1,
    Il2Cpp_CallType_EndInvoke = 2,
    Il2Cpp_CallType_OneWay = 3
} Il2CppCallType;
typedef struct Il2CppMethodMessage
{
    Il2CppObject obj;
    Il2CppReflectionMethod *method;
    Il2CppArray *args;
    Il2CppArray *names;
    Il2CppArray *arg_types;
    Il2CppObject *ctx;
    Il2CppObject *rval;
    Il2CppObject *exc;
    Il2CppAsyncResult *async_result;
    uint32_t call_type;
} Il2CppMethodMessage;
typedef struct Il2CppAppDomainSetup
{
    Il2CppObject object;
    Il2CppString* application_base;
    Il2CppString* application_name;
    Il2CppString* cache_path;
    Il2CppString* configuration_file;
    Il2CppString* dynamic_base;
    Il2CppString* license_file;
    Il2CppString* private_bin_path;
    Il2CppString* private_bin_path_probe;
    Il2CppString* shadow_copy_directories;
    Il2CppString* shadow_copy_files;
    uint8_t publisher_policy;
    uint8_t path_changed;
    int loader_optimization;
    uint8_t disallow_binding_redirects;
    uint8_t disallow_code_downloads;
    Il2CppObject* activation_arguments;
    Il2CppObject* domain_initializer;
    Il2CppObject* application_trust;
    Il2CppArray* domain_initializer_args;
    uint8_t disallow_appbase_probe;
    Il2CppArray* configuration_bytes;
    Il2CppArray* serialized_non_primitives;
} Il2CppAppDomainSetup;
typedef struct Il2CppThread
{
    Il2CppObject obj;
    Il2CppInternalThread* internal_thread;
    Il2CppObject* start_obj;
    Il2CppException* pending_exception;
    Il2CppObject* principal;
    int32_t principal_version;
    Il2CppDelegate* delegate;
    Il2CppObject* executionContext;
    uint8_t executionContextBelongsToOuterScope;
} Il2CppThread;
typedef struct Il2CppException
{
    Il2CppObject object;
    Il2CppString* className;
    Il2CppString* message;
    Il2CppObject* _data;
    struct Il2CppException* inner_ex;
    Il2CppString* _helpURL;
    Il2CppArray* trace_ips;
    Il2CppString* stack_trace;
    Il2CppString* remote_stack_trace;
    int remote_stack_index;
    Il2CppObject* _dynamicMethods;
    il2cpp_hresult_t hresult;
    Il2CppString* source;
    Il2CppObject* safeSerializationManager;
    Il2CppArray* captured_traces;
    Il2CppArray* native_trace_ips;
    int32_t caught_in_unmanaged;
} Il2CppException;
typedef struct Il2CppSystemException
{
    Il2CppException base;
} Il2CppSystemException;
typedef struct Il2CppArgumentException
{
    Il2CppException base;
    Il2CppString *argName;
} Il2CppArgumentException;
typedef struct Il2CppTypedRef
{
    const Il2CppType *type;
    void* value;
    Il2CppClass *klass;
} Il2CppTypedRef;
typedef struct Il2CppDelegate
{
    Il2CppObject object;
    Il2CppMethodPointer method_ptr;
    Il2CppMethodPointer invoke_impl;
    Il2CppObject *target;
    const MethodInfo *method;
    void* delegate_trampoline;
    intptr_t extraArg;
    uint8_t **method_code;
    void* interp_method;
    void* interp_invoke_impl;
    Il2CppReflectionMethod *method_info;
    Il2CppReflectionMethod *original_method_info;
    Il2CppObject *data;
    uint8_t method_is_virtual;
} Il2CppDelegate;
typedef struct Il2CppMulticastDelegate
{
    Il2CppDelegate delegate;
    Il2CppArray *delegates;
} Il2CppMulticastDelegate;
typedef struct Il2CppMarshalByRefObject
{
    Il2CppObject obj;
    Il2CppObject *identity;
} Il2CppMarshalByRefObject;
typedef void* Il2CppFullySharedGenericAny;
typedef void* Il2CppFullySharedGenericStruct;
typedef struct Il2CppAppDomain
{
    Il2CppMarshalByRefObject mbr;
    Il2CppDomain *data;
} Il2CppAppDomain;
typedef struct Il2CppStackFrame
{
    Il2CppObject obj;
    int32_t il_offset;
    int32_t native_offset;
    uint64_t methodAddress;
    uint32_t methodIndex;
    Il2CppReflectionMethod *method;
    Il2CppString *filename;
    int32_t line;
    int32_t column;
    Il2CppString *internal_method_name;
} Il2CppStackFrame;
typedef struct Il2CppDateTimeFormatInfo
{
    Il2CppObject obj;
    Il2CppObject* CultureData;
    Il2CppString* Name;
    Il2CppString* LangName;
    Il2CppObject* CompareInfo;
    Il2CppObject* CultureInfo;
    Il2CppString* AMDesignator;
    Il2CppString* PMDesignator;
    Il2CppString* DateSeparator;
    Il2CppString* GeneralShortTimePattern;
    Il2CppString* GeneralLongTimePattern;
    Il2CppString* TimeSeparator;
    Il2CppString* MonthDayPattern;
    Il2CppString* DateTimeOffsetPattern;
    Il2CppObject* Calendar;
    uint32_t FirstDayOfWeek;
    uint32_t CalendarWeekRule;
    Il2CppString* FullDateTimePattern;
    Il2CppArray* AbbreviatedDayNames;
    Il2CppArray* ShortDayNames;
    Il2CppArray* DayNames;
    Il2CppArray* AbbreviatedMonthNames;
    Il2CppArray* MonthNames;
    Il2CppArray* GenitiveMonthNames;
    Il2CppArray* GenitiveAbbreviatedMonthNames;
    Il2CppArray* LeapYearMonthNames;
    Il2CppString* LongDatePattern;
    Il2CppString* ShortDatePattern;
    Il2CppString* YearMonthPattern;
    Il2CppString* LongTimePattern;
    Il2CppString* ShortTimePattern;
    Il2CppArray* YearMonthPatterns;
    Il2CppArray* ShortDatePatterns;
    Il2CppArray* LongDatePatterns;
    Il2CppArray* ShortTimePatterns;
    Il2CppArray* LongTimePatterns;
    Il2CppArray* EraNames;
    Il2CppArray* AbbrevEraNames;
    Il2CppArray* AbbrevEnglishEraNames;
    Il2CppArray* OptionalCalendars;
    uint8_t readOnly;
    int32_t FormatFlags;
    int32_t CultureID;
    uint8_t UseUserOverride;
    uint8_t UseCalendarInfo;
    int32_t DataItem;
    uint8_t IsDefaultCalendar;
    Il2CppArray* DateWords;
    Il2CppString* FullTimeSpanPositivePattern;
    Il2CppString* FullTimeSpanNegativePattern;
    Il2CppArray* dtfiTokenHash;
} Il2CppDateTimeFormatInfo;
typedef struct Il2CppNumberFormatInfo
{
    Il2CppObject obj;
    Il2CppArray* numberGroupSizes;
    Il2CppArray* currencyGroupSizes;
    Il2CppArray* percentGroupSizes;
    Il2CppString* positiveSign;
    Il2CppString* negativeSign;
    Il2CppString* numberDecimalSeparator;
    Il2CppString* numberGroupSeparator;
    Il2CppString* currencyGroupSeparator;
    Il2CppString* currencyDecimalSeparator;
    Il2CppString* currencySymbol;
    Il2CppString* ansiCurrencySymbol;
    Il2CppString* naNSymbol;
    Il2CppString* positiveInfinitySymbol;
    Il2CppString* negativeInfinitySymbol;
    Il2CppString* percentDecimalSeparator;
    Il2CppString* percentGroupSeparator;
    Il2CppString* percentSymbol;
    Il2CppString* perMilleSymbol;
    Il2CppArray* nativeDigits;
    int dataItem;
    int numberDecimalDigits;
    int currencyDecimalDigits;
    int currencyPositivePattern;
    int currencyNegativePattern;
    int numberNegativePattern;
    int percentPositivePattern;
    int percentNegativePattern;
    int percentDecimalDigits;
    int digitSubstitution;
    uint8_t readOnly;
    uint8_t useUserOverride;
    uint8_t isInvariant;
    uint8_t validForParseAsNumber;
    uint8_t validForParseAsCurrency;
} Il2CppNumberFormatInfo;
typedef struct NumberFormatEntryManaged
{
    int32_t currency_decimal_digits;
    int32_t currency_decimal_separator;
    int32_t currency_group_separator;
    int32_t currency_group_sizes0;
    int32_t currency_group_sizes1;
    int32_t currency_negative_pattern;
    int32_t currency_positive_pattern;
    int32_t currency_symbol;
    int32_t nan_symbol;
    int32_t negative_infinity_symbol;
    int32_t negative_sign;
    int32_t number_decimal_digits;
    int32_t number_decimal_separator;
    int32_t number_group_separator;
    int32_t number_group_sizes0;
    int32_t number_group_sizes1;
    int32_t number_negative_pattern;
    int32_t per_mille_symbol;
    int32_t percent_negative_pattern;
    int32_t percent_positive_pattern;
    int32_t percent_symbol;
    int32_t positive_infinity_symbol;
    int32_t positive_sign;
} NumberFormatEntryManaged;
typedef struct Il2CppCultureData
{
    Il2CppObject obj;
    Il2CppString *AMDesignator;
    Il2CppString *PMDesignator;
    Il2CppString *TimeSeparator;
    Il2CppArray *LongTimePatterns;
    Il2CppArray *ShortTimePatterns;
    uint32_t FirstDayOfWeek;
    uint32_t CalendarWeekRule;
} Il2CppCultureData;
typedef struct Il2CppCalendarData
{
    Il2CppObject obj;
    Il2CppString *NativeName;
    Il2CppArray *ShortDatePatterns;
    Il2CppArray *YearMonthPatterns;
    Il2CppArray *LongDatePatterns;
    Il2CppString *MonthDayPattern;
    Il2CppArray *EraNames;
    Il2CppArray *AbbreviatedEraNames;
    Il2CppArray *AbbreviatedEnglishEraNames;
    Il2CppArray *DayNames;
    Il2CppArray *AbbreviatedDayNames;
    Il2CppArray *SuperShortDayNames;
    Il2CppArray *MonthNames;
    Il2CppArray *AbbreviatedMonthNames;
    Il2CppArray *GenitiveMonthNames;
    Il2CppArray *GenitiveAbbreviatedMonthNames;
} Il2CppCalendarData;
typedef struct Il2CppCultureInfo
{
    Il2CppObject obj;
    uint8_t is_read_only;
    int32_t lcid;
    int32_t parent_lcid;
    int32_t datetime_index;
    int32_t number_index;
    int32_t default_calendar_type;
    uint8_t use_user_override;
    Il2CppNumberFormatInfo* number_format;
    Il2CppDateTimeFormatInfo* datetime_format;
    Il2CppObject* textinfo;
    Il2CppString* name;
    Il2CppString* englishname;
    Il2CppString* nativename;
    Il2CppString* iso3lang;
    Il2CppString* iso2lang;
    Il2CppString* win3lang;
    Il2CppString* territory;
    Il2CppArray* native_calendar_names;
    Il2CppString* compareinfo;
    const void* text_info_data;
    int dataItem;
    Il2CppObject* calendar;
    Il2CppObject* parent_culture;
    uint8_t constructed;
    Il2CppArray* cached_serialized_form;
    Il2CppObject* cultureData;
    uint8_t isInherited;
} Il2CppCultureInfo;
typedef struct Il2CppRegionInfo
{
    Il2CppObject obj;
    int32_t geo_id;
    Il2CppString* iso2name;
    Il2CppString* iso3name;
    Il2CppString* win3name;
    Il2CppString* english_name;
    Il2CppString* native_name;
    Il2CppString* currency_symbol;
    Il2CppString* iso_currency_symbol;
    Il2CppString* currency_english_name;
    Il2CppString* currency_native_name;
} Il2CppRegionInfo;
typedef struct Il2CppSafeHandle
{
    Il2CppObject base;
    void* handle;
    int state;
    uint8_t owns_handle;
    uint8_t fullyInitialized;
} Il2CppSafeHandle;
typedef struct Il2CppStringBuilder Il2CppStringBuilder;
typedef struct Il2CppStringBuilder
{
    Il2CppObject object;
    Il2CppArray* chunkChars;
    struct Il2CppStringBuilder* chunkPrevious;
    int chunkLength;
    int chunkOffset;
    int maxCapacity;
} Il2CppStringBuilder;
typedef struct Il2CppSocketAddress
{
    Il2CppObject base;
    int m_Size;
    Il2CppArray* data;
    uint8_t m_changed;
    int m_hash;
} Il2CppSocketAddress;
typedef struct Il2CppSortKey
{
    Il2CppObject base;
    Il2CppString *str;
    Il2CppArray *key;
    int32_t options;
    int32_t lcid;
} Il2CppSortKey;
typedef struct Il2CppErrorWrapper
{
    Il2CppObject base;
    int32_t errorCode;
} Il2CppErrorWrapper;
typedef struct Il2CppAsyncResult
{
    Il2CppObject base;
    Il2CppObject *async_state;
    Il2CppWaitHandle *handle;
    Il2CppDelegate *async_delegate;
    void* data;
    Il2CppAsyncCall *object_data;
    uint8_t sync_completed;
    uint8_t completed;
    uint8_t endinvoke_called;
    Il2CppObject *async_callback;
    Il2CppObject *execution_context;
    Il2CppObject *original_context;
} Il2CppAsyncResult;
typedef struct Il2CppAsyncCall
{
    Il2CppObject base;
    Il2CppMethodMessage *msg;
    MethodInfo *cb_method;
    Il2CppDelegate *cb_target;
    Il2CppObject *state;
    Il2CppObject *res;
    Il2CppArray *out_args;
} Il2CppAsyncCall;
typedef struct Il2CppExceptionWrapper Il2CppExceptionWrapper;
typedef struct Il2CppExceptionWrapper
{
    Il2CppException* ex;
} Il2CppExceptionWrapper;
typedef struct Il2CppIOAsyncResult
{
    Il2CppObject base;
    Il2CppDelegate* callback;
    Il2CppObject* state;
    Il2CppWaitHandle* wait_handle;
    uint8_t completed_synchronously;
    uint8_t completed;
} Il2CppIOAsyncResult;
typedef struct Il2CppSocketAsyncResult
{
    Il2CppIOAsyncResult base;
    Il2CppObject* socket;
    int32_t operation;
    Il2CppException* delayedException;
    Il2CppObject* endPoint;
    Il2CppArray* buffer;
    int32_t offset;
    int32_t size;
    int32_t socket_flags;
    Il2CppObject* acceptSocket;
    Il2CppArray* addresses;
    int32_t port;
    Il2CppObject* buffers;
    uint8_t reuseSocket;
    int32_t currentAddress;
    Il2CppObject* acceptedSocket;
    int32_t total;
    int32_t error;
    int32_t endCalled;
} Il2CppSocketAsyncResult;
typedef enum Il2CppResourceLocation
{
    IL2CPP_RESOURCE_LOCATION_EMBEDDED = 1,
    IL2CPP_RESOURCE_LOCATION_ANOTHER_ASSEMBLY = 2,
    IL2CPP_RESOURCE_LOCATION_IN_MANIFEST = 4
} Il2CppResourceLocation;
typedef struct Il2CppManifestResourceInfo
{
    Il2CppObject object;
    Il2CppReflectionAssembly* assembly;
    Il2CppString* filename;
    uint32_t location;
} Il2CppManifestResourceInfo;
typedef struct Il2CppAppContext
{
    Il2CppObject obj;
    int32_t domain_id;
    int32_t context_id;
    void* static_data;
} Il2CppAppContext;
typedef struct Il2CppDecimal
{
    uint16_t reserved;
    union
    {
        struct
        {
            uint8_t scale;
            uint8_t sign;
        } u;
        uint16_t signscale;
    } u;
    uint32_t Hi32;
    union
    {
        struct
        {
            uint32_t Lo32;
            uint32_t Mid32;
        } v;
        uint64_t Lo64;
    } v;
} Il2CppDecimal;
typedef struct Il2CppDouble
{
    uint32_t mantLo : 32;
    uint32_t mantHi : 20;
    uint32_t exp : 11;
    uint32_t sign : 1;
} Il2CppDouble;
typedef union Il2CppDouble_double
{
    Il2CppDouble s;
    double d;
} Il2CppDouble_double;
typedef enum Il2CppDecimalCompareResult
{
    IL2CPP_DECIMAL_CMP_LT = -1,
    IL2CPP_DECIMAL_CMP_EQ,
    IL2CPP_DECIMAL_CMP_GT
} Il2CppDecimalCompareResult;
typedef struct Il2CppSingle
{
    uint32_t mant : 23;
    uint32_t exp : 8;
    uint32_t sign : 1;
} Il2CppSingle;
typedef union Il2CppSingle_float
{
    Il2CppSingle s;
    float f;
} Il2CppSingle_float;
typedef struct Il2CppByReference
{
    intptr_t value;
} Il2CppByReference;

#pragma warning(disable : 4369)
#pragma warning(disable : 4309)
#pragma warning(disable : 4359)
#ifndef IS_DECOMPILER
namespace app {
#endif

// ******************************************************************************
// * Required forward definitions
// ******************************************************************************

// ******************************************************************************
// * Required forward definitions
// ******************************************************************************

// ******************************************************************************
// * Application types from method calls
// ******************************************************************************

struct Vector2 {
    float x;
    float y;
};

struct Vector3 {
    float x;
    float y;
    float z;
};

struct float3 {
    float x;
    float y;
    float z;
};

struct float4 {
    float x;
    float y;
    float z;
    float w;
};

struct quaternion {
    struct float4 value;
};

struct Quaternion {
    float x;
    float y;
    float z;
    float w;
};

struct Color {
    float r;
    float g;
    float b;
    float a;
};

struct Object__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Object__StaticFields {
};

struct Object__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Object__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Object__VTable vtable;
};

struct Object {
    struct Object__Class *klass;
    MonitorData *monitor;
};

struct ValueType {
    struct ValueType__Class *klass;
    MonitorData *monitor;
};

struct Int64 {
    int64_t m_value;
};

struct Int64__Boxed {
    struct Int64__Class *klass;
    MonitorData *monitor;
    int64_t fields;
};

struct FP {
    int64_t _serializedValue;
};

struct FP__Boxed {
    struct FP__Class *klass;
    MonitorData *monitor;
    struct FP fields;
};

struct TSVector {
    struct FP x;
    struct FP y;
    struct FP z;
};

struct TSVector__Boxed {
    struct TSVector__Class *klass;
    MonitorData *monitor;
    struct TSVector fields;
};

struct TSVector2 {
    struct FP x;
    struct FP y;
};

struct TSRect {
    struct FP m_XMin;
    struct FP m_YMin;
    struct FP m_Width;
    struct FP m_Height;
};

struct DeterministicShape {
    int32_t shapeType;
    struct FP width;
    struct FP length;
    struct FP radius;
    struct FP innerRadius;
    struct FP angle;
    struct TSVector2 position;
    struct FP rotation;
};

struct Boolean {
    bool m_value;
};

struct Boolean__Boxed {
    struct Boolean__Class *klass;
    MonitorData *monitor;
    bool fields;
};

struct Int32 {
    int32_t m_value;
};

struct Int32__Boxed {
    struct Int32__Class *klass;
    MonitorData *monitor;
    int32_t fields;
};

struct Void {
};

struct Void__Boxed {
    struct Void__Class *klass;
    MonitorData *monitor;
    struct Void fields;
};

struct Char {
    uint16_t m_value;
};

struct Char__Boxed {
    struct Char__Class *klass;
    MonitorData *monitor;
    uint16_t fields;
};

struct __declspec(align(8)) String__Fields {
    int32_t _stringLength;
    uint16_t _firstChar;
};

struct String {
    struct String__Class *klass;
    MonitorData *monitor;
    struct String__Fields fields;
};

struct Byte {
    uint8_t m_value;
};

struct Byte__Boxed {
    struct Byte__Class *klass;
    MonitorData *monitor;
    uint8_t fields;
};

struct Enum {
};

struct Enum__Boxed {
    struct Enum__Class *klass;
    MonitorData *monitor;
    struct Enum fields;
};

enum class TypeCode__Enum : int32_t {
    Empty = 0x00000000,
    Object = 0x00000001,
    DBNull = 0x00000002,
    Boolean = 0x00000003,
    Char = 0x00000004,
    SByte = 0x00000005,
    Byte = 0x00000006,
    Int16 = 0x00000007,
    UInt16 = 0x00000008,
    Int32 = 0x00000009,
    UInt32 = 0x0000000a,
    Int64 = 0x0000000b,
    UInt64 = 0x0000000c,
    Single = 0x0000000d,
    Double = 0x0000000e,
    Decimal = 0x0000000f,
    DateTime = 0x00000010,
    String = 0x00000012,
};

struct TypeCode__Enum__Boxed {
    struct TypeCode__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    TypeCode__Enum value;
    #else
    int32_t value;
    #endif
};

struct Array {
    struct Array__Class *klass;
    MonitorData *monitor;
};

struct Char__Array {
    struct Char__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    uint16_t vector[32];
};

struct IEnumerator {
    struct IEnumerator__Class *klass;
    MonitorData *monitor;
};

struct IComparer {
    struct IComparer__Class *klass;
    MonitorData *monitor;
};

struct IEqualityComparer {
    struct IEqualityComparer__Class *klass;
    MonitorData *monitor;
};

struct IFormatProvider {
    struct IFormatProvider__Class *klass;
    MonitorData *monitor;
};

struct SByte {
    int8_t m_value;
};

struct SByte__Boxed {
    struct SByte__Class *klass;
    MonitorData *monitor;
    int8_t fields;
};

struct Int16 {
    int16_t m_value;
};

struct Int16__Boxed {
    struct Int16__Class *klass;
    MonitorData *monitor;
    int16_t fields;
};

struct UInt16 {
    uint16_t m_value;
};

struct UInt16__Boxed {
    struct UInt16__Class *klass;
    MonitorData *monitor;
    uint16_t fields;
};

struct UInt32 {
    uint32_t m_value;
};

struct UInt32__Boxed {
    struct UInt32__Class *klass;
    MonitorData *monitor;
    uint32_t fields;
};

struct UInt64 {
    uint64_t m_value;
};

struct UInt64__Boxed {
    struct UInt64__Class *klass;
    MonitorData *monitor;
    uint64_t fields;
};

struct Single {
    float m_value;
};

struct Single__Boxed {
    struct Single__Class *klass;
    MonitorData *monitor;
    float fields;
};

struct Double {
    double m_value;
};

struct Double__Boxed {
    struct Double__Class *klass;
    MonitorData *monitor;
    double fields;
};

struct Decimal {
    int32_t flags;
    int32_t hi;
    int32_t lo;
    int32_t mid;
    uint64_t ulomidLE;
};

struct Decimal__Boxed {
    struct Decimal__Class *klass;
    MonitorData *monitor;
    struct Decimal fields;
};

struct DateTime {
    uint64_t _dateData;
};

struct DateTime__Boxed {
    struct DateTime__Class *klass;
    MonitorData *monitor;
    struct DateTime fields;
};

struct Int32__Array {
    struct Int32__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    int32_t vector[32];
};

struct MemberInfo_1 {
    struct MemberInfo_1__Class *klass;
    MonitorData *monitor;
};

struct IntPtr {
    struct Void *m_value;
};

struct IntPtr__Boxed {
    struct IntPtr__Class *klass;
    MonitorData *monitor;
    void *fields;
};

struct RuntimeTypeHandle {
    void *value;
};

struct RuntimeTypeHandle__Boxed {
    struct RuntimeTypeHandle__Class *klass;
    MonitorData *monitor;
    struct RuntimeTypeHandle fields;
};

struct __declspec(align(8)) Type__Fields {
    struct RuntimeTypeHandle _impl;
};

struct Type {
    struct Type__Class *klass;
    MonitorData *monitor;
    struct Type__Fields fields;
};

struct Object__Array {
    struct Object__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Object *vector[32];
};

struct TypeInfo__Fields {
    struct Type__Fields _;
};

struct TypeInfo {
    struct TypeInfo__Class *klass;
    MonitorData *monitor;
    struct TypeInfo__Fields fields;
};

struct RuntimeType__Fields {
    struct TypeInfo__Fields _;
    struct MonoTypeInfo *type_info;
    struct Object *GenericCache;
    struct RuntimeConstructorInfo *m_serializationCtor;
};

struct RuntimeType {
    struct RuntimeType__Class *klass;
    MonitorData *monitor;
    struct RuntimeType__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum class BindingFlags__Enum : int32_t {
    Default = 0x00000000,
    IgnoreCase = 0x00000001,
    DeclaredOnly = 0x00000002,
    Instance = 0x00000004,
    Static = 0x00000008,
    Public = 0x00000010,
    NonPublic = 0x00000020,
    FlattenHierarchy = 0x00000040,
    InvokeMethod = 0x00000100,
    CreateInstance = 0x00000200,
    GetField = 0x00000400,
    SetField = 0x00000800,
    GetProperty = 0x00001000,
    SetProperty = 0x00002000,
    PutDispProperty = 0x00004000,
    PutRefDispProperty = 0x00008000,
    ExactBinding = 0x00010000,
    SuppressChangeType = 0x00020000,
    OptionalParamBinding = 0x00040000,
    IgnoreReturn = 0x01000000,
    DoNotWrapExceptions = 0x02000000,
};

#else
enum BindingFlags__Enum {
    BindingFlags__Enum_Default = 0x00000000,
    BindingFlags__Enum_IgnoreCase = 0x00000001,
    BindingFlags__Enum_DeclaredOnly = 0x00000002,
    BindingFlags__Enum_Instance = 0x00000004,
    BindingFlags__Enum_Static = 0x00000008,
    BindingFlags__Enum_Public = 0x00000010,
    BindingFlags__Enum_NonPublic = 0x00000020,
    BindingFlags__Enum_FlattenHierarchy = 0x00000040,
    BindingFlags__Enum_InvokeMethod = 0x00000100,
    BindingFlags__Enum_CreateInstance = 0x00000200,
    BindingFlags__Enum_GetField = 0x00000400,
    BindingFlags__Enum_SetField = 0x00000800,
    BindingFlags__Enum_GetProperty = 0x00001000,
    BindingFlags__Enum_SetProperty = 0x00002000,
    BindingFlags__Enum_PutDispProperty = 0x00004000,
    BindingFlags__Enum_PutRefDispProperty = 0x00008000,
    BindingFlags__Enum_ExactBinding = 0x00010000,
    BindingFlags__Enum_SuppressChangeType = 0x00020000,
    BindingFlags__Enum_OptionalParamBinding = 0x00040000,
    BindingFlags__Enum_IgnoreReturn = 0x01000000,
    BindingFlags__Enum_DoNotWrapExceptions = 0x02000000,
};

#endif
struct BindingFlags__Enum__Boxed {
    struct BindingFlags__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    BindingFlags__Enum value;
    #else
    int32_t value;
    #endif
};

#if defined(_CPLUSPLUS_)
enum class MemberTypes__Enum : int32_t {
    Constructor = 0x00000001,
    Event = 0x00000002,
    Field = 0x00000004,
    Method = 0x00000008,
    Property = 0x00000010,
    TypeInfo = 0x00000020,
    Custom = 0x00000040,
    NestedType = 0x00000080,
    All = 0x000000bf,
};

#else
enum MemberTypes__Enum {
    MemberTypes__Enum_Constructor = 0x00000001,
    MemberTypes__Enum_Event = 0x00000002,
    MemberTypes__Enum_Field = 0x00000004,
    MemberTypes__Enum_Method = 0x00000008,
    MemberTypes__Enum_Property = 0x00000010,
    MemberTypes__Enum_TypeInfo = 0x00000020,
    MemberTypes__Enum_Custom = 0x00000040,
    MemberTypes__Enum_NestedType = 0x00000080,
    MemberTypes__Enum_All = 0x000000bf,
};

#endif
struct MemberTypes__Enum__Boxed {
    struct MemberTypes__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    MemberTypes__Enum value;
    #else
    int32_t value;
    #endif
};

struct Module {
    struct Module__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Delegate__Fields {
    void *method_ptr;
    void *invoke_impl;
    struct Object *m_target;
    void *method;
    void *delegate_trampoline;
    void *extra_arg;
    void *method_code;
    void *interp_method;
    void *interp_invoke_impl;
    struct MethodInfo_1 *method_info;
    struct MethodInfo_1 *original_method_info;
    struct DelegateData *data;
    bool method_is_virtual;
};

struct Delegate {
    struct Delegate__Class *klass;
    MonitorData *monitor;
    struct Delegate__Fields fields;
};

struct MulticastDelegate__Fields {
    struct Delegate__Fields _;
    struct Delegate__Array *delegates;
};

struct MulticastDelegate {
    struct MulticastDelegate__Class *klass;
    MonitorData *monitor;
    struct MulticastDelegate__Fields fields;
};

struct TypeFilter__Fields {
    struct MulticastDelegate__Fields _;
};

struct TypeFilter {
    struct TypeFilter__Class *klass;
    MonitorData *monitor;
    struct TypeFilter__Fields fields;
};

struct VoidPtr {
    struct VoidPtr__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) SerializationInfo__Fields {
    struct String__Array *m_members;
    struct Object__Array *m_data;
    struct Type__Array *m_types;
    struct Dictionary_2_System_String_System_Int32_ *m_nameToIndex;
    int32_t m_currMember;
    struct IFormatterConverter *m_converter;
    struct String *m_fullTypeName;
    struct String *m_assemName;
    struct Type *objectType;
    bool isFullTypeNameSetExplicit;
    bool isAssemblyNameSetExplicit;
    bool requireSameTokenInPartialTrust;
};

struct SerializationInfo {
    struct SerializationInfo__Class *klass;
    MonitorData *monitor;
    struct SerializationInfo__Fields fields;
};

struct String__Array {
    struct String__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct String *vector[32];
};

struct Type__Array {
    struct Type__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Type *vector[32];
};

struct __declspec(align(8)) Object_1__Fields {
    void *m_CachedPtr;
};

struct Object_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Object_1__StaticFields {
    int32_t OffsetOfInstanceIDInCPlusPlusObject;
};

struct Object_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Object_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Object_1__VTable vtable;
};

struct Object_1 {
    struct Object_1__Class *klass;
    MonitorData *monitor;
    struct Object_1__Fields fields;
};

struct Component__Fields {
    struct Object_1__Fields _;
};

struct Component__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Component__StaticFields {
};

struct Component__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Component__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Component__VTable vtable;
};

struct Component {
    struct Component__Class *klass;
    MonitorData *monitor;
    struct Component__Fields fields;
};

struct Behaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Behaviour__StaticFields {
};

struct Behaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Behaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Behaviour__VTable vtable;
};

struct Behaviour__Fields {
    struct Component__Fields _;
};

struct Behaviour {
    struct Behaviour__Class *klass;
    MonitorData *monitor;
    struct Behaviour__Fields fields;
};

struct MonoBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MonoBehaviour__StaticFields {
};

struct MonoBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MonoBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MonoBehaviour__VTable vtable;
};

struct MonoBehaviour__Fields {
    struct Behaviour__Fields _;
    struct CancellationTokenSource *m_CancellationTokenSource;
};

struct MonoBehaviour {
    struct MonoBehaviour__Class *klass;
    MonitorData *monitor;
    struct MonoBehaviour__Fields fields;
};

struct __declspec(align(8)) List_1_UnityEngine_GameObject___Fields {
    struct GameObject__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UnityEngine_GameObject___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IList_get_Item;
    VirtualInvokeData System_Collections_IList_set_Item;
    VirtualInvokeData System_Collections_IList_Add;
    VirtualInvokeData System_Collections_IList_Contains;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IList_get_IsReadOnly;
    VirtualInvokeData System_Collections_IList_get_IsFixedSize;
    VirtualInvokeData System_Collections_IList_IndexOf;
    VirtualInvokeData System_Collections_IList_Insert;
    VirtualInvokeData System_Collections_IList_Remove;
    VirtualInvokeData RemoveAt_1;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData get_Count_2;
};

struct List_1_UnityEngine_GameObject___StaticFields {
    struct GameObject__Array *s_emptyArray;
};

struct List_1_UnityEngine_GameObject___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UnityEngine_GameObject___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UnityEngine_GameObject___VTable vtable;
};

struct List_1_UnityEngine_GameObject_ {
    struct List_1_UnityEngine_GameObject___Class *klass;
    MonitorData *monitor;
    struct List_1_UnityEngine_GameObject___Fields fields;
};

struct GameObject__Array__VTable {
};

struct GameObject__Array__StaticFields {
};

struct GameObject__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameObject__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameObject__Array__VTable vtable;
};

struct GameObject__Array {
    struct GameObject__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct GameObject *vector[32];
};

enum class HitBox_FeatureFlag__Enum : uint32_t {
    None = 0x00000000,
    KnockBack = 0x00000001,
    AirBorne = 0x00000002,
    ChangeArea = 0x00000008,
    Stiff = 0x00001000,
    Kill = 0x00010000,
    KillDestructible = 0x00080000,
    NoDiffDamage = 0x00020000,
    DamageFreezeFrame = 0x10000000,
    AddBuffForSelf = 0x00000010,
    AddBuffForTarget = 0x00000020,
    RemoveBuffForSelf = 0x00000040,
    RemoveBuffForTarget = 0x00000080,
    All = 0xffffffff,
};

enum class ActorState__Enum : int32_t {
    Null = 0x00000000,
    Spawn = 0x00000001,
    Idle = 0x00000002,
    Action = 0x00000003,
    LostControl = 0x00000004,
    Death = 0x00000005,
    Clear = 0x00000006,
    StandBy = 0x00000007,
    Move = 0x00000008,
    Jump = 0x00000009,
    Dash = 0x0000000a,
    Dodge = 0x0000000b,
    NonAttack = 0x0000000c,
    AttackAnticipation = 0x0000000d,
    AttackActivation = 0x0000000e,
    AttackRecovery = 0x0000000f,
    AttackReload = 0x00000010,
};

enum class DeadType__Enum : int32_t {
    None = 0x00000000,
    DestorySelf = 0x00000001,
    NormalDmgkill = 0x00000002,
    DirectDmgKill = 0x00000003,
    Kill = 0x00000004,
    ClearSelf = 0x00000005,
};

enum class ActorStatus__Enum : int32_t {
    Default = 0x00000000,
    Special = 0x00000001,
};

enum class PlayerActorSearchType__Enum : int32_t {
    None = 0x00000000,
    Melee = 0x00000001,
    Range = 0x00000002,
};

enum class PlayerActorMoveType__Enum : int32_t {
    None = 0x00000000,
    Melee = 0x00000001,
    Range = 0x00000002,
};

enum class Recorders_Types_LevelType__Enum : int32_t {
    StarTower = 0x00000000,
    TravelerDuel = 0x00000001,
    Vampire = 0x00000002,
    Dynamic = 0x00000003,
    Scoreboss = 0x00000004,
};

enum class LostControlType__Enum : uint32_t {
    None = 0x00000000,
    Stiff = 0x00000001,
    KnockBack = 0x00000002,
    AirBorne = 0x00000004,
};

enum class HitBox_HurtAnimType__Enum : int32_t {
    None = 0x00000000,
    Small = 0x00000001,
    Large = 0x00000002,
};

enum class HitBox_Shape__Enum : int32_t {
    Rectangle = 0x00000000,
    Circle = 0x00000001,
    Fan = 0x00000002,
};

enum class HeightClass__Enum : int32_t {
    Low = 0x00000000,
    Medium = 0x00000001,
    High = 0x00000002,
};

enum class ActionKey__Enum : int32_t {
    None = 0x00000000,
    A = 0x00000001,
    B = 0x00000002,
    C = 0x00000003,
    D = 0x00000004,
    Normal = 0x00000005,
    SwitchPreActor = 0x00000006,
    SwitchNextActor = 0x00000007,
    Interactive = 0x00000008,
    SwitchNextTarget = 0x00000009,
    SwitchPreWithUltra = 0x0000000a,
    SwitchNextWithUltra = 0x0000000b,
};

enum class SkillCountdownTiming__Enum : int32_t {
    None = 0x00000000,
    Start = 0x00000001,
    End = 0x00000002,
};

enum class SkillLauncherType__Enum : int32_t {
    Character = 0x00000000,
    Monster = 0x00000001,
    Skill = 0x00000002,
    Effect = 0x00000003,
    FakeActor = 0x00000004,
    DynamicActor = 0x00000005,
};

enum class SkillPhaseFeatureFlag__Enum : int32_t {
    None = 0x00000000,
    Move = 0x00000001,
    Normal = 0x00000002,
    Skill1 = 0x00000004,
    Skill2 = 0x00000008,
    Dodge = 0x00000010,
    Ultimate = 0x00000020,
    CertainSkillId = 0x00000040,
    LoadBullet = 0x00000080,
    All = 0x000000ff,
};

enum class AdventureActor_AimMode__Enum : int32_t {
    Forward = 0x00000000,
    LockDirection = 0x00000001,
    AimAtAttackTarget = 0x00000002,
};

enum class AdventureActor_MovementMode__Enum : int32_t {
    Run = 0x00000000,
    Walk = 0x00000001,
    None = 0x00000002,
};

enum class GameEnum_worldLevelType__Enum : int32_t {
    Mainline = 0x00000001,
    Branchline = 0x00000003,
    RegionBoss = 0x00000004,
    Prologue = 0x00000006,
    PrologueBattleLevel = 0x00000007,
    TravelerDuel = 0x00000008,
    DailyInstance = 0x00000009,
    InfinityTower = 0x0000000a,
    All = 0x0000000b,
    EquipmentInstance = 0x0000000c,
    StarTower = 0x0000000d,
    VampireInstance = 0x0000000e,
    ScoreBoss = 0x0000000f,
    SkillInstance = 0x00000010,
    WeeklyCopies = 0x00000011,
    Dynamic = 0x00000012,
    AutoBalance = 0x00000013,
    ActivityLevels = 0x00000014,
    BrickBreaker = 0x00000015,
    TowerDefense = 0x00000016,
    Tutorial = 0x00000017,
};

enum class GameEnum_elementType__Enum : int32_t {
    INHERIT = 0x00000000,
    WE = 0x00000001,
    FE = 0x00000002,
    SE = 0x00000003,
    AE = 0x00000004,
    LE = 0x00000005,
    DE = 0x00000006,
    NONE = 0x00000007,
};

enum class GameEnum_specialAttributeType__Enum : int32_t {
    NONE = 0x00000000,
    HP = 0x00000001,
    TOUGHNESS_V = 0x00000002,
    SHIELD_V = 0x00000003,
    ENERGY = 0x00000004,
    MAX = 0x00000005,
};

enum class GameEnum_effectAttributeType__Enum : int32_t {
    NONE = 0x00000000,
    ATK = 0x00000001,
    DEF = 0x00000002,
    MAXHP = 0x00000003,
    HITRATE = 0x00000004,
    EVD = 0x00000005,
    CRITRATE = 0x00000006,
    CRITRESIST = 0x00000007,
    CRITPOWER_P = 0x00000008,
    PENETRATE = 0x00000009,
    DEF_IGNORE = 0x0000000a,
    WER = 0x0000000b,
    FER = 0x0000000c,
    SER = 0x0000000d,
    AER = 0x0000000e,
    LER = 0x0000000f,
    DER = 0x00000010,
    WEE = 0x00000011,
    FEE = 0x00000012,
    SEE = 0x00000013,
    AEE = 0x00000014,
    LEE = 0x00000015,
    DEE = 0x00000016,
    WEP = 0x00000017,
    FEP = 0x00000018,
    SEP = 0x00000019,
    AEP = 0x0000001a,
    LEP = 0x0000001b,
    DEP = 0x0000001c,
    WEI = 0x0000001d,
    FEI = 0x0000001e,
    SEI = 0x0000001f,
    AEI = 0x00000020,
    LEI = 0x00000021,
    DEI = 0x00000022,
    WEERCD = 0x00000023,
    FEERCD = 0x00000024,
    SEERCD = 0x00000025,
    AEERCD = 0x00000026,
    LEERCD = 0x00000027,
    DEERCD = 0x00000028,
    WEIGHT = 0x00000029,
    TOUGHNESS_MAX = 0x0000002a,
    TOUGHNESS_DAMAGE_ADJUST = 0x0000002b,
    SHIELD_MAX = 0x0000002c,
    MOVESPEED = 0x0000002e,
    ATKSPD_P = 0x0000002f,
    INTENSITY = 0x00000030,
    GENDMG = 0x00000031,
    DMGPLUS = 0x00000032,
    FINALDMG = 0x00000033,
    FINALDMGPLUS = 0x00000034,
    GENDMGRCD = 0x00000035,
    DMGPLUSRCD = 0x00000036,
    SUPPRESS = 0x00000037,
    NORMALDMG = 0x00000038,
    SKILLDMG = 0x00000039,
    ULTRADMG = 0x0000003a,
    OTHERDMG = 0x0000003b,
    RCDNORMALDMG = 0x0000003c,
    RCDSKILLDMG = 0x0000003d,
    RCDULTRADMG = 0x0000003e,
    RCDOTHERDMG = 0x0000003f,
    MARKDMG = 0x00000040,
    RCDMARKDMG = 0x00000041,
    SUMMONDMG = 0x00000042,
    RCDSUMMONDMG = 0x00000043,
    PROJECTILEDMG = 0x00000044,
    RCDPROJECTILEDMG = 0x00000045,
    NORMALCRITRATE = 0x00000046,
    SKILLCRITRATE = 0x00000047,
    ULTRACRITRATE = 0x00000048,
    MARKCRITRATE = 0x00000049,
    SUMMONCRITRATE = 0x0000004a,
    PROJECTILECRITRATE = 0x0000004b,
    OTHERCRITRATE = 0x0000004c,
    NORMALCRITPOWER = 0x0000004d,
    SKILLCRITPOWER = 0x0000004e,
    ULTRACRITPOWER = 0x0000004f,
    MARKCRITPOWER = 0x00000050,
    SUMMONCRITPOWER = 0x00000051,
    PROJECTILECRITPOWER = 0x00000052,
    OTHERCRITPOWER = 0x00000053,
    ENERGY_MAX = 0x00000054,
    SKILL_INTENSITY = 0x00000055,
    TOUGHNESS_BROKEN_DMG = 0x00000056,
    ADD_SHIELD_STRENGTHEN = 0x00000057,
    BE_ADD_SHIELD_STRENGTHEN = 0x00000058,
    MAX = 0x00000059,
};

enum class DamageType__Enum : int32_t {
    None = 0x00000000,
    Melee = 0x00000001,
    Range = 0x00000002,
    DOT = 0x00000003,
    Trap = 0x00000004,
    Area = 0x00000005,
};

enum class AimType__Enum : int32_t {
    Default = 0x00000000,
    Forward = 0x00000001,
    Position = 0x00000002,
    Target = 0x00000003,
};

enum class BulletFinishReason__Enum : int32_t {
    Timeout = 0x00000000,
    HitActor = 0x00000001,
    HitObstacle = 0x00000002,
    HitDestructibleObstacle = 0x00000003,
    HitShield = 0x00000004,
    ByFeature = 0x00000005,
    Kill = 0x00000006,
};

enum class ButtonState__Enum : uint8_t {
    None = 0x00,
    Press = 0x01,
    Click = 0x02,
    Hold = 0x03,
    Cancel = 0x04,
};

enum class DeterministicColliderShape__Enum : int32_t {
    None = 0x00000000,
    Circle = 0x00000001,
    Rect = 0x00000002,
};

enum class AdventureLevelState__Enum : int32_t {
    Init = 0x00000000,
    LevelStart = 0x00000001,
    LevelEnd = 0x00000002,
    BattleEnd = 0x00000003,
    Finish = 0x00000004,
};

enum class GameEnum_fixedRoguelikePortDir__Enum : int32_t {
    Left = 0x00000001,
    Right = 0x00000002,
};

enum class Weather__Enum : int32_t {
    ClearDay = 0x00000001,
    RainyDay = 0x00000002,
};

enum class TimeOfDay__Enum : int32_t {
    Daytime = 0x00000001,
    Sunset = 0x00000002,
    Night = 0x00000004,
};

enum class CinemachineBlendDefinition_Style__Enum : int32_t {
    Cut = 0x00000000,
    EaseInOut = 0x00000001,
    EaseIn = 0x00000002,
    EaseOut = 0x00000003,
    HardIn = 0x00000004,
    HardOut = 0x00000005,
    Linear = 0x00000006,
    Custom = 0x00000007,
};

enum class AdventureModuleController_SceneLimitZoneType__Enum : int32_t {
    _1024x1024 = 0x00000000,
    _256x256 = 0x00000001,
};

struct Rot {
    struct FP s;
    struct FP c;
};

struct Transform {
    struct TSVector2 p;
    struct Rot q;
};

struct LogicMonoComponent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ActiveSelf;
    VirtualInvokeData set_ActiveSelf;
    VirtualInvokeData SetEntity;
    VirtualInvokeData Init;
    VirtualInvokeData OnActive;
    VirtualInvokeData OnDeactive;
    VirtualInvokeData Shutdown;
    VirtualInvokeData OnActive_1;
    VirtualInvokeData OnDeactive_1;
    VirtualInvokeData OnInit;
    VirtualInvokeData OnShutdown;
};

struct LogicMonoComponent__StaticFields {
};

struct LogicMonoComponent__Fields {
    struct MonoBehaviour__Fields _;
    struct LogicEntity *_Entity_k__BackingField;
};

struct LogicMonoComponent {
    struct LogicMonoComponent__Class *klass;
    MonitorData *monitor;
    struct LogicMonoComponent__Fields fields;
};

struct __declspec(align(8)) LogicComponent__Fields {
    struct LogicEntity *_Entity_k__BackingField;
    bool active;
};

struct LogicComponent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ActiveSelf;
    VirtualInvokeData set_ActiveSelf;
    VirtualInvokeData SetEntity;
    VirtualInvokeData Init;
    VirtualInvokeData OnActive;
    VirtualInvokeData OnDeactive;
    VirtualInvokeData Shutdown;
    VirtualInvokeData OnActive_1;
    VirtualInvokeData OnDeactive_1;
    VirtualInvokeData OnInit;
    VirtualInvokeData OnShutdown;
};

struct LogicComponent__StaticFields {
};

struct LogicComponent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LogicComponent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LogicComponent__VTable vtable;
};

struct LogicComponent {
    struct LogicComponent__Class *klass;
    MonitorData *monitor;
    struct LogicComponent__Fields fields;
};

struct AdventureLevelTeleporter_NextLevelData {
    bool enterSettlementState;
    bool isCurScene;
    struct String *bornID;
    #if defined(_CPLUSPLUS_)
    GameEnum_fixedRoguelikePortDir__Enum enterExitPortDirection;
    #else
    int32_t enterExitPortDirection;
    #endif
    bool levelSuccess;
    float fadeTime;
    struct String *videoName;
};

struct List_1_LogicEntity___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IList_get_Item;
    VirtualInvokeData System_Collections_IList_set_Item;
    VirtualInvokeData System_Collections_IList_Add;
    VirtualInvokeData System_Collections_IList_Contains;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IList_get_IsReadOnly;
    VirtualInvokeData System_Collections_IList_get_IsFixedSize;
    VirtualInvokeData System_Collections_IList_IndexOf;
    VirtualInvokeData System_Collections_IList_Insert;
    VirtualInvokeData System_Collections_IList_Remove;
    VirtualInvokeData RemoveAt_1;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData get_Count_2;
};

struct List_1_LogicEntity___StaticFields {
    struct LogicEntity__Array *s_emptyArray;
};

struct List_1_LogicEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_LogicEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_LogicEntity___VTable vtable;
};

struct __declspec(align(8)) List_1_LogicEntity___Fields {
    struct LogicEntity__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_LogicEntity_ {
    struct List_1_LogicEntity___Class *klass;
    MonitorData *monitor;
    struct List_1_LogicEntity___Fields fields;
};

struct LogicEntity__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_ILogicComponent_ *logicComponents;
    struct LogicEntity *_Parent_k__BackingField;
    struct TrueSyncTransform *_tsTransform_k__BackingField;
    struct ILogicComponentVisualUpdate__Array *visualUpdateComponents;
    struct ILogicComponentUpdate__Array *updateComponents;
    bool initialised;
    int64_t _Id_k__BackingField;
    bool _ignoreGlobalLogicTimeScale_k__BackingField;
    struct FP _logicTimeScale_k__BackingField;
    struct FP _LogicDeltaTime_k__BackingField;
    struct FP _LogicTime_k__BackingField;
    int32_t _logicUpdatePausedRC;
    bool _callLogicStartOnce;
    bool _logicUpdateEnabled_k__BackingField;
    bool useParentTimeScale;
    struct AdventureTimeControlManager *_logicTimeControlManager;
    struct LogManager_Logger *_logger;
};

struct LogicEntity__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Id;
    VirtualInvokeData get_ActiveSelf;
    VirtualInvokeData AddLogicComponent;
    VirtualInvokeData GetLogicComponent;
    VirtualInvokeData GetLogicComponent_1;
    VirtualInvokeData AddOrGetLogicComponent;
    VirtualInvokeData AddMonoLogicComponent;
    VirtualInvokeData AddOrGetMonoLogicComponent;
    VirtualInvokeData IsCoroutineAlive;
    VirtualInvokeData IsCoroutineRunning;
    VirtualInvokeData GetCoroutineDeltaTime;
    VirtualInvokeData OnActive;
    VirtualInvokeData OnDeactive;
    VirtualInvokeData OnInit;
    VirtualInvokeData OnShutdown;
    VirtualInvokeData OnLogicUpdateEnabled;
    VirtualInvokeData OnLogicUpdateDisabled;
    VirtualInvokeData OnLogicUpdatePaused;
    VirtualInvokeData OnLogicUpdateResumed;
    VirtualInvokeData OnLogicStart;
    VirtualInvokeData OnLogicUpdate;
    VirtualInvokeData OnLogicTimeScaleChanged;
    VirtualInvokeData OnVisualUpdate;
};

struct LogicEntity__StaticFields {
    struct Type *visualUpdateType;
    struct Type *updateType;
};

struct LogicEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LogicEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LogicEntity__VTable vtable;
};

struct LogicEntity {
    struct LogicEntity__Class *klass;
    MonitorData *monitor;
    struct LogicEntity__Fields fields;
};

struct __declspec(align(8)) AttributeList__Fields {
    struct AttributeList_ValueChangedHandle *ValueChangedEvent;
    struct AttributeEntry__Array *entries;
    struct Dictionary_2_GameEnum_effectAttributeType_TrueSync_iFP_ *assignmentValueDict;
};

struct AttributeList__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AttributeList__StaticFields {
    struct AttributeList_Limit__Array *limits;
};

struct AttributeList__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttributeList__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttributeList__VTable vtable;
};

struct AttributeList {
    struct AttributeList__Class *klass;
    MonitorData *monitor;
    struct AttributeList__Fields fields;
};

struct __declspec(align(8)) SpecialAttributeList__Fields {
    struct SpecialAttributeList_ValueChangedHandle *ValueChangedEvent;
    struct SpecialAttributeEntry__Array *entries;
};

struct SpecialAttributeList__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
};

struct SpecialAttributeList__StaticFields {
};

struct SpecialAttributeList__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpecialAttributeList__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpecialAttributeList__VTable vtable;
};

struct SpecialAttributeList {
    struct SpecialAttributeList__Class *klass;
    MonitorData *monitor;
    struct SpecialAttributeList__Fields fields;
};

struct ActorHealthInfo__Fields {
    struct LogicComponent__Fields _;
    struct ActorHealthInfo_HpChangedHandle *HpChangedEvent;
    struct ActorHealthInfo_AliveChangedHandle *AliveChangedEvent;
    struct AttributeList *attributeList;
    struct SpecialAttributeList *specialAttributeList;
    bool _isAlive;
};

struct ActorHealthInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ActiveSelf;
    VirtualInvokeData set_ActiveSelf;
    VirtualInvokeData SetEntity;
    VirtualInvokeData Init;
    VirtualInvokeData OnActive;
    VirtualInvokeData OnDeactive;
    VirtualInvokeData Shutdown;
    VirtualInvokeData OnActive_1;
    VirtualInvokeData OnDeactive_1;
    VirtualInvokeData OnInit;
    VirtualInvokeData OnShutdown;
};

struct ActorHealthInfo__StaticFields {
};

struct ActorHealthInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ActorHealthInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ActorHealthInfo__VTable vtable;
};

struct ActorHealthInfo {
    struct ActorHealthInfo__Class *klass;
    MonitorData *monitor;
    struct ActorHealthInfo__Fields fields;
};

struct __declspec(align(8)) ActorAdditionalAttrInfo__Fields {
    struct AttributeList *_attributeList_k__BackingField;
    bool _forceCrit_k__BackingField;
    bool _forceMissDamage_k__BackingField;
};

struct ActorAdditionalAttrInfo {
    struct ActorAdditionalAttrInfo__Class *klass;
    MonitorData *monitor;
    struct ActorAdditionalAttrInfo__Fields fields;
};

struct AdventureActor__Fields {
    struct LogicEntity__Fields _;
    struct List_1_DeterministicRaycastHit_ *_tempDeterministicRaycastHits;
    struct AttributeList *attributeList;
    struct SpecialAttributeList *specialAttributeList;
    struct StateAttributeList *stateAttributeList;
    struct ActorInfo *actorInfo;
    struct ActorElementInfo *actorElementInfo;
    struct ActorHealthInfo *actorHealthInfo;
    struct ActorScaleInfo *actorScaleInfo;
    struct ActorSearchTarget *actorSearchTargetInfo;
    struct ShootBehaviour *shootBehaviour;
    struct AmmoInfo *ammoInfo;
    struct ActorSkillManage *actorSkillManage;
    struct ActorEffectManage *effectManage;
    struct BuffCom *buffComponent;
    struct DeterministicMovementAgent *movAgent;
    struct Animator *animator;
    struct AnimationSlotConfigComponent *slotConfig;
    struct AnimatorReactionBinder *animatorReactionBinder;
    struct ComboGroup *comboGroup;
    struct AdventureSelfFXHandler *selfFXHandler;
    struct Collider *collider;
    struct DeterministicCollider *_dtCollider_k__BackingField;
    struct LogicVariable *logicVariable;
    struct VisualSmooth *_smooth;
    struct ActorShield *actorShield;
    int32_t _dataID_k__BackingField;
    struct String *_attrID_k__BackingField;
    int32_t _attrTempleteID_k__BackingField;
    int32_t _skinID_k__BackingField;
    bool isSyncActived;
    struct String *GroupId;
    int32_t _rowOfScene_k__BackingField;
    int32_t _columnOfScene_k__BackingField;
    bool _logicPaused;
    struct List_1_LogicEntity_ *_enterColliderEntities;
    bool _logicInitialized_k__BackingField;
    struct HybirdAnimatorController *_animatorController_k__BackingField;
    struct RuntimeAnimatorController *_currentRuntimeAnimatorController_k__BackingField;
    struct RuntimeAnimatorController *_originRuntimeAnimatorController;
    int32_t _animationPauseRC;
    bool useSpecialLostControlClip;
    float specialLostControlStartClipLen;
    float specialLostControlEndClipLen;
    struct Tween *_nrootShakeTween;
    struct Vector2 _nrootShakeShifting;
    struct BaseCloth__Array *_dynamicBones_k__BackingField;
    struct Single__Array *_originDynamicBonesBlendWeight;
    struct Coroutine__Array *_dynamicBonesBlendFadeCoroutines;
    struct ActorAttackFSM *_attackFSM;
    struct ComboInputBuffer *_comboInputBuffer;
    struct String *_actionTag;
    int32_t lastComboPhaseSwitchFrameCount;
    struct ComboAttack *activeComboAttack;
    struct Dictionary_2_System_Int64_TrueSync_FP_ *_monsterWeaponHitedActors;
    bool enableChangeCurrentAttackTarget;
    struct LogicEntity *_attackTarget;
    struct LogicEntity *_currentAttackTarget_k__BackingField;
    bool isChangeAimLockedTargetWhenCurrentAttackTargetInValid;
    struct TSVector2 _lastAttackTargetDeterministicPosition;
    int64_t monsterTargetId;
    struct LogicEntity *_monsterTarget;
    bool comboTriggerExitTime;
    struct Action_2_AdventureActor_Combo_Event_ *_onAttackCustomEvent;
    struct Action_1_AdventureActor_ *_onAttackInterrupted;
    struct Action_2_AdventureActor_Combo_Phase_ *_onBeforeAttackComboPhaseChange;
    struct Action_2_AdventureActor_Combo_Phase_ *_onAfterAttackComboPhaseChange;
    struct Action_3_AdventureActor_Int32_Combo_FeaturePhase_ *_onFeaturePhaseActive;
    struct Action_1_AdventureActor_ *_onAttackComboLoop;
    struct Action_1_AdventureActor_ *OnSendSkillTakeEffect;
    struct Action_2_AdventureActor_Boolean_ *_onSendSkillAllowOtherSkillExecute;
    struct HitBox *_hitBox_k__BackingField;
    struct Dictionary_2_System_Int64_TrueSync_FP_ *_hitedActors;
    struct Action *OnDeadImmunityHandle;
    struct Func_2_GameEnum_stateAttributeType_Boolean_ *OnBuffHandle;
    struct Func_2_GameEnum_stateAttributeType_Boolean_ *OnDamageHandle;
    struct Func_2_GameEnum_stateAttributeType_Boolean_ *OnBeHitHandle;
    struct Func_2_GameEnum_stateAttributeType_Boolean_ *OnSpecialControlHandle;
    struct Func_2_GameEnum_stateAttributeType_Boolean_ *OnStrongControlHandle;
    struct Func_2_GameEnum_stateAttributeType_Boolean_ *OnWeekControlHandle;
    bool onHurtEffectCD;
    struct AkAnimatorAudio *_akAudio;
    bool onHurtAudioCD;
    struct AdventureActor *_lastAttackMonster_k__BackingField;
    struct String *specialHurtFx;
    bool isEnterLostCtr;
    #if defined(_CPLUSPLUS_)
    LostControlType__Enum lastCtrType;
    #else
    uint32_t lastCtrType;
    #endif
    #if defined(_CPLUSPLUS_)
    LostControlType__Enum curCtrType;
    #else
    uint32_t curCtrType;
    #endif
    struct List_1_System_Int32_ *immuneCertainDamageIds;
    struct Recorder_Types_Damage *dmgData;
    struct List_1_TrueSync_CoroutineNode_ *movableFCoroutineNodes;
    struct List_1_AdventureFXPlayer_ *playFxs;
    struct EventDispatcher *_dispatcher;
    struct ActorMovementFSM *_movementFSM;
    struct FP _velocitySpeed_k__BackingField;
    struct FP _currentRotateSpeed;
    struct FP targetRotation;
    struct FP currentRotTime;
    struct FP rotationDuration;
    struct TSVector2 _velocityDirection;
    struct TSVector2 _forceChangeDirection_k__BackingField;
    bool forbiddenBehitRot;
    struct TSVector2 _externalForce_k__BackingField;
    bool haveExternalForce;
    #if defined(_CPLUSPLUS_)
    AdventureActor_MovementMode__Enum _movementMode;
    #else
    int32_t _movementMode;
    #endif
    bool specialDodgeMode;
    bool _crossObstacleMode;
    struct FP crossObstacleModeSpeedMultiply;
    struct List_1_DeterministicCollider_ *_checkTargetList_PerfectDodge;
    struct List_1_DeterministicCollider_ *_checkHitList_PerfectDodge;
    struct CoroutineNode *_rotateCoroutine;
    struct Action *_onClear;
    bool isRotate;
    bool isRotateCloseTarget;
    bool aimWithStartAnim;
    #if defined(_CPLUSPLUS_)
    AdventureActor_AimMode__Enum _aimMode;
    #else
    int32_t _aimMode;
    #endif
    int32_t curAimIndex;
    struct TSVector2 targetDir;
    struct FP aimAngleLimit;
    struct NNConstraint *_reachableConstraint;
    struct FP _speedTransitionTimer;
    struct CoroutineNode *speedTransition;
    struct FP _accelerationScaleValue;
    struct FP _rotationSpeedScaleValue;
    bool _movementAgentEnabled_k__BackingField;
    int32_t _movementAgentPauseRC;
    int32_t _movementAvoidancePauseRC;
    int32_t _movementAvoidanceLockRC;
    int32_t _movementBlockPauseRC;
    struct FP _orginMovementBlockPriority;
    int32_t _lostControlRC;
    bool _isInteractive_k__BackingField;
    bool _canPerfectDodge_k__BackingField;
    bool InPerfectDodge;
    int32_t _deadImmunityRC;
    bool _isHpLocked_k__BackingField;
    int32_t _lockedHp_k__BackingField;
    bool forceControl;
    int32_t _disableMoveRC;
    int32_t _disableMoveAgentCanMoveRC;
    int32_t _disableRotateRC;
    int32_t _disableCastDodgeRC;
    int32_t _disableCastNormalRC;
    int32_t _disableCastSkillRC;
    int32_t _disableCastUltraRC;
    int32_t _hideMonsterHpAndAttackHintRC;
    struct FP _stiffDuration;
    bool isStiff;
    struct CoroutineNode *_knockbackCoroutine;
    struct TSVector2 _knockBackDirection;
    struct FP _knockBackSpeed;
    struct FP _knockBackAcceleration;
    struct CoroutineNode *_airBorneCoroutine;
    struct FP _airBorneSpeed;
    struct FP _actorOriginalPositionY;
    struct Dictionary_2_StateEnum_AdventureBuffFXHandler_ *dicBuffFx;
    struct Action *_scnenMoveInterruptCallBack;
    struct CoroutineNode *_sceneMoveCor;
    bool _isWitchTimeOwner_k__BackingField;
    bool _isWitchTimeAttacker_k__BackingField;
    struct AdventureTimeControlHandler *_witchtimeTimeControlHandler;
    struct AdventureActor *_witchtimeAttackTarget;
    struct List_1_AdventureActor_MoveFeatureData_ *currentMoveFeatureDataLs;
    struct List_1_AdventureActor_MoveFeatureData_ *newMoveFeatureDatas;
    struct AdventureActor_MoveFeatureData *currentMoveData;
    struct FP moveDuration;
    int32_t framIndex;
    struct FP acceleration;
    struct FP _enterStunTime;
    bool _isStunSpecialLostControlFinish;
    struct CoroutineNode *_stunSpecialLostControlNode;
    float currentDuration;
    struct FP totalDuration;
    struct CoroutineNode *_charmMoveCoroutine;
    struct TSVector2 _charmDir;
    struct CoroutineNode *_terrorMoveCoroutine;
    struct TSVector2 _terrorDir;
    struct AdventureActor *tauntFromActor;
    struct DeterministicShape _shape;
    struct TSVector2 randomPos;
    struct CoroutineNode *_randomMoveCoroutine;
    bool complete;
    int32_t waitC;
    #if defined(_CPLUSPLUS_)
    ActorState__Enum _state;
    #else
    int32_t _state;
    #endif
    struct Action_1_Boolean_ *DyingStateChanged;
    bool _inDying;
    struct ActorPrimeFSM *_primeFSM;
    struct ActorNullState *_nullState;
    struct ActorSpawnState *_spawnState;
    struct ActorIdleState *_idleState;
    struct ActorActionState *_actionState;
    struct ActorLostControlState *_lostControlState;
    struct ActorDeathState *_deathState;
    struct ActorClearState *_clearState;
    struct String *_actionAIPath;
    struct String *_spawnAIPath;
    struct String *_idleAIPath;
    struct String *_lostcontrolAIPath;
    struct String *_deathAIPath;
    struct String *_parallelAIPath;
    struct String *_clearAIPath;
    struct String *_trapActionAIPath;
    struct String *_trapSpawnAIPath;
    struct String *_trapIdleAIPath;
    struct String *_trapLostcontrolAIPath;
    struct String *_trapDeathAIPath;
    struct String *_trapParallelAIPath;
    struct String *_trapClearAIPath;
    struct String *_comboGroupPath;
    struct AIAdapter *_parallelAI;
    bool _isBorn_k__BackingField;
    struct CoroutineNode *_bornCoroutine;
    struct CoroutineNode *_spwanShowCoroutine;
    bool _makeThreatAlert;
    #if defined(_CPLUSPLUS_)
    ActorState__Enum _makeThreatAlertPrevState;
    #else
    int32_t _makeThreatAlertPrevState;
    #endif
    bool _isDead_k__BackingField;
    bool _isDeclareDead_k__BackingField;
    struct LogicEntity *killer;
    struct IList_1_System_Int32_ *_damageTag;
    struct HitBox *killerHitBox;
    int32_t _uniqueAttackId;
    #if defined(_CPLUSPLUS_)
    DeadType__Enum _deadType;
    #else
    int32_t _deadType;
    #endif
    struct Dictionary_2_System_Int32_System_Int32_ *tags;
    struct Dictionary_2_System_Int32_List_1_System_Int32_ *elementMarkTags;
    struct Dictionary_2_System_Int32_TrueSync_FP_ *_hitImmunitys;
    struct AdventureActor_ShowChangedHandle *ShowChangedEvent;
    struct InGameActorVisualControlComponent *_visualControl_k__BackingField;
    int32_t _hideRC;
    int32_t _transparentRC;
    float _transparencyFrom;
    float _transparencyTo;
    int32_t _transparentFadeMaterialID;
    struct Coroutine *_transparentFadeCoroutine;
    struct Coroutine *_transparentFadeSwichActorCoroutine;
    float _currentTransparency_k__BackingField;
    int32_t _hurtAnimToggleRC;
    int32_t _checkBrokenLineBulletRC;
    struct FP checkBrokenLineBulletRadius;
    struct List_1_AdventureWeapon_ *_equipedWeapons_k__BackingField;
    struct List_1_AdventureRotateWeapon_ *wepons;
    struct FP fixedWeaponTime;
    bool iFixWeaponDuration;
};
struct AdventureActor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Id;
    VirtualInvokeData get_ActiveSelf;
    VirtualInvokeData AddLogicComponent;
    VirtualInvokeData GetLogicComponent;
    VirtualInvokeData GetLogicComponent_1;
    VirtualInvokeData AddOrGetLogicComponent;
    VirtualInvokeData AddMonoLogicComponent;
    VirtualInvokeData AddOrGetMonoLogicComponent;
    VirtualInvokeData IsCoroutineAlive;
    VirtualInvokeData IsCoroutineRunning;
    VirtualInvokeData GetCoroutineDeltaTime;
    VirtualInvokeData OnActive;
    VirtualInvokeData OnDeactive;
    VirtualInvokeData OnInit;
    VirtualInvokeData OnShutdown;
    VirtualInvokeData OnLogicUpdateEnabled;
    VirtualInvokeData OnLogicUpdateDisabled;
    VirtualInvokeData OnLogicUpdatePaused;
    VirtualInvokeData OnLogicUpdateResumed;
    VirtualInvokeData OnLogicStart;
    VirtualInvokeData OnLogicUpdate;
    VirtualInvokeData OnLogicTimeScaleChanged;
    VirtualInvokeData OnVisualUpdate;
    VirtualInvokeData QueryHitBoxContextTime;
    VirtualInvokeData QueryHitBoxContextPosition;
    VirtualInvokeData QueryHitBoxContextDirection;
    VirtualInvokeData QueryActorHitedTimeout;
    VirtualInvokeData SetActorHitedTime;
    VirtualInvokeData CheckHitable;
    VirtualInvokeData OnHitActor;
    VirtualInvokeData OnHitShield;
    VirtualInvokeData OnHitObstacle;
    VirtualInvokeData OnHitDestructibleObstacle;
    VirtualInvokeData OnDeterministicCollisionEnter;
    VirtualInvokeData OnDeterministicCollisionStay;
    VirtualInvokeData OnDeterministicCollisionExit;
    VirtualInvokeData OnStateTransformation;
    VirtualInvokeData OnStateMachineTransformation;
    VirtualInvokeData LevelStart;
    VirtualInvokeData LevelEnd;
    VirtualInvokeData OnHpChangedEvent;
    VirtualInvokeData OnAliveChangedEvent;
    VirtualInvokeData OnShieldChangedEvent;
    VirtualInvokeData OnShow;
    VirtualInvokeData OnEnterDeterministicCollision;
    VirtualInvokeData OnStayDeterministicCollision;
    VirtualInvokeData OnExitDeterministicCollision;
    VirtualInvokeData PlaySound;
    VirtualInvokeData LoadAnimations;
    VirtualInvokeData OnPlayIdleAnim;
    VirtualInvokeData CurrentStepCanbeHurt;
    VirtualInvokeData InitializeFXControl;
    VirtualInvokeData PlayHurtCueEffect;
    VirtualInvokeData InitializeMovementBehaviour;
    VirtualInvokeData UpdateNovementAgentAvoidanceBlockSetting;
    VirtualInvokeData SetupPrimeFSM;
    VirtualInvokeData Death;
    VirtualInvokeData InitializeVisual;
    VirtualInvokeData ReleaseVisual;
    VirtualInvokeData LoadModel;
    VirtualInvokeData SetupVisualComponents;
};

struct AdventureActor__StaticFields {
    int32_t simplePlayerTag;
    struct LogicEntity *fromEntityTemp;
    struct AdventureWeapon *fromWeaponTemp;
    struct AreaEffectEntity *fromAreaTemp;
    struct AdventureActor *fromActorTemp;
    struct AdventureActor *toActor;
    struct ActorAdditionalAttrInfo *fromAdditionalAttrInfo;
    struct ActorAdditionalAttrInfo *toAdditionalAttrInfo;
    struct HashSet_1_GameEnum_elementType_ *toWeakElementTemp;
    #if defined(_CPLUSPLUS_)
    GameEnum_elementType__Enum toElementTypeTemp;
    #else
    int32_t toElementTypeTemp;
    #endif
    struct GameObject *hurtEffectPrefabTemp;
    struct HitBox *hitboxTemp;
    bool isHittedEffectScaleTemp;
    int32_t uniqueAttackIdTemp;
    #if defined(_CPLUSPLUS_)
    DamageType__Enum damageTypeTemp;
    #else
    int32_t damageTypeTemp;
    #endif
    int32_t onceAttackTargetCountTemp;
    int32_t hitDamageIdTemp;
    struct HitDamage *hitDamageConfigTemp;
    int32_t skillLevelTemp;
    bool showHudTemp;
    int64_t areaEffectIdTemp;
    bool effectIgnoreTimeScaleTemp;
    struct FP knockBackDistancePercentTemp;
    int32_t hudColorIndexTemp;
    bool isPlayShakeAnim;
    struct List_1_GameEnum_stateAttributeType_ *strongControlStatusEffects;
    struct List_1_GameEnum_stateAttributeType_ *weakControlStatusEffects;
};

struct AdventureActor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AdventureActor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AdventureActor__VTable vtable;
};

struct AdventureActor {
    struct AdventureActor__Class *klass;
    MonitorData *monitor;
    struct AdventureActor__Fields fields;
};

struct __declspec(align(8)) List_1_PlayerAdventureActor___Fields {
    struct PlayerAdventureActor__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayerAdventureActor___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IList_get_Item;
    VirtualInvokeData System_Collections_IList_set_Item;
    VirtualInvokeData System_Collections_IList_Add;
    VirtualInvokeData System_Collections_IList_Contains;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IList_get_IsReadOnly;
    VirtualInvokeData System_Collections_IList_get_IsFixedSize;
    VirtualInvokeData System_Collections_IList_IndexOf;
    VirtualInvokeData System_Collections_IList_Insert;
    VirtualInvokeData System_Collections_IList_Remove;
    VirtualInvokeData RemoveAt_1;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData get_Count_2;
};

struct List_1_PlayerAdventureActor___StaticFields {
    struct PlayerAdventureActor__Array *s_emptyArray;
};

struct List_1_PlayerAdventureActor___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayerAdventureActor___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayerAdventureActor___VTable vtable;
};

struct List_1_PlayerAdventureActor_ {
    struct List_1_PlayerAdventureActor___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayerAdventureActor___Fields fields;
};

struct IDictionary_2_System_Int32_System_Byte___VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData get_Keys;
    VirtualInvokeData get_Values;
    VirtualInvokeData ContainsKey;
    VirtualInvokeData Add;
    VirtualInvokeData Remove;
    VirtualInvokeData TryGetValue;
};

struct IDictionary_2_System_Int32_System_Byte___StaticFields {
};

struct IDictionary_2_System_Int32_System_Byte___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDictionary_2_System_Int32_System_Byte___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDictionary_2_System_Int32_System_Byte___VTable vtable;
};

struct IDictionary_2_System_Int32_System_Byte_ {
    struct IDictionary_2_System_Int32_System_Byte___Class *klass;
    MonitorData *monitor;
};

struct IList_1_System_Int32___VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
};

struct IList_1_System_Int32___StaticFields {
};

struct IList_1_System_Int32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IList_1_System_Int32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IList_1_System_Int32___VTable vtable;
};

struct IList_1_System_Int32_ {
    struct IList_1_System_Int32___Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int64_AdventureActor_ {
    int32_t hashCode;
    int32_t next;
    int64_t key;
    struct AdventureActor *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int64_AdventureActor___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int64_AdventureActor___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int64_AdventureActor_ fields;
};

struct __declspec(align(8)) Dictionary_2_System_Int64_AdventureActor___Fields {
    struct Int32__Array *_buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int64_AdventureActor___Array *_entries;
    int32_t _count;
    int32_t _freeList;
    int32_t _freeCount;
    int32_t _version;
    struct IEqualityComparer_1_System_Int64_ *_comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int64_AdventureActor_ *_keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int64_AdventureActor_ *_values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int64_AdventureActor___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
    VirtualInvokeData ContainsKey;
    VirtualInvokeData Add;
    VirtualInvokeData Remove;
    VirtualInvokeData TryGetValue;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
    VirtualInvokeData Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_get_Item;
    VirtualInvokeData System_Collections_IDictionary_set_Item;
    VirtualInvokeData System_Collections_IDictionary_get_Keys;
    VirtualInvokeData System_Collections_IDictionary_get_Values;
    VirtualInvokeData System_Collections_IDictionary_Contains;
    VirtualInvokeData System_Collections_IDictionary_Add;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
    VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
    VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_Remove;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData ContainsKey_1;
    VirtualInvokeData TryGetValue_1;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
    VirtualInvokeData get_Count_2;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData OnDeserialization;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData OnDeserialization_1;
};

struct Dictionary_2_System_Int64_AdventureActor___StaticFields {
};

struct Dictionary_2_System_Int64_AdventureActor___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_Int64_AdventureActor___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_Int64_AdventureActor___VTable vtable;
};

struct Dictionary_2_System_Int64_AdventureActor_ {
    struct Dictionary_2_System_Int64_AdventureActor___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int64_AdventureActor___Fields fields;
};

struct PlayerAdventureActor__Fields {
    struct AdventureActor__Fields _;
    struct AdventureLevelObjPoolMgr_PoolObj *spawnPoolObj;
    struct PlayerSkillCd *playerSkillCd;
    struct PlayerAIInfo *playerAIInfo;
    bool isAssist;
    bool isAssistAIFinish;
    struct AdventureActor *assistWitchTimeTarget;
    bool isResident;
    bool isResidentAssist;
    bool isAssistStartLeave;
    bool isAssistLeaving;
    #if defined(_CPLUSPLUS_)
    ActorStatus__Enum status;
    #else
    int32_t status;
    #endif
    struct FP specialStatusTime;
    #if defined(_CPLUSPLUS_)
    PlayerActorSearchType__Enum searchType;
    #else
    int32_t searchType;
    #endif
    #if defined(_CPLUSPLUS_)
    PlayerActorMoveType__Enum moveControlType;
    #else
    int32_t moveControlType;
    #endif
    bool enableReload;
    bool enableIndependentRushSkill;
    bool isSkin;
    struct ComboGroup *comboGroupForSkin;
    struct Dictionary_2_System_String_ComboClip_ *overrideComboClipsForSkin;
    bool isPreventNormalAttackByObstacle;
    bool isBornForceMove;
    struct AttributeEntry__Array *playerEntries;
    struct AttributeList *attributeListOfInitialSnapshot;
    struct Action *dodgeSkillActivationEndEvent;
    bool _movementHasInput;
    struct TSVector2 _movementInputVector;
    struct TSVector2 _MovementInputDirection_k__BackingField;
    bool _actived_k__BackingField;
    bool dodgeButtonHold;
    bool switchToRush;
    struct IEvent *_evt;
    bool enterElevator;
    struct Transform_1 *elevatorFloor;
    struct PlayerAdventureActor_SerializableDictionary_2_System_String_System_String_ *localData;
    struct List_1_TrueSync_TSVector_ *points;
};
struct PlayerAdventureActor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Id;
    VirtualInvokeData get_ActiveSelf;
    VirtualInvokeData AddLogicComponent;
    VirtualInvokeData GetLogicComponent;
    VirtualInvokeData GetLogicComponent_1;
    VirtualInvokeData AddOrGetLogicComponent;
    VirtualInvokeData AddMonoLogicComponent;
    VirtualInvokeData AddOrGetMonoLogicComponent;
    VirtualInvokeData IsCoroutineAlive;
    VirtualInvokeData IsCoroutineRunning;
    VirtualInvokeData GetCoroutineDeltaTime;
    VirtualInvokeData OnActive;
    VirtualInvokeData OnDeactive;
    VirtualInvokeData OnInit;
    VirtualInvokeData OnShutdown;
    VirtualInvokeData OnLogicUpdateEnabled;
    VirtualInvokeData OnLogicUpdateDisabled;
    VirtualInvokeData OnLogicUpdatePaused;
    VirtualInvokeData OnLogicUpdateResumed;
    VirtualInvokeData OnLogicStart;
    VirtualInvokeData OnLogicUpdate;
    VirtualInvokeData OnLogicTimeScaleChanged;
    VirtualInvokeData OnVisualUpdate;
    VirtualInvokeData QueryHitBoxContextTime;
    VirtualInvokeData QueryHitBoxContextPosition;
    VirtualInvokeData QueryHitBoxContextDirection;
    VirtualInvokeData QueryActorHitedTimeout;
    VirtualInvokeData SetActorHitedTime;
    VirtualInvokeData CheckHitable;
    VirtualInvokeData OnHitActor;
    VirtualInvokeData OnHitShield;
    VirtualInvokeData OnHitObstacle;
    VirtualInvokeData OnHitDestructibleObstacle;
    VirtualInvokeData OnDeterministicCollisionEnter;
    VirtualInvokeData OnDeterministicCollisionStay;
    VirtualInvokeData OnDeterministicCollisionExit;
    VirtualInvokeData OnStateTransformation;
    VirtualInvokeData OnStateMachineTransformation;
    VirtualInvokeData LevelStart;
    VirtualInvokeData LevelEnd;
    VirtualInvokeData OnHpChangedEvent;
    VirtualInvokeData OnAliveChangedEvent;
    VirtualInvokeData OnShieldChangedEvent;
    VirtualInvokeData OnShow;
    VirtualInvokeData OnEnterDeterministicCollision;
    VirtualInvokeData OnStayDeterministicCollision;
    VirtualInvokeData OnExitDeterministicCollision;
    VirtualInvokeData PlaySound;
    VirtualInvokeData LoadAnimations;
    VirtualInvokeData OnPlayIdleAnim;
    VirtualInvokeData CurrentStepCanbeHurt;
    VirtualInvokeData InitializeFXControl;
    VirtualInvokeData PlayHurtCueEffect;
    VirtualInvokeData InitializeMovementBehaviour;
    VirtualInvokeData UpdateNovementAgentAvoidanceBlockSetting;
    VirtualInvokeData SetupPrimeFSM;
    VirtualInvokeData Death;
    VirtualInvokeData InitializeVisual;
    VirtualInvokeData ReleaseVisual;
    VirtualInvokeData LoadModel;
    VirtualInvokeData SetupVisualComponents;
    VirtualInvokeData InitData;
    VirtualInvokeData LoadData;
    VirtualInvokeData RegisterActionState;
    VirtualInvokeData Recycle;
};

struct PlayerAdventureActor__StaticFields {
    struct Color color1;
    struct Color color2;
    struct Color color3;
    struct Color color4;
    struct Color color5;
};

struct PlayerAdventureActor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerAdventureActor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerAdventureActor__VTable vtable;
};

struct PlayerAdventureActor {
    struct PlayerAdventureActor__Class *klass;
    MonitorData *monitor;
    struct PlayerAdventureActor__Fields fields;
};

struct HitBox__Fields {
    struct MonoBehaviour__Fields _;
    struct LogicEntity *owner;
    struct IHitBoxContext *context;
    #if defined(_CPLUSPLUS_)
    HitBox_FeatureFlag__Enum featureFlags;
    #else
    uint32_t featureFlags;
    #endif
    struct HitBox_HitBoxFeatureData *featureData;
    int32_t _id;
    struct List_1_HitBox_HitDamageIdData_ *_HitDamageIdDatas;
    #if defined(_CPLUSPLUS_)
    HitBox_HurtAnimType__Enum hurtAnimType;
    #else
    int32_t hurtAnimType;
    #endif
    struct GameObject *hurtEffectSource;
    struct List_1_DeterministicCollider_ *_hitTargets;
    struct AkWeaponHitSwitch *weaponTrigger;
    bool canWeaponTrigger;
    struct AdventureActor *actor;
    #if defined(_CPLUSPLUS_)
    HitBox_Shape__Enum _hitBoxShape_k__BackingField;
    #else
    int32_t _hitBoxShape_k__BackingField;
    #endif
    struct FP _hitBoxWidth_k__BackingField;
    struct FP _hitBoxLength_k__BackingField;
    struct FP _hitBoxRadius_k__BackingField;
    struct FP _hitBoxInnerRadius_k__BackingField;
    struct FP _hitBoxAngle_k__BackingField;
    struct TSVector2 _hitPos_k__BackingField;
};

struct HitBox__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HitBox__StaticFields {
    struct HitBox_HitBoxFeatureData *defaultFeatureData;
};

struct HitBox__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HitBox__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HitBox__VTable vtable;
};

struct HitBox {
    struct HitBox__Class *klass;
    MonitorData *monitor;
    struct HitBox__Fields fields;
};

struct iFP {
    struct FP ObscuredFP;
};

struct iFP__Boxed {
    struct iFP__Class *klass;
    MonitorData *monitor;
    struct iFP fields;
};

struct iFP__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct iFP__StaticFields {
};

struct iFP__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct iFP__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct iFP__VTable vtable;
};

struct AABB {
    struct TSVector2 LowerBound;
    struct TSVector2 UpperBound;
};

struct AABB__Boxed {
    struct AABB__Class *klass;
    MonitorData *monitor;
    struct AABB fields;
};

struct AABB__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AABB__StaticFields {
};

struct AABB__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AABB__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AABB__VTable vtable;
};

struct DeterministicCollider__Fields {
    struct LogicMonoComponent__Fields _;
    int32_t priority;
    struct Collider *_collider;
    struct TrueSyncTransform *_tsTransform;
    struct Shape *_shape;
    bool _dirty;
    #if defined(_CPLUSPLUS_)
    DeterministicColliderShape__Enum _colliderShape;
    #else
    int32_t _colliderShape;
    #endif
    struct TSVector2 _colliderCenter;
    struct FP _radius;
    struct FP _colliderWidth;
    struct FP _colliderLength;
    struct FP _colliderHeight;
    struct IDeterministicCollisionListener *_listener;
    bool _ignoreCollision;
    struct AABB _colliderBounds;
    struct DeterministicCollisionQuadTreeNode *_quadTreeNode;
    struct List_1_DeterministicCollider_ *_collisionInfo;
    struct List_1_System_Int32_ *_collisionInfoMeta;
};

struct DeterministicCollider {
    struct DeterministicCollider__Class *klass;
    MonitorData *monitor;
    struct DeterministicCollider__Fields fields;
};

struct DeterministicRaycastHit {
    bool isValid;
    struct TSVector2 point;
    struct TSVector2 normal;
    struct DeterministicCollider *collider;
    struct FP distance;
};

struct GameObject__Fields {
    struct Object_1__Fields _;
};

struct GameObject__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GameObject__StaticFields {
};

struct GameObject__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameObject__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameObject__VTable vtable;
};

struct GameObject {
    struct GameObject__Class *klass;
    MonitorData *monitor;
    struct GameObject__Fields fields;
};

struct ModuleController_1_AdventureModuleController___Fields {
    struct MonoBehaviour__Fields _;
};

struct ModuleController_1_AdventureModuleController___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeExit;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnAfterEnter;
    VirtualInvokeData Awake;
    VirtualInvokeData OnBeforeExit_1;
    VirtualInvokeData OnExit_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnAfterEnter_1;
    VirtualInvokeData OnDestroy;
};

struct ModuleController_1_AdventureModuleController___StaticFields {
    struct AdventureModuleController *_Instance_k__BackingField;
};

struct ModuleController_1_AdventureModuleController___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ModuleController_1_AdventureModuleController___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ModuleController_1_AdventureModuleController___VTable vtable;
};

struct ModuleController_1_AdventureModuleController_ {
    struct ModuleController_1_AdventureModuleController___Class *klass;
    MonitorData *monitor;
    struct ModuleController_1_AdventureModuleController___Fields fields;
};

struct AdventureModuleController__Fields {
    struct ModuleController_1_AdventureModuleController___Fields _;
    bool _isStandaloneMode_k__BackingField;
    struct AdventureObjectOrderByLocationComparer *_objectOrderByLocationComparer;
    struct LogManager_Logger *_logger;
    struct FP BaseSuppress;
    struct FP DynamicSuppress;
    struct CoroutineScheduler *_logicCoroutineScheduler_k__BackingField;
    struct List_1_AdventureActor_ *_collisionDetectionEntities;
    struct AIAdapter *_levelManagerAdapter;
    struct String *_levelManagerTypeStr;
    struct GameObject *controllerContent;
    bool paused;
    struct Queue_1_System_Action_ *_actionsOnEndOfLogicFrame;
    struct Dictionary_2_System_Int64_FakeAdventureActor_ *_fakeActors;
    struct List_1_MonsterCloneAdventureActor_ *_monsterCloneActors;
    struct Dictionary_2_System_Int32_System_Int32_ *_themePerkInfos;
    struct List_1_System_Int32_ *_PerkThemes_k__BackingField;
    struct Dictionary_2_System_Int32_TrueSync_FP_ *_perkTriggerTimeDic;
    struct List_1_Lua2CSharpInfo_FateCardThemeInfo_ *FateCardThemeInfos;
    struct Dictionary_2_System_Int32_Lua2CSharpInfo_FateCardInfo_ *_fateInfoDic;
    struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32_ *_personalPerkInfos;
    struct Dictionary_2_System_Int32_Lua2CSharpInfo_DiscInfo_ *_discInfos;
    struct Dictionary_2_System_Int32_System_Int32_ *_noteCountDic;
    struct Dictionary_2_System_Int32_System_Int32_ *_actorLevelInfos;
    struct Dictionary_2_System_Int32_System_Int32_ *_actorBreakCountInfos;
    struct Dictionary_2_System_Int32_List_1_System_Boolean_ *_actorTalentActiveInfos;
    struct Dictionary_2_System_Int32_Lua2CSharpInfo_CharAttribute_ *_actorInitAttributes;
    struct List_1_Lua2CSharpInfo_SummonMonsterInfo_ *_SummonMonsters_k__BackingField;
    struct Dictionary_2_System_Int32_Lua2CSharpInfo_ActorStatus_ *_actorStatusInfos;
    int32_t BuildLevel;
    struct Dictionary_2_System_Int32_Lua2CSharpInfo_ActorAmmoInfo_ *_actorAmmoInfos;
    struct Dictionary_2_System_String_System_Int32_ *dicCount;
    struct Dictionary_2_System_Int32_System_Int32_ *_damageRecordDic;
    struct Dictionary_2_System_Int32_System_Int32_ *_stageDamageRecordDic;
    struct Dictionary_2_System_Int32_System_Int32_ *_totalDamageRecordDic;
    int32_t _enterBattleStateTimes;
    struct List_1_System_Int32_ *_unFinishedAchievementInfos;
    bool InBattleState;
    bool SemiAutoBattle;
    bool FullAutoBattle;
    bool AutoCastUltimateSkill;
    struct AdventureModuleConfigureData *sharedConfigureData;
    struct GameObject *FX_VampireSurvivorSimplifyHurtFXPrefab;
    struct List_1_AdventureModuleController_BattleEntity_ *battleEntities;
    uint32_t battleId;
    uint32_t damageId;
    bool _uploadDamageData_k__BackingField;
    struct String *UID;
    struct Recorder *gameRecorder;
    #if defined(_CPLUSPLUS_)
    Recorders_Types_LevelType__Enum recordLevelType;
    #else
    int32_t recordLevelType;
    #endif
    struct List_1_System_Int32_ *excludes;
    struct Transform_1 *actorRootNode;
    struct Transform_1 *weaponRootNode;
    struct Transform_1 *skillRootNode;
    struct Transform_1 *minmapRootNode;
    struct Dictionary_2_UnityEngine_Transform_UnityEngine_GameObject_ *minimapObjects;
    struct List_1_LogicEntity_ *removeEntities;
    struct List_1_AdventureModuleController_MonsterSummonData_ *monsterSummonInfos;
    int64_t _uidCounter;
    struct Dictionary_2_System_Int64_LogicEntity_ *_entityIDCache;
    struct EventDispatcher *_dispatcher;
    struct Dictionary_2_System_String_List_1_BaseAdventureEvent_ *_eventPool;
    bool _banPlayerSpawn_k__BackingField;
    bool _banMonsterSpawn_k__BackingField;
    bool _banBattleUIShow_k__BackingField;
    #if defined(_CPLUSPLUS_)
    GameEnum_worldLevelType__Enum _levelType_k__BackingField;
    #else
    int32_t _levelType_k__BackingField;
    #endif
    struct AdventureModuleLevelLoadParams *_levelLoadParams_k__BackingField;
    struct GameTeamConfig *_teamConfig_k__BackingField;
    struct AdventureLevelTeleporter_NextLevelData nextLevelData;
    #if defined(_CPLUSPLUS_)
    AdventureLevelState__Enum adventureLevelState;
    #else
    int32_t adventureLevelState;
    #endif
    bool _isModuleInit_k__BackingField;
    struct AdventureLevelController *_levelInstance_k__BackingField;
    struct AdventureAutoBattleController *_autoBattleController_k__BackingField;
    bool _limitlessMode_k__BackingField;
    struct Dictionary_2_System_String_System_Boolean_ *_LogicValue;
    int32_t currentFloor;
    #if defined(_CPLUSPLUS_)
    Weather__Enum weather;
    #else
    int32_t weather;
    #endif
    #if defined(_CPLUSPLUS_)
    TimeOfDay__Enum timeOfDay;
    #else
    int32_t timeOfDay;
    #endif
    bool _autoBattle_k__BackingField;
    struct String *_levelMusicName_k__BackingField;
    struct String *_leaveMusicEvent_k__BackingField;
    struct AdventureTimeControlManager *_globalTimeControlManager;
    int32_t _pauseRC;
    struct List_1_DeterministicCollider_ *_collisionDetectList;
};

struct AdventureModuleController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeExit;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnAfterEnter;
    VirtualInvokeData Awake;
    VirtualInvokeData OnBeforeExit_1;
    VirtualInvokeData OnExit_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnAfterEnter_1;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData AddEventListener;
    VirtualInvokeData AddEventListener_1;
    VirtualInvokeData HasEventListener;
    VirtualInvokeData RemoveEventListener;
    VirtualInvokeData RemoveAllEventListeners;
    VirtualInvokeData DispatchEvent;
};

struct AdventureModuleController__StaticFields {
    struct Dictionary_2_System_Int32_Dictionary_2_System_Int64_TrueSync_FP_ *_triggerElementMarkTimeDic;
    struct Type *playerType;
    struct Type *monsterType;
    struct Type *obstacleType;
    struct Type *weaponType;
    #if defined(_CPLUSPLUS_)
    AdventureModuleController_SceneLimitZoneType__Enum sceneLimitZoneType;
    #else
    int32_t sceneLimitZoneType;
    #endif
    struct TSRect sceneLimitZone;
};

struct AdventureModuleController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AdventureModuleController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AdventureModuleController__VTable vtable;
};

struct AdventureModuleController {
    struct AdventureModuleController__Class *klass;
    MonitorData *monitor;
    struct AdventureModuleController__Fields fields;
};

struct AreaEffect_Component__Fields {
    struct LogicMonoComponent__Fields _;
    bool checkTargetWithTag;
    struct String *checkTag;
    struct AreaEffectEntity *_context;
    struct AdventureActor *_owner;
    bool _RunningLogic_k__BackingField;
    bool _FinishAreaEffect_k__BackingField;
    int32_t _checkTagHashCode;
};

struct AreaEffect_Component__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ActiveSelf;
    VirtualInvokeData set_ActiveSelf;
    VirtualInvokeData SetEntity;
    VirtualInvokeData Init;
    VirtualInvokeData OnActive;
    VirtualInvokeData OnDeactive;
    VirtualInvokeData Shutdown;
    VirtualInvokeData OnActive_1;
    VirtualInvokeData OnDeactive_1;
    VirtualInvokeData OnInit;
    VirtualInvokeData OnShutdown;
    VirtualInvokeData OnLogicUpdate;
    VirtualInvokeData get_ShowCheckTag;
    VirtualInvokeData OnSetup;
    VirtualInvokeData OnStartLogic;
    VirtualInvokeData OnEarlyWarningUpdate;
    VirtualInvokeData OnLogicUpdate_1;
    VirtualInvokeData OnDeterministicCollisionEnter;
    VirtualInvokeData OnDeterministicCollisionStay;
    VirtualInvokeData OnDeterministicCollisionExit;
    VirtualInvokeData OnAreaScaleChange;
};

struct AreaEffect_Component__StaticFields {
};

struct AreaEffect_Component__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AreaEffect_Component__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AreaEffect_Component__VTable vtable;
};

struct AreaEffect_Component {
    struct AreaEffect_Component__Class *klass;
    MonitorData *monitor;
    struct AreaEffect_Component__Fields fields;
};

struct AreaEffectEntity__Fields {
    struct LogicEntity__Fields _;
    struct String *areaTag;
    struct List_1_System_String_ *areaChildTagList;
    struct FP duration;
    bool canBeHit;
    bool finishAfterOwnerDead;
    #if defined(_CPLUSPLUS_)
    HitBox_Shape__Enum hitBoxShape;
    #else
    int32_t hitBoxShape;
    #endif
    struct FP hitBoxWidth;
    struct FP hitBoxLength;
    struct FP hitBoxHeight;
    struct FP hitBoxRadius;
    struct FP hitBoxInnerRadius;
    struct FP hitBoxAngle;
    struct FP hitBoxRotation;
    struct TSVector2 hitBoxOffset;
    struct FP hitBoxOffsetY;
    bool areaWithActorScale;
    bool enableEarlyWarningEffect;
    struct GameObject *earlyWarningPrefab;
    struct FP earlyWarningDuration;
    float earlyWarningScale;
    struct GameObject *fx;
    struct Transform_1 *cTrans;
    bool effectWithActorScale;
    float effectScale;
    bool syncPosition;
    bool syncRotation;
    bool stopFxOnDeactive;
    bool checkTargetByPosition;
    bool shareSameDamageImmuneDuration;
    struct FP damageImmuneDuration;
    int32_t areaHashCode;
    struct List_1_System_Int32_ *areaChildHashCodeList;
    struct String *originalAreaTag;
    struct Vector3 orginalAreaScale;
    struct AdventureActor *_owner_k__BackingField;
    struct AdventureFXPlayer *_fxPlayer_k__BackingField;
    struct AdventureEarlyWarningFXPlayer *_earlyWarningFXPlayer_k__BackingField;
    int64_t _earlyWarningFXToken;
    struct List_1_AreaEffect_Component_ *_components;
    bool _RunningLogic_k__BackingField;
    struct FP _leftTime;
    struct FP _earlyWarningTime;
    struct SkillSlotLevelInfo *bindSkillSlotLevelInfo;
    struct AttributeList *attributeList;
    struct Action *OnBeforeEnd;
    struct Collider *_collider;
    struct DeterministicCollider *_dtCollider;
    struct HitBox *_hitBox;
    struct List_1_DeterministicCollider_ *_bulletColliderList;
    struct DeterministicShape _deterministicShape;
    struct VisualSmooth *_smooth;
    struct List_1_System_Int32_ *additionalAttrIdList;
    struct Dictionary_2_System_Int64_TrueSync_FP_ *_hittedEntities;
    struct AreaEffectEntity_DeterministicColliderCompare *_compare;
    struct List_1_DeterministicCollider_ *_lastColliderList;
    struct List_1_DeterministicCollider_ *_nowColliderList;
};

struct AreaEffectEntity__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Id;
    VirtualInvokeData get_ActiveSelf;
    VirtualInvokeData AddLogicComponent;
    VirtualInvokeData GetLogicComponent;
    VirtualInvokeData GetLogicComponent_1;
    VirtualInvokeData AddOrGetLogicComponent;
    VirtualInvokeData AddMonoLogicComponent;
    VirtualInvokeData AddOrGetMonoLogicComponent;
    VirtualInvokeData IsCoroutineAlive;
    VirtualInvokeData IsCoroutineRunning;
    VirtualInvokeData GetCoroutineDeltaTime;
    VirtualInvokeData OnActive;
    VirtualInvokeData OnDeactive;
    VirtualInvokeData OnInit;
    VirtualInvokeData OnShutdown;
    VirtualInvokeData OnLogicUpdateEnabled;
    VirtualInvokeData OnLogicUpdateDisabled;
    VirtualInvokeData OnLogicUpdatePaused;
    VirtualInvokeData OnLogicUpdateResumed;
    VirtualInvokeData OnLogicStart;
    VirtualInvokeData OnLogicUpdate;
    VirtualInvokeData OnLogicTimeScaleChanged;
    VirtualInvokeData OnVisualUpdate;
    VirtualInvokeData QueryHitBoxContextTime;
    VirtualInvokeData QueryHitBoxContextPosition;
    VirtualInvokeData QueryHitBoxContextDirection;
    VirtualInvokeData QueryActorHitedTimeout;
    VirtualInvokeData SetActorHitedTime;
    VirtualInvokeData CheckHitable;
    VirtualInvokeData OnHitActor;
    VirtualInvokeData OnHitShield;
    VirtualInvokeData OnHitObstacle;
    VirtualInvokeData OnHitDestructibleObstacle;
};

struct AreaEffectEntity__StaticFields {
};

struct AreaEffectEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AreaEffectEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AreaEffectEntity__VTable vtable;
};

struct AreaEffectEntity {
    struct AreaEffectEntity__Class *klass;
    MonitorData *monitor;
    struct AreaEffectEntity__Fields fields;
};

struct AreaEffect_AttackComponent__Fields {
    struct AreaEffect_Component__Fields _;
    int32_t hitDamageId;
    struct List_1_System_Int32_ *hitDamageIdList;
    struct FP hitDelay;
    bool hitImmediately;
    struct FP hitInterval;
    #if defined(_CPLUSPLUS_)
    HitBox_FeatureFlag__Enum hitFlags;
    #else
    uint32_t hitFlags;
    #endif
    struct HitBox_HitBoxFeatureData *hitFeatureData;
    struct GameObject *hitEffectPrefab;
    #if defined(_CPLUSPLUS_)
    HitBox_HurtAnimType__Enum hurtAnimType;
    #else
    int32_t hurtAnimType;
    #endif
    struct GameObject *hittedEffectPrefab;
    bool isHittedEffectScale;
    bool effectIgnoreTimeScale;
    struct FP damageImmuneDuration;
    bool delayClearHittedRecord;
    struct FP clearHittedRecordDelayTime;
    bool haveFeedbackEffect;
    bool blockBullet;
    struct TargetFilterCriteriaInfo *blockBulletCriteriaInfo;
    struct GameObject *blockFinishFx;
    struct AdventurePlayerFeedbackEffectConfigureData *playerfeedbackEffectConfigureData;
    bool triggerEnter;
    struct TargetFilterCriteriaInfo *triggerEnterCriteriaInfo;
    bool finish_TriggerEnter;
    bool triggerStay;
    struct TargetFilterCriteriaInfo *triggerStayCriteriaInfo;
    struct FP time_TriggerStay;
    bool finish_TriggerStay;
    bool triggerExit;
    struct TargetFilterCriteriaInfo *triggerExitCriteriaInfo;
    bool finish_TriggerExit;
    struct FP _hitTime;
    int32_t _hitIndex;
    struct FP _clearTime;
    struct Dictionary_2_System_Int64_TrueSync_FP_ *_triggerStayDic;
    struct Dictionary_2_System_Int64_TrueSync_FP_ *_hittedEntities;
};

struct AreaEffect_AttackComponent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ActiveSelf;
    VirtualInvokeData set_ActiveSelf;
    VirtualInvokeData SetEntity;
    VirtualInvokeData Init;
    VirtualInvokeData OnActive;
    VirtualInvokeData OnDeactive;
    VirtualInvokeData Shutdown;
    VirtualInvokeData OnActive_1;
    VirtualInvokeData OnDeactive_1;
    VirtualInvokeData OnInit;
    VirtualInvokeData OnShutdown;
    VirtualInvokeData OnLogicUpdate;
    VirtualInvokeData get_ShowCheckTag;
    VirtualInvokeData OnSetup;
    VirtualInvokeData OnStartLogic;
    VirtualInvokeData OnEarlyWarningUpdate;
    VirtualInvokeData OnLogicUpdate_1;
    VirtualInvokeData OnDeterministicCollisionEnter;
    VirtualInvokeData OnDeterministicCollisionStay;
    VirtualInvokeData OnDeterministicCollisionExit;
    VirtualInvokeData OnAreaScaleChange;
    VirtualInvokeData QueryHitBoxContextTime;
    VirtualInvokeData QueryHitBoxContextPosition;
    VirtualInvokeData QueryHitBoxContextDirection;
    VirtualInvokeData QueryActorHitedTimeout;
    VirtualInvokeData SetActorHitedTime;
    VirtualInvokeData CheckHitable;
    VirtualInvokeData OnHitActor;
    VirtualInvokeData OnHitShield;
    VirtualInvokeData OnHitObstacle;
    VirtualInvokeData OnHitDestructibleObstacle;
    VirtualInvokeData Hit;
};

struct AreaEffect_AttackComponent__StaticFields {
};

struct AreaEffect_AttackComponent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AreaEffect_AttackComponent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AreaEffect_AttackComponent__VTable vtable;
};

struct AreaEffect_AttackComponent {
    struct AreaEffect_AttackComponent__Class *klass;
    MonitorData *monitor;
    struct AreaEffect_AttackComponent__Fields fields;
};

struct AdventureWeapon__Fields {
    struct LogicEntity__Fields _;
    struct GameObject *_prefab_k__BackingField;
    struct LogicEntity *_owner;
    int64_t _ownerId;
    struct TSVector2 _originPosition_k__BackingField;
    struct TSVector2 _originDirection_k__BackingField;
    struct FP _velocitySpeed_k__BackingField;
    struct TSVector2 _velocityDirection_k__BackingField;
    bool useOwnerActorInfo;
    struct String *weaponTag;
    struct String *bulletTag;
    int32_t hitDamageId;
    struct HitBox_HitDamageIdData__Array *_hitdamagedatas;
    #if defined(_CPLUSPLUS_)
    HeightClass__Enum heightClass;
    #else
    int32_t heightClass;
    #endif
    #if defined(_CPLUSPLUS_)
    HitBox_FeatureFlag__Enum hitFlags;
    #else
    uint32_t hitFlags;
    #endif
    struct HitBox_HitBoxFeatureData *hitFeatureData;
    #if defined(_CPLUSPLUS_)
    HitBox_HurtAnimType__Enum hurtAnimType;
    #else
    int32_t hurtAnimType;
    #endif
    bool canBeBlock;
    bool isPauseMove;
    int32_t attackRound;
    int32_t temphitDmgId;
    int32_t weaponHashCode;
    int32_t bulletHashCode;
    struct VisualSmooth *_smooth_k__BackingField;
    struct Collider *collider;
    struct DeterministicCollider *_dtCollider_k__BackingField;
    struct SkillSlotLevelInfo *bindSkillSlotLevelInfo;
    struct AttributeList *attributeList;
    struct String *_DefaultWeaponTag_k__BackingField;
    struct String *_DefaultBulletTag_k__BackingField;
    struct Vector3 _DefaultWeaponScale_k__BackingField;
    struct HitBox *_hitBox;
    struct Dictionary_2_System_Int64_TrueSync_FP_ *_hitedActors;
    struct HashSet_1_System_Int32_ *subWeaponTags;
    struct List_1_System_Int32_ *additionalAttrIdList;
};

struct AdventureWeapon__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Id;
    VirtualInvokeData get_ActiveSelf;
    VirtualInvokeData AddLogicComponent;
    VirtualInvokeData GetLogicComponent;
    VirtualInvokeData GetLogicComponent_1;
    VirtualInvokeData AddOrGetLogicComponent;
    VirtualInvokeData AddMonoLogicComponent;
    VirtualInvokeData AddOrGetMonoLogicComponent;
    VirtualInvokeData IsCoroutineAlive;
    VirtualInvokeData IsCoroutineRunning;
    VirtualInvokeData GetCoroutineDeltaTime;
    VirtualInvokeData OnActive;
    VirtualInvokeData OnDeactive;
    VirtualInvokeData OnInit;
    VirtualInvokeData OnShutdown;
    VirtualInvokeData OnLogicUpdateEnabled;
    VirtualInvokeData OnLogicUpdateDisabled;
    VirtualInvokeData OnLogicUpdatePaused;
    VirtualInvokeData OnLogicUpdateResumed;
    VirtualInvokeData OnLogicStart;
    VirtualInvokeData OnLogicUpdate;
    VirtualInvokeData OnLogicTimeScaleChanged;
    VirtualInvokeData OnVisualUpdate;
    VirtualInvokeData QueryHitBoxContextTime;
    VirtualInvokeData QueryHitBoxContextPosition;
    VirtualInvokeData QueryHitBoxContextDirection;
    VirtualInvokeData QueryActorHitedTimeout;
    VirtualInvokeData SetActorHitedTime;
    VirtualInvokeData CheckHitable;
    VirtualInvokeData OnHitActor;
    VirtualInvokeData OnHitShield;
    VirtualInvokeData OnHitObstacle;
    VirtualInvokeData OnHitDestructibleObstacle;
    VirtualInvokeData get_isValid;
    VirtualInvokeData Setup;
    VirtualInvokeData Reset;
    VirtualInvokeData Finish;
    VirtualInvokeData CheckHitable_1;
    VirtualInvokeData OnHitActor_1;
    VirtualInvokeData OnHitShield_1;
    VirtualInvokeData OnHitObstacle_1;
    VirtualInvokeData OnHitDestructibleObstacle_1;
    VirtualInvokeData get_isShootableWeapon;
    VirtualInvokeData get_isEquipableWeapon;
    VirtualInvokeData OnEquipWith;
    VirtualInvokeData OnEquipUpdate;
    VirtualInvokeData OnEquipDrop;
    VirtualInvokeData get_isShield;
    VirtualInvokeData get_isShowShadowBlob;
    VirtualInvokeData iShowShadowBlob;
    VirtualInvokeData ModifyWeaponScaleByMulti;
    VirtualInvokeData OnWeaponScaleChange;
};

struct AdventureWeapon__StaticFields {
};

struct AdventureWeapon__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AdventureWeapon__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AdventureWeapon__VTable vtable;
};

struct AdventureWeapon {
    struct AdventureWeapon__Class *klass;
    MonitorData *monitor;
    struct AdventureWeapon__Fields fields;
};

struct AdventureBulletBase__Fields {
    struct AdventureWeapon__Fields _;
    struct FP damageArea;
    struct GameObject *finishPrefab;
    bool isPlayFinishPrefab;
    struct LogicEntity *_target;
    struct TSVector2 _targetPosition_k__BackingField;
    struct FP _targetPositionY_k__BackingField;
    #if defined(_CPLUSPLUS_)
    AimType__Enum _aimType;
    #else
    int32_t _aimType;
    #endif
    int64_t tagUid;
    #if defined(_CPLUSPLUS_)
    BulletFinishReason__Enum _finishReason;
    #else
    int32_t _finishReason;
    #endif
    struct FP damageImmuneDurationForMonsterWeapon;
    bool _isFinished_k__BackingField;
    struct List_1_WeaponFeature_ *_features_k__BackingField;
    struct FP _delayShoot_k__BackingField;
    struct FP _delayShootTimer;
};

struct AdventureBulletBase__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Id;
    VirtualInvokeData get_ActiveSelf;
    VirtualInvokeData AddLogicComponent;
    VirtualInvokeData GetLogicComponent;
    VirtualInvokeData GetLogicComponent_1;
    VirtualInvokeData AddOrGetLogicComponent;
    VirtualInvokeData AddMonoLogicComponent;
    VirtualInvokeData AddOrGetMonoLogicComponent;
    VirtualInvokeData IsCoroutineAlive;
    VirtualInvokeData IsCoroutineRunning;
    VirtualInvokeData GetCoroutineDeltaTime;
    VirtualInvokeData OnActive;
    VirtualInvokeData OnDeactive;
    VirtualInvokeData OnInit;
    VirtualInvokeData OnShutdown;
    VirtualInvokeData OnLogicUpdateEnabled;
    VirtualInvokeData OnLogicUpdateDisabled;
    VirtualInvokeData OnLogicUpdatePaused;
    VirtualInvokeData OnLogicUpdateResumed;
    VirtualInvokeData OnLogicStart;
    VirtualInvokeData OnLogicUpdate;
    VirtualInvokeData OnLogicTimeScaleChanged;
    VirtualInvokeData OnVisualUpdate;
    VirtualInvokeData QueryHitBoxContextTime;
    VirtualInvokeData QueryHitBoxContextPosition;
    VirtualInvokeData QueryHitBoxContextDirection;
    VirtualInvokeData QueryActorHitedTimeout;
    VirtualInvokeData SetActorHitedTime;
    VirtualInvokeData CheckHitable;
    VirtualInvokeData OnHitActor;
    VirtualInvokeData OnHitShield;
    VirtualInvokeData OnHitObstacle;
    VirtualInvokeData OnHitDestructibleObstacle;
    VirtualInvokeData get_isValid;
    VirtualInvokeData Setup;
    VirtualInvokeData Reset;
    VirtualInvokeData Finish;
    VirtualInvokeData CheckHitable_1;
    VirtualInvokeData OnHitActor_1;
    VirtualInvokeData OnHitShield_1;
    VirtualInvokeData OnHitObstacle_1;
    VirtualInvokeData OnHitDestructibleObstacle_1;
    VirtualInvokeData get_isShootableWeapon;
    VirtualInvokeData get_isEquipableWeapon;
    VirtualInvokeData OnEquipWith;
    VirtualInvokeData OnEquipUpdate;
    VirtualInvokeData OnEquipDrop;
    VirtualInvokeData get_isShield;
    VirtualInvokeData get_isShowShadowBlob;
    VirtualInvokeData iShowShadowBlob;
    VirtualInvokeData ModifyWeaponScaleByMulti;
    VirtualInvokeData OnWeaponScaleChange;
};

struct AdventureBulletBase__StaticFields {
};

struct AdventureBulletBase__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AdventureBulletBase__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AdventureBulletBase__VTable vtable;
};

struct AdventureBulletBase {
    struct AdventureBulletBase__Class *klass;
    MonitorData *monitor;
    struct AdventureBulletBase__Fields fields;
};

struct Action_1_Boolean___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_Boolean___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData DynamicInvokeImpl;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
    VirtualInvokeData Invoke;
    VirtualInvokeData BeginInvoke;
    VirtualInvokeData EndInvoke;
};

struct Action_1_Boolean___StaticFields {
};

struct Action_1_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_Boolean___VTable vtable;
};

struct Action_1_Boolean_ {
    struct Action_1_Boolean___Class *klass;
    MonitorData *monitor;
    struct Action_1_Boolean___Fields fields;
};

struct Action_1_TrueSync_FP___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_TrueSync_FP___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData DynamicInvokeImpl;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
    VirtualInvokeData Invoke;
    VirtualInvokeData BeginInvoke;
    VirtualInvokeData EndInvoke;
};

struct Action_1_TrueSync_FP___StaticFields {
};

struct Action_1_TrueSync_FP___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_TrueSync_FP___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_TrueSync_FP___VTable vtable;
};

struct Action_1_TrueSync_FP_ {
    struct Action_1_TrueSync_FP___Class *klass;
    MonitorData *monitor;
    struct Action_1_TrueSync_FP___Fields fields;
};

struct PlayerSkillCd__Fields {
    struct LogicComponent__Fields _;
    struct PlayerSkillCd_SkillBindHandle *SkillBindEvent;
    struct PlayerSkillCd_SyncSkillBtnToLuaHandle *SyncSkillBtnToLua;
    struct List_1_SkillInfo_ *_skillInfos_k__BackingField;
    struct Dictionary_2_ActionKey_System_Int32_ *_skillIdBindDict;
    struct Dictionary_2_ActionKey_System_Int32_ *_SkillSlotBaseLvBindDict_k__BackingField;
    struct Dictionary_2_ActionKey_System_Int32_ *_SkillSlotAmendLvBindDict_k__BackingField;
    int32_t _actorId;
    struct AdventureActor *_actor;
    bool _isFastResume;
    struct Dictionary_2_System_Int32_SkillEnergyInfo_ *dicSkillEnergy;
    int32_t _unableRecoverEnergyRC;
    bool bNeedSyncToLua;
    struct Single__Array *arrSyncData;
};

struct PlayerSkillCd__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ActiveSelf;
    VirtualInvokeData set_ActiveSelf;
    VirtualInvokeData SetEntity;
    VirtualInvokeData Init;
    VirtualInvokeData OnActive;
    VirtualInvokeData OnDeactive;
    VirtualInvokeData Shutdown;
    VirtualInvokeData OnActive_1;
    VirtualInvokeData OnDeactive_1;
    VirtualInvokeData OnInit;
    VirtualInvokeData OnShutdown;
};

struct PlayerSkillCd__StaticFields {
};

struct PlayerSkillCd__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerSkillCd__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerSkillCd__VTable vtable;
};

struct PlayerSkillCd {
    struct PlayerSkillCd__Class *klass;
    MonitorData *monitor;
    struct PlayerSkillCd__Fields fields;
};

struct __declspec(align(8)) SkillInfo__Fields {
    struct AdventureActor *_actor;
    struct SpecialAttributeList *specialAttributeList;
    struct AttributeList *attributeList;
    #if defined(_CPLUSPLUS_)
    ActionKey__Enum actionKey;
    #else
    int32_t actionKey;
    #endif
    int32_t skillId;
    bool _isAssistSkill_k__BackingField;
    bool canUseAssitSkill;
    bool beginResume;
    bool resuming;
    bool lockStateChange;
    struct CoroutineNode *_lockingCountdownCoroutine;
    bool _locking;
    struct FP currentUseInterval;
    struct FP totalUseInterval;
    int32_t _currentSectionAmount;
    int32_t originalTotalSectionAmount;
    int32_t totalSectionAmount;
    struct FP originalSectionResumeTime;
    struct FP sectionResumeTime;
    struct FP currentResumeTime;
    struct FP sectionResumeTimePercentAmend;
    struct FP sectionResumeTimeAmend;
    struct FP useTimeHint;
    struct FP currentUseTimeHint;
};

struct SkillInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SkillInfo__StaticFields {
};

struct SkillInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkillInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkillInfo__VTable vtable;
};

struct SkillInfo {
    struct SkillInfo__Class *klass;
    MonitorData *monitor;
    struct SkillInfo__Fields fields;
};

struct AdventureSkill__Fields {
    struct LogicEntity__Fields _;
    int32_t _skillId_k__BackingField;
    bool _checkCdRestore_k__BackingField;
    bool _forceRunFinish_k__BackingField;
    struct List_1_UnityEngine_GameObject_ *_targets_k__BackingField;
    struct List_1_System_Int32_ *_breakSkillIds_k__BackingField;
    struct GameObject *_owner_k__BackingField;
    struct AdventureActor *_actor_k__BackingField;
    struct ActorSkillManage *_actorSkillManage_k__BackingField;
    struct AIAdapter *_ai;
    struct AdventureSkillPhaseConfig *_phaseConfig;
    struct Skill *_skillInfo;
    struct Action_1_Boolean_ *_finishCallback;
    struct Action_1_TrueSync_FP_ *_beginCDForMonsterCallback;
    struct PlayerSkillCd *_playerSkillCd;
    bool _alreadyResume;
    #if defined(_CPLUSPLUS_)
    SkillCountdownTiming__Enum _countdownTiming;
    #else
    int32_t _countdownTiming;
    #endif
    #if defined(_CPLUSPLUS_)
    SkillLauncherType__Enum _skillLauncherType;
    #else
    int32_t _skillLauncherType;
    #endif
    #if defined(_CPLUSPLUS_)
    SkillPhaseFeatureFlag__Enum _skillCastBehaviourType;
    #else
    int32_t _skillCastBehaviourType;
    #endif
    struct Action *_setPhaseExecuteConfigCallback;
    struct AdventureLevelObjPoolMgr_PoolObj *_poolObj;
    bool isActivationEnd;
    bool isDodgeSkill;
    bool CanExecuteOtherSkillWhenSemiAutoBattle;
    bool _IsRemoved_k__BackingField;
};

struct AdventureSkill__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Id;
    VirtualInvokeData get_ActiveSelf;
    VirtualInvokeData AddLogicComponent;
    VirtualInvokeData GetLogicComponent;
    VirtualInvokeData GetLogicComponent_1;
    VirtualInvokeData AddOrGetLogicComponent;
    VirtualInvokeData AddMonoLogicComponent;
    VirtualInvokeData AddOrGetMonoLogicComponent;
    VirtualInvokeData IsCoroutineAlive;
    VirtualInvokeData IsCoroutineRunning;
    VirtualInvokeData GetCoroutineDeltaTime;
    VirtualInvokeData OnActive;
    VirtualInvokeData OnDeactive;
    VirtualInvokeData OnInit;
    VirtualInvokeData OnShutdown;
    VirtualInvokeData OnLogicUpdateEnabled;
    VirtualInvokeData OnLogicUpdateDisabled;
    VirtualInvokeData OnLogicUpdatePaused;
    VirtualInvokeData OnLogicUpdateResumed;
    VirtualInvokeData OnLogicStart;
    VirtualInvokeData OnLogicUpdate;
    VirtualInvokeData OnLogicTimeScaleChanged;
    VirtualInvokeData OnVisualUpdate;
};

struct AdventureSkill__StaticFields {
};

struct AdventureSkill__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AdventureSkill__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AdventureSkill__VTable vtable;
};

struct AdventureSkill {
    struct AdventureSkill__Class *klass;
    MonitorData *monitor;
    struct AdventureSkill__Fields fields;
};

struct MonsterToughnessInfo__Fields {
    struct LogicComponent__Fields _;
    struct MonsterToughnessInfo_ToughnessValueChangedHandle *ToughnessValueChangedEvent;
    struct MonsterToughnessInfo_ToughnessStateChangedHandle *ToughnessStateChangedEvent;
    struct AttributeList *attributeList;
    struct SpecialAttributeList *specialAttributeList;
    bool _lockToughness_k__BackingField;
    struct FP _toughnessBrokenTime_k__BackingField;
    bool _toughnessCanRecover_k__BackingField;
    bool _isToughnessBroken;
    bool _isInRecover_k__BackingField;
    bool _isShowToughness;
    bool _isUseDefaultBrokenState_k__BackingField;
    struct AdventureActor *_actor;
    bool _IsInit_k__BackingField;
    struct AdventureActor *_damageSource;
    struct List_1_System_Int32_ *_hitDamageTag;
    struct List_1_MonsterAdventureActor_ *_querySummonedList;
    struct CoroutineNode *_toughnessBrokenStateNode;
    struct CoroutineNode *_toIdleByToughnessBrokenNode;
    struct CoroutineNode *_recoverToughnessNode;
};

struct MonsterToughnessInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ActiveSelf;
    VirtualInvokeData set_ActiveSelf;
    VirtualInvokeData SetEntity;
    VirtualInvokeData Init;
    VirtualInvokeData OnActive;
    VirtualInvokeData OnDeactive;
    VirtualInvokeData Shutdown;
    VirtualInvokeData OnActive_1;
    VirtualInvokeData OnDeactive_1;
    VirtualInvokeData OnInit;
    VirtualInvokeData OnShutdown;
};

struct MonsterToughnessInfo__StaticFields {
    struct List_1_System_Int32_ *NullDamageTag;
};

struct MonsterToughnessInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MonsterToughnessInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MonsterToughnessInfo__VTable vtable;
};

struct MonsterToughnessInfo {
    struct MonsterToughnessInfo__Class *klass;
    MonitorData *monitor;
    struct MonsterToughnessInfo__Fields fields;
};

struct SceneSingleton_1_AdventurePlayerController___Fields {
    struct MonoBehaviour__Fields _;
};

struct SceneSingleton_1_AdventurePlayerController___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
};

struct SceneSingleton_1_AdventurePlayerController___StaticFields {
    struct AdventurePlayerController *g_instance;
};

struct SceneSingleton_1_AdventurePlayerController___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneSingleton_1_AdventurePlayerController___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneSingleton_1_AdventurePlayerController___VTable vtable;
};

struct SceneSingleton_1_AdventurePlayerController_ {
    struct SceneSingleton_1_AdventurePlayerController___Class *klass;
    MonitorData *monitor;
    struct SceneSingleton_1_AdventurePlayerController___Fields fields;
};

struct LayerMask {
    int32_t m_Mask;
};

struct AdventurePlayerController__Fields {
    struct SceneSingleton_1_AdventurePlayerController___Fields _;
    struct LogManager_Logger *_logger;
    bool ultimateIgnoreEnergy;
    bool showVisionAttackRange;
    bool tempShowVisionAttackRange;
    struct UIFan *uifan;
    struct Color uifanColor_CanAtk;
    struct Color uifanColor_CanNotAtk;
    bool _mainActorCanAttack;
    struct GameObject *playerAgent;
    struct CapsuleCollider *playerAgentCollider;
    struct AdventurePlayerIndependentImpulseListener *playerImpulseListener;
    bool _playerAgentSyncEnabled_k__BackingField;
    struct AdventureEntityGroup *_actorGroup;
    struct PlayerAdventureActor *_activedPlayerActor;
    int32_t _firstSlotActorId;
    int32_t _secondSlotActorId;
    struct Dictionary_2_System_Int32_PlayerAdventureActor_ *_actorDicts;
    struct List_1_PlayerAdventureActor_ *_beDeactiveActors;
    struct List_1_PlayerAdventureActor_ *ActorLs;
    bool _hideByInit;
    int32_t currentCharid;
    struct Dictionary_2_System_Int64_AdventureActor_ *alertEntity;
    struct List_1_System_Int64_ *dieEntity;
    struct List_1_System_Int64_ *actionEnemyEntity;
    int32_t counsse;
    int32_t alterLv;
    struct TSVector2 tslastPos;
    struct Vector3 lastPos;
    struct Quaternion lastRot;
    struct PlayFX *outFx;
    struct PlayFX *inFx;
    struct List_1_System_Int32_ *_alreadyAddedEnergy;
    int32_t uniqueAttackId;
    struct List_1_System_Int64_ *searchList;
    struct LogicEntity *selectEntity;
    struct LogicEntity *_defaultSelect;
    struct FP _leftTime;
    struct TiliaShieldEntity *tiliaShieldEntity;
    struct GameObject *testAreaEffectPrefab;
    int32_t lastCastSkillActorId;
    struct FP lastCastSkillTime;
    struct Dictionary_2_System_Int32_AutoBattleReadyInfo_ *autoBattleReadyInfoDict;
    struct AutoBattleReadyInfo *autoBattleReadyInfoIndex1;
    struct AutoBattleReadyInfo *autoBattleReadyInfoIndex2;
    struct AutoBattleReadyInfo *autoBattleReadyInfoIndex3;
    struct AutoBattleReadyInfo *autoBattleReadyInfoIndex4;
    struct AutoBattleReadyInfo *autoBattleReadyInfoIndex5;
    struct AutoBattleReadyInfo *autoBattleReadyInfoIndex6;
    float extraStopDistance;
    int32_t minMonsterCount;
    struct FP traceMoveAcc;
    float minStopDistance;
    float roadPointStopDistance;
    struct FP autoTraceCD;
    bool isTracing;
    struct LogicEntity *currentTarget;
    struct List_1_LogicEntity_ *searchResult;
    struct FP originMoveAcc;
    bool isMinStopDistanceMove;
    bool isMoveToRoadPointing;
    bool autoTraceCooling;
    bool manualMove;
    struct CoroutineNode *autoTraceCoolingNode;
    struct Camera *closeupCamera;
    struct Camera *hudCamera;
    #if defined(_CPLUSPLUS_)
    CinemachineBlendDefinition_Style__Enum mainCameraBlendStyle;
    #else
    int32_t mainCameraBlendStyle;
    #endif
    float mainCameraBlendTime;
    struct CinemachineVirtualCamera *playerMainVCam;
    struct Image *closeupBackground;
    struct Color closeupBackgroundColor;
    struct LayerMask mainCamVisibleLayerMaskOnCloseup;
    struct Transform_1 *cameraBeacon;
    struct AdventureCameraControlConfigureData *meleeSharedConfigureData;
    struct AdventureCameraControlConfigureData *rangeSharedConfigureData;
    struct AdventureCameraControlConfigureData *meleeSharedConfigureData_RoguelikeMode;
    struct AdventureCameraControlConfigureData *rangeSharedConfigureData_RoguelikeMode;
    struct AdventureCameraControlConfigureData *comboClipToolsConfigureData;
    float cameraFollowTransitionCheckDistance;
    bool enableDebugView;
    struct GameObject *meleeFOVTimeline;
    struct GameObject *rangeFOVTimeline;
    bool swichActor;
    float _actorSwitchTime;
    struct AdventureCameraControlConfigureData *_defaultConfigureData;
    struct AdventureCameraControlConfigureData *_overrideConfigureData;
    struct AdventureCameraControlConfigureData *lastOverrideConfigureData;
    struct AdventureCameraControlConfigureData *_customConfigureData;
    struct Vector3 _cameraFollowTargetPosition;
    struct Vector3 _cameraDampPosition;
    struct Vector3 _cameraDampVelocity;
    float _cameraOffsetRngRadius;
    float _cameraDampAngle;
    float _cameraDampAngleVelocity;
    float _cameraRotationDampAngle;
    float _cameraRotationDampAngleVelocity;
    float _cameraDepth;
    float _cameraDampDepth;
    float _cameraDampDepthVelocity;
    float _cameraFOVDamp;
    float _cameraFOVDampVelocity;
    float _cameraOffsetX;
    float _cameraOffsetY;
    float _cameraOffsetZ;
    struct Vector2 _playerAttackRange;
    float _cameraFollowSmoothTime;
    float _lastCameraConfigY;
    bool _cameraConfigYChanged;
    float _fixedCameraOffsetRngRadius;
    struct FP _fixedDuration;
    int32_t _reversalCameraRotationAngle_k__BackingField;
    int32_t _cameraControlEnableRC;
    struct Transform_1 *cameraLookAt;
    struct Transform_1 *playerProbe;
    bool needCameraMove;
    struct GameObject *_meleeFOVTimeline;
    struct GameObject *_rangeFOVTimeline;
    struct PlayableDirector *_fovDirector;
    float _zoomFreeze;
    float _zoomDurationTime;
    struct Tweener *_cameraShakeTweener;
    float _shakeCoefficient;
    struct Vector3 _cameraShakeShifting;
    struct Vector3 _cameraShakeShiftingR;
    struct Vector3 _cameraShakeShiftingRz;
    float _cameraDelpth;
    int32_t _cameraShakeSort;
    int64_t _cameraShakeUniqueId;
    struct UniversalAdditionalCameraData *_closeupCameraAdditionalCameraData;
    float _closeupCameraNearClipPlane;
    float _closeupCameraFarClipPlane;
    struct Canvas *_closeupBackgroundCanvas;
    int32_t _originMainCameraLayerMask;
    int32_t _originPlayerMainVCamLayer;
    struct CinemachineTransposer *_cameraTransposer;
    struct CinemachineComposer *_cameraComposer;
    struct List_1_Cinemachine_ICinemachineCamera_ *vCamList;
    struct List_1_AIAdapter_ *_discScripts;
    struct String *_elementTagManagerPath;
    struct AIAdapter *_elementTagManagerAI;
    struct String *_fateCardThemeManagerPath;
    struct AIAdapter *_fateCardThemeManagerAI;
    bool enableTouchScreenSupport;
    bool enableKeyboardMouseSupport;
    bool enableJoystickSupport;
    int32_t _disableFire1RC;
    int32_t _disableFire2RC;
    int32_t _disableFire3RC;
    int32_t _disableFire4RC;
    int32_t _disableActorSwitch1RC;
    int32_t _disableActorSwitch2RC;
    int32_t _disableSwitchWithUltra1RC;
    int32_t _disableSwitchWithUltra2RC;
    int32_t _disableInteractiveRC;
    int32_t _disableTargetSwitchRC;
    bool _movementHasInput;
    struct Vector2 _movementInputVector;
    struct Vector2 _movementInputDirection;
    struct Vector2 _lastInputDirection;
    struct Vector2 _lastDirection;
    #if defined(_CPLUSPLUS_)
    ButtonState__Enum _actionBtnAState;
    #else
    uint8_t _actionBtnAState;
    #endif
    #if defined(_CPLUSPLUS_)
    ButtonState__Enum _actionBtnBState;
    #else
    uint8_t _actionBtnBState;
    #endif
    #if defined(_CPLUSPLUS_)
    ButtonState__Enum _actionBtnCState;
    #else
    uint8_t _actionBtnCState;
    #endif
    #if defined(_CPLUSPLUS_)
    ButtonState__Enum _actionBtnDState;
    #else
    uint8_t _actionBtnDState;
    #endif
    #if defined(_CPLUSPLUS_)
    ButtonState__Enum _switchActorBtnAState;
    #else
    uint8_t _switchActorBtnAState;
    #endif
    #if defined(_CPLUSPLUS_)
    ButtonState__Enum _switchActorBtnBState;
    #else
    uint8_t _switchActorBtnBState;
    #endif
    #if defined(_CPLUSPLUS_)
    ButtonState__Enum _interactiveBtnState;
    #else
    uint8_t _interactiveBtnState;
    #endif
    #if defined(_CPLUSPLUS_)
    ButtonState__Enum _targetSwitchBtnState;
    #else
    uint8_t _targetSwitchBtnState;
    #endif
    #if defined(_CPLUSPLUS_)
    ButtonState__Enum _switchWithUltraBtnAState;
    #else
    uint8_t _switchWithUltraBtnAState;
    #endif
    #if defined(_CPLUSPLUS_)
    ButtonState__Enum _switchWithUltraBtnBState;
    #else
    uint8_t _switchWithUltraBtnBState;
    #endif
    struct Vector2 _mouseInputVector;
    struct Vector2 _mouseInputDirection;
    struct TSVector2 _mouseInputDirectionBuffer;
    bool _mouseHasInput;
    bool _mouseHasInputBuffer;
    bool bFirstEnable;
    int32_t _inputEnableRC;
    struct Queue_1_OperationInfo_ *_operationsBuffer;
    bool _movementHasInputBuffer;
    struct TSVector2 _movementInputDirectionBuffer;
    struct String *_themeManagerPath;
    struct AIAdapter *_themeManagerAI;
};

struct AdventurePlayerController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData IsCoroutineAlive;
    VirtualInvokeData IsCoroutineRunning;
    VirtualInvokeData GetCoroutineDeltaTime;
};

struct AdventurePlayerController__StaticFields {
};

struct AdventurePlayerController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AdventurePlayerController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AdventurePlayerController__VTable vtable;
};

struct AdventurePlayerController {
    struct AdventurePlayerController__Class *klass;
    MonitorData *monitor;
    struct AdventurePlayerController__Fields fields;
};

struct TrueSyncTransform__Fields {
    struct LogicMonoComponent__Fields _;
    struct Transform _dtTransform;
    struct Transform_1 *_transform;
    bool _transformSyncEnabled_k__BackingField;
    bool Dirty;
    struct FP _positionY;
};

struct TrueSyncTransform__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ActiveSelf;
    VirtualInvokeData set_ActiveSelf;
    VirtualInvokeData SetEntity;
    VirtualInvokeData Init;
    VirtualInvokeData OnActive;
    VirtualInvokeData OnDeactive;
    VirtualInvokeData Shutdown;
    VirtualInvokeData OnActive_1;
    VirtualInvokeData OnDeactive_1;
    VirtualInvokeData OnInit;
    VirtualInvokeData OnShutdown;
};

struct TrueSyncTransform__StaticFields {
};

struct TrueSyncTransform__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TrueSyncTransform__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TrueSyncTransform__VTable vtable;
};

struct TrueSyncTransform {
    struct TrueSyncTransform__Class *klass;
    MonitorData *monitor;
    struct TrueSyncTransform__Fields fields;
};

struct Color__Array__Array__VTable {
};

struct Color__Array__Array__StaticFields {
};

struct Color__Array__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Color__Array__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Color__Array__Array__VTable vtable;
};

struct IList_1_IList_1_System_Int32___VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
};

struct IList_1_IList_1_System_Int32___StaticFields {
};

struct IList_1_IList_1_System_Int32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IList_1_IList_1_System_Int32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IList_1_IList_1_System_Int32___VTable vtable;
};

struct IList_1_IList_1_System_Int32_ {
    struct IList_1_IList_1_System_Int32___Class *klass;
    MonitorData *monitor;
};

#ifndef IS_DECOMPILER
}
#endif
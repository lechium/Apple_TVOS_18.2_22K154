//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTRDeviceController, NSMutableDictionary, NSObject;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AttributePathParams {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned short _field4;
};

struct BDXTransferServerDelegate {
    CDUnknownFunctionPointerType *_field1;
};

struct BleApplicationDelegate;

struct BleConnectionDelegate;

struct BleLayer {
    int _field1;
    void *_field2;
    struct BleLayerDelegate *_field3;
    struct BleConnectionDelegate *_field4;
    struct BlePlatformDelegate *_field5;
    struct BleApplicationDelegate *_field6;
    struct Layer *_field7;
};

struct BleLayerDelegate;

struct BlePlatformDelegate;

struct BleScannerDelegate {
    CDUnknownFunctionPointerType *_field1;
};

struct ChipBleUUID {
    unsigned char _field1[16];
};

struct ChipError {
    unsigned int mError;
    char *mFile;
    unsigned int mLine;
};

struct CommissionableBrowserInternal {
    CDUnknownFunctionPointerType *_vptr$DiscoverNodeDelegate;
    CDUnknownFunctionPointerType *_vptr$DnssdBrowseDelegate;
    CDUnknownFunctionPointerType *_vptr$BleScannerDelegate;
    id mBleScannerDelegateOwner;
    NSObject *mDispatchQueue;
    id mDelegate;
    MTRDeviceController *mController;
    NSMutableDictionary *mDiscoveredResults;
    int mOnNetworkDevicesAdded;
    int mOnNetworkDevicesRemoved;
    int mBLEDevicesAdded;
    int mBLEDevicesRemoved;
};

struct CommonResolutionData {
    struct InterfaceId interfaceId;
    unsigned long long numIPs;
    struct IPAddress ipAddress[5];
    unsigned short port;
    char hostName[41];
    _Bool supportsTcpClient;
    _Bool supportsTcpServer;
    struct optional<bool> isICDOperatingAsLIT;
    struct optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> mrpRetryIntervalIdle;
    struct optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> mrpRetryIntervalActive;
    struct optional<std::chrono::duration<unsigned short, std::ratio<1, 1000>>> mrpRetryActiveThreshold;
};

struct DarwinTracingBackend {
    CDUnknownFunctionPointerType *_vptr$Backend;
    struct IntrusiveListNodePrivateBase *mPrev;
    struct IntrusiveListNodePrivateBase *mNext;
    CDUnknownBlockType mClientCallback;
};

struct DiagnosticLogsDownloaderBridge {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct EventPathParams {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    _Bool _field4;
};

struct IPAddress {
    unsigned int Addr[4];
};

struct InterfaceId {
    unsigned int mPlatformInterface;
};

struct IntrusiveListNodePrivateBase;

struct Layer;

struct MTRAttestationTrustStoreBridge {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct MTRDeviceControllerDelegateBridge {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
    id _field4;
    unsigned long long _field5;
};

struct MTRP256KeypairBridge {
    CDUnknownFunctionPointerType *_vptr$ECPKeypair;
    struct P256PublicKey mPublicKey;
    struct P256KeypairContext mKeypair;
    _Bool mInitialized;
    id mKeypair;
    struct P256PublicKey mPubkey;
};

struct MetricEvent {
    int _field1;
    char *_field2;
    struct Value _field3;
};

struct OperationalKeystore {
    CDUnknownFunctionPointerType *_field1;
};

struct Optional<chip::Dnssd::CommonResolutionData> {
    _Bool mHasValue;
    union Value {
        struct CommonResolutionData mData;
    } mValue;
};

struct Optional<unsigned char> {
    _Bool mHasValue;
    union Value {
        unsigned char mData;
    } mValue;
};

struct P256KeypairContext {
    unsigned char mBytes[512];
};

struct P256PublicKey {
    CDUnknownFunctionPointerType *_vptr$ECPKey;
    unsigned char bytes[65];
};

struct SetupDiscriminator {
    unsigned short mDiscriminator;
    _Bool mIsShortDiscriminator;
};

struct Value {
    union Store _field1;
    unsigned char _field2;
};

struct _DNSServiceRef_t;

struct atomic<std::optional<unsigned long long>> {
    struct __cxx_atomic_impl<std::optional<unsigned long long>, std::__cxx_atomic_base_impl<std::optional<unsigned long long>>> {
        _Atomic struct optional<unsigned long long> __a_value;
    } __a_;
};

struct atomic<unsigned char> {
    struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> {
        _Atomic unsigned char __a_value;
    } __a_;
};

struct duration<unsigned int, std::ratio<1, 1000>> {
    unsigned int __rep_;
};

struct duration<unsigned short, std::ratio<1, 1000>> {
    unsigned short __rep_;
};

struct optional<bool> {
    union {
        char __null_state_;
        _Bool __val_;
    } ;
    _Bool __engaged_;
};

struct optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> {
    union {
        char __null_state_;
        struct duration<unsigned int, std::ratio<1, 1000>> __val_;
    } ;
    _Bool __engaged_;
};

struct optional<std::chrono::duration<unsigned short, std::ratio<1, 1000>>> {
    union {
        char __null_state_;
        struct duration<unsigned short, std::ratio<1, 1000>> __val_;
    } ;
    _Bool __engaged_;
};

struct optional<unsigned long long>;

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct vector<_DNSServiceRef_t *, std::allocator<_DNSServiceRef_t *>> {
    struct _DNSServiceRef_t **__begin_;
    struct _DNSServiceRef_t **__end_;
    struct __compressed_pair<_DNSServiceRef_t **, std::allocator<_DNSServiceRef_t *>> {
        struct _DNSServiceRef_t **__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct Optional<chip::Dnssd::CommonResolutionData> {
    _Bool mHasValue;
    union Value {
        struct CommonResolutionData mData;
    } mValue;
} Optional_4645caca;

typedef struct Optional<unsigned char> {
    _Bool mHasValue;
    union Value {
        unsigned char mData;
    } mValue;
} Optional_a70626db;

#pragma mark Named Unions

union Store {
    int _field1;
    unsigned int _field2;
};


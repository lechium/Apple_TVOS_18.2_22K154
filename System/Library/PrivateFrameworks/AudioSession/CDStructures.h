//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAudioSession;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AVAudioIOPeriod {
    double _field1;
    double _field2;
    unsigned long long _field3;
    float _field4;
};

struct AVAudioTimeInterval {
    double _field1;
    double _field2;
    unsigned long long _field3;
};

struct AudioPresentationTimeStamp {
    unsigned int _field1;
    unsigned int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    double _field8;
    double _field9;
};

struct AudioTimeStamp {
    double _field1;
    unsigned long long _field2;
    double _field3;
    unsigned long long _field4;
    struct SMPTETime _field5;
    unsigned int _field6;
    unsigned int _field7;
};

struct DeviceTimeClient;

struct IOControllerImpl {
    AVAudioSession *mSession;
    _Bool mIsDecoupledInput;
    struct weak_ptr<as::client::XPCConnection> mXPCConnection;
    struct atomic<unsigned int> mTimingStateSlot;
    struct synchronized<(anonymous namespace)::ListenerMgr, caulk::mach::unfair_lock, caulk::empty_atomic_interface<(anonymous namespace)::ListenerMgr>> mListenerMgr;
};

struct ListenerMgr {
    struct IOControllerImpl *mOuter;
    struct vector<std::pair<long, void (^)(AVAudioIOControllerEvent)>, std::allocator<std::pair<long, void (^)(AVAudioIOControllerEvent)>>> mListeners;
};

struct SMPTETime {
    short _field1;
    short _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    short _field6;
    short _field7;
    short _field8;
    short _field9;
};

struct XPCConnection;

struct __shared_weak_count;

struct atomic<unsigned int> {
    struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> {
        _Atomic unsigned int __a_value;
    } __a_;
};

struct optional<(anonymous namespace)::IOControllerImpl> {
    union {
        char __null_state_;
        struct IOControllerImpl __val_;
    } ;
    _Bool __engaged_;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct shared_ptr<as::client::DeviceTimeClient> {
    struct DeviceTimeClient *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<as::client::XPCConnection> {
    struct XPCConnection *_field1;
    struct __shared_weak_count *_field2;
};

struct synchronized<(anonymous namespace)::ListenerMgr, caulk::mach::unfair_lock, caulk::empty_atomic_interface<(anonymous namespace)::ListenerMgr>> {
    struct unfair_lock mMutex;
    struct ListenerMgr mObject;
};

struct unfair_lock {
    struct os_unfair_lock_s m_lock;
};

struct vector<std::pair<long, void (^)(AVAudioIOControllerEvent)>, std::allocator<std::pair<long, void (^)(AVAudioIOControllerEvent)>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::pair<long, void (^)(AVAudioIOControllerEvent)>*, std::allocator<std::pair<long, void (^)(AVAudioIOControllerEvent)>>> {
        void *__value_;
    } __end_cap_;
};

struct weak_ptr<as::client::XPCConnection> {
    struct XPCConnection *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

// Template types
typedef struct shared_ptr<as::client::DeviceTimeClient> {
    struct DeviceTimeClient *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_a9ec9eae;

typedef struct shared_ptr<as::client::XPCConnection> {
    struct XPCConnection *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_fa4fc137;


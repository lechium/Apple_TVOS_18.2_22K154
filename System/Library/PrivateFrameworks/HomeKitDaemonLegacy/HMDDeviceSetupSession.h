//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMAccessoryCategory, HMDDeviceSetupSessionInternal, HMDHomeManager, HMFActivity, NSError, NSObject, NSString, NSUUID;
@protocol HMDDeviceSetupSessionDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDeviceSetupSession : HMFObject
{
    HMFActivity *_activity;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    _Bool _open;	// 20 = 0x14
    NSUUID *_accessoryUUID;	// 24 = 0x18
    HMAccessoryCategory *_accessoryCategory;	// 32 = 0x20
    NSString *_accessoryIDSIdentifier;	// 40 = 0x28
    NSString *_setupClientBundleID;	// 48 = 0x30
    unsigned long long _startTime;	// 56 = 0x38
    NSError *_sessionError;	// 64 = 0x40
    unsigned long long _endTime;	// 72 = 0x48
    NSString *_category;	// 80 = 0x50
    id <HMDDeviceSetupSessionDelegate> _delegate;	// 88 = 0x58
    NSUUID *_identifier;	// 96 = 0x60
    HMDHomeManager *_homeManager;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_clientQueue;	// 112 = 0x70
    HMDDeviceSetupSessionInternal *_internal;	// 120 = 0x78
    CDUnknownBlockType _upSecondsFactory;	// 128 = 0x80
}

+ (id)logCategory;	// IMP=0x00100000002c395f
+ (_Bool)isRoleSupported:(long long)arg1;	// IMP=0x00100000002c392b
- (void).cxx_destruct;	// IMP=0x00000000002c29f5
@property(readonly) CDUnknownBlockType upSecondsFactory; // @synthesize upSecondsFactory=_upSecondsFactory;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
@property(readonly, nonatomic) HMDDeviceSetupSessionInternal *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDDeviceSetupSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *category; // @synthesize category=_category;
@property unsigned long long endTime; // @synthesize endTime=_endTime;
@property(copy) NSError *sessionError; // @synthesize sessionError=_sessionError;
@property unsigned long long startTime; // @synthesize startTime=_startTime;
@property(copy) NSString *setupClientBundleID; // @synthesize setupClientBundleID=_setupClientBundleID;
@property(copy) NSString *accessoryIDSIdentifier; // @synthesize accessoryIDSIdentifier=_accessoryIDSIdentifier;
@property(copy) HMAccessoryCategory *accessoryCategory; // @synthesize accessoryCategory=_accessoryCategory;
@property(copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)setupTrackingInfo;	// IMP=0x00000000002c2647
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x00000000002c25d3
- (void)_sendRequestData:(id)arg1;	// IMP=0x00000000002c23ac
- (void)_handleReceiveData:(id)arg1;	// IMP=0x00000000002c230f
- (void)close:(id)arg1;	// IMP=0x00000000002c219c
- (void)_handleClose:(id)arg1;	// IMP=0x00000000002c1fd3
- (void)_closeWithError:(id)arg1;	// IMP=0x00000000002c192e
- (void)updateAccessoryUUIDAndNotifyDelegate:(id)arg1 accessoryIDSIdentifier:(id)arg2 accessoryCategory:(id)arg3;	// IMP=0x00000000002c1773
- (void)open;	// IMP=0x00000000002c16a2
- (void)__registerForMessages;	// IMP=0x00000000002c1553
- (id)messageDispatcher;	// IMP=0x00000000002c1503
- (id)messageDestination;	// IMP=0x00000000002c149a
@property(readonly) long long role;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002c1373
@property(readonly) unsigned long long hash;
- (id)initWithIdentifier:(id)arg1 role:(long long)arg2 homeManager:(id)arg3 upSecondsFactory:(CDUnknownBlockType)arg4 userDefaults:(id)arg5;	// IMP=0x00000000002c0ec7
- (id)initWithIdentifier:(id)arg1 role:(long long)arg2 homeManager:(id)arg3;	// IMP=0x00000000002c0e21
- (id)init;	// IMP=0x00000000002c0d79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


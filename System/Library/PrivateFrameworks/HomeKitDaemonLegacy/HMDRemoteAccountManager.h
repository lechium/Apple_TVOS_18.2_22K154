//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBackingStore, NSArray, NSMutableArray, NSMutableSet, NSObject, NSString;
@protocol HMDIDSService, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDRemoteAccountManager : HMFObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct os_unfair_recursive_lock_s _lock;	// 16 = 0x10
    NSMutableSet *_accounts;	// 24 = 0x18
    _Bool _monitoring;	// 32 = 0x20
    id <HMDIDSService> _service;	// 40 = 0x28
    NSMutableArray *_resolveOperations;	// 48 = 0x30
    HMDBackingStore *_backingStore;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00100000007d30d7
+ (id)sharedManager;	// IMP=0x00100000007d3074
- (void).cxx_destruct;	// IMP=0x00000000007d194d
@property(retain, nonatomic) HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) NSMutableArray *resolveOperations; // @synthesize resolveOperations=_resolveOperations;
@property(nonatomic, getter=isMonitoring) _Bool monitoring; // @synthesize monitoring=_monitoring;
@property(readonly, nonatomic) id <HMDIDSService> service; // @synthesize service=_service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x00000000007d17f0
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000007d1789
- (void)processAccountModelRemove:(id)arg1 message:(id)arg2;	// IMP=0x00000000007d160b
- (void)processAccountModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000007d1516
- (_Bool)isCurrentDeviceDataOwnerForDevice:(id)arg1;	// IMP=0x00000000007d150e
- (_Bool)shouldDevice:(id)arg1 processModel:(id)arg2 actions:(id)arg3;	// IMP=0x00000000007d1506
- (_Bool)shouldAccount:(id)arg1 pushbackModel:(id)arg2 actions:(id)arg3;	// IMP=0x00000000007d14fe
- (_Bool)shouldSyncDevice:(id)arg1;	// IMP=0x00000000007d14aa
- (_Bool)shouldSyncAccount:(id)arg1;	// IMP=0x00000000007d1495
- (_Bool)shouldCacheAccount:(id)arg1;	// IMP=0x00000000007d1480
- (void)_resolveAccountForHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000007d13b4
- (void)removeAccount:(id)arg1;	// IMP=0x00000000007d12c1
- (void)addAccount:(id)arg1;	// IMP=0x00000000007d0978
@property(retain, nonatomic) NSArray *accounts;
- (id)accountForDeviceHandle:(id)arg1;	// IMP=0x00000000007d0421
- (id)accountForModelIdentifier:(id)arg1;	// IMP=0x00000000007d01fe
- (id)accountForHandle:(id)arg1;	// IMP=0x00000000007cffdb
- (id)accountForIdentifier:(id)arg1;	// IMP=0x00000000007cfdb8
- (void)reset;	// IMP=0x00000000007cfcfe
- (void)stop;	// IMP=0x00000000007cfcac
- (void)start;	// IMP=0x00000000007cfc5a
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

- (id)initWithIDSService:(id)arg1;	// IMP=0x00000000007cfa37
- (id)init;	// IMP=0x00000000007cf98f
- (id)deviceForSenderContext:(id)arg1;	// IMP=0x00000000007d32f2
- (id)accountForSenderContext:(id)arg1;	// IMP=0x00000000007d329b
- (void)__handleSendMessageFailureWithError:(id)arg1 destination:(id)arg2;	// IMP=0x00000000007d4be4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDApplicationData, HMDHome, HMFMessageDispatcher, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDServiceGroup : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_serviceUUIDs;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    NSUUID *_spiClientIdentifier;	// 40 = 0x28
    NSMutableDictionary *_serviceMapping;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    HMDHome *_home;	// 64 = 0x40
    HMFMessageDispatcher *_msgDispatcher;	// 72 = 0x48
    HMDApplicationData *_appData;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x00100000003c435c
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000003c4354
- (void).cxx_destruct;	// IMP=0x00000000003c3ca0
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableDictionary *serviceMapping; // @synthesize serviceMapping=_serviceMapping;
@property(readonly, copy) NSUUID *spiClientIdentifier; // @synthesize spiClientIdentifier=_spiClientIdentifier;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)logIdentifier;	// IMP=0x00000000003c3ba6
- (void)fixupServiceGroup;	// IMP=0x00000000003c380c
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x00000000003c36fc
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000003c3303
- (void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000003c327f
- (void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000003c3009
- (void)_handleUpdateServicesTransaction:(id)arg1;	// IMP=0x00000000003c259c
- (void)_transactionServiceGroupUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000003c251f
- (id)updateServiceGroupWithModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000003c22cb
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000003c20bb
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000003c1e64
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleRemoveServiceRequest:(id)arg1;	// IMP=0x00000000003c1852
- (void)_handleAddServiceRequest:(id)arg1;	// IMP=0x00000000003c0de0
- (void)_registerForMessages;	// IMP=0x00000000003c0a1c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003c0728
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003c0183
- (void)removeService:(id)arg1;	// IMP=0x00000000003bff78
- (void)removeServicesForAccessory:(id)arg1;	// IMP=0x00000000003bfdf1
- (void)setServiceIfPresent:(id)arg1;	// IMP=0x00000000003bfcac
- (void)fixupServicesForReplacementAccessory:(id)arg1;	// IMP=0x00000000003bfb67
- (void)_handleRenameRequest:(id)arg1;	// IMP=0x00000000003bf720
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSArray *serviceUUIDs;
- (id)dumpState;	// IMP=0x00000000003beff2
- (void)configure:(id)arg1 queue:(id)arg2;	// IMP=0x00000000003bef82
- (void)dealloc;	// IMP=0x00000000003beebc
- (id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 queue:(id)arg4;	// IMP=0x00000000003bec5c
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


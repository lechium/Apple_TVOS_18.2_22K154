//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDApplicationData, HMDHome, HMFMessageDispatcher, NSDictionary, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDRoom : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    NSUUID *_spiClientIdentifier;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    HMFMessageDispatcher *_msgDispatcher;	// 56 = 0x38
    HMDApplicationData *_appData;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00100000008f9e28
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000008f9e20
+ (id)messageBindingsForDispatcher:(id)arg1;	// IMP=0x00100000008f9cd5
- (void).cxx_destruct;	// IMP=0x00000000008f9b5e
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSUUID *spiClientIdentifier; // @synthesize spiClientIdentifier=_spiClientIdentifier;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)attributeDescriptions;	// IMP=0x00000000008f997d
- (id)privateDescription;	// IMP=0x00000000008f996b
- (id)logIdentifier;	// IMP=0x00000000008f991b
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x00000000008f9748
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000008f9508
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000008f9272
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

- (id)messageDestination;	// IMP=0x00000000008f91f7
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008f907c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008f8ef5
- (void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000008f8e71
- (void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000008f8bfb
- (void)_handleUpdateRoomModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000008f866d
- (void)_handleRenameRequest:(id)arg1;	// IMP=0x00000000008f821d
- (void)_registerForMessages;	// IMP=0x00000000008f80e8
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)dumpState;	// IMP=0x00000000008f7e7e
@property(readonly, nonatomic) NSString *serializedIdentifier;
- (void)configure:(id)arg1 queue:(id)arg2;	// IMP=0x00000000008f7d0e
- (void)dealloc;	// IMP=0x00000000008f7c48
- (id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3;	// IMP=0x00000000008f7a77
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


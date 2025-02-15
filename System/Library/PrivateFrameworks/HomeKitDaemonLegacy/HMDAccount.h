//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CNContact, HMDAccountHandle, HMDAccountIdentifier, HMDDevice, NSArray, NSMutableSet, NSObject, NSSet, NSString, NSUUID;
@protocol HMDAccountManager, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccount : HMFObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSSet *_handles;	// 24 = 0x18
    NSMutableSet *_devices;	// 32 = 0x20
    NSString *_appleAccountSenderCorrelationIdentifier;	// 40 = 0x28
    HMDAccountIdentifier *_identifier;	// 48 = 0x30
    id <HMDAccountManager> _manager;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000004c30ac
+ (id)logCategory;	// IMP=0x00100000004c307c
+ (id)accountWithHandle:(id)arg1;	// IMP=0x00100000004c2f94
- (void).cxx_destruct;	// IMP=0x00000000004c2364
@property __weak id <HMDAccountManager> manager; // @synthesize manager=_manager;
@property(readonly, copy) HMDAccountIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)modelBackedObjects;	// IMP=0x00000000004c2116
- (id)currentDeviceModelsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x00000000004c1f87
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x00000000004c1c25
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x00000000004c1b34
@property(readonly, copy, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property(readonly) Class modelClass;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000004c14d0
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000004c0983
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004c07cd
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004c01f9
- (_Bool)mergeObject:(id)arg1;	// IMP=0x00000000004bf5f6
- (_Bool)shouldMergeObject:(id)arg1;	// IMP=0x00000000004bf533
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000004bf4cc
- (id)logIdentifier;	// IMP=0x00000000004bf453
- (void)removeDevice:(id)arg1;	// IMP=0x00000000004bf1d3
- (void)addDevice:(id)arg1;	// IMP=0x00000000004bef6d
- (id)deviceWithModelIdentifier:(id)arg1;	// IMP=0x00000000004bed77
- (id)deviceForHandle:(id)arg1;	// IMP=0x00000000004beb54
- (id)deviceForIdentifier:(id)arg1;	// IMP=0x00000000004be931
@property(readonly, copy) NSArray *devices;
- (id)accountHandleWithModelIdentifier:(id)arg1;	// IMP=0x00000000004be6e9
- (void)_repairDevicesWithStaleHandle:(id)arg1;	// IMP=0x00000000004bdf7a
- (void)removeHandle:(id)arg1;	// IMP=0x00000000004bdd0a
- (void)addHandle:(id)arg1;	// IMP=0x00000000004bda8a
- (void)setHandles:(id)arg1;	// IMP=0x00000000004bd7b5
@property(readonly, copy) HMDAccountHandle *primaryHandle;
@property(readonly, copy) NSArray *handles;
- (void)setAppleAccountSenderCorrelationIdentifier:(id)arg1;	// IMP=0x00000000004bd395
- (id)appleAccountSenderCorrelationIdentifier;	// IMP=0x00000000004bd34f
@property(copy) NSString *senderCorrelationIdentifier;
@property(readonly, copy) CNContact *contact;
@property(readonly, copy) NSString *name;
@property(readonly) _Bool shouldCache;
@property(readonly, getter=isAuthenticated) _Bool authenticated;
- (id)attributeDescriptions;	// IMP=0x00000000004bce33
- (id)shortDescription;	// IMP=0x00000000004bcd72
- (void)isOfKnownPersonWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000004bcc41
@property(readonly, nonatomic, getter=isPresentInContacts) _Bool presentInContacts;
- (_Bool)isRelatedToAccount:(id)arg1;	// IMP=0x00000000004bc868
- (_Bool)isEqualToAccount:(id)arg1;	// IMP=0x00000000004bc7c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004bc737
@property(readonly) unsigned long long hash;
- (id)initWithObjectModel:(id)arg1;	// IMP=0x00000000004bc693
- (id)initWithIdentifier:(id)arg1 handles:(id)arg2 devices:(id)arg3;	// IMP=0x00000000004bc102
- (id)init;	// IMP=0x00000000004bc05a
@property(readonly) HMDDevice *currentDevice;
@property(readonly, getter=isCurrentAccount) _Bool currentAccount;
- (_Bool)hasFamilyMember:(id)arg1;	// IMP=0x00000000004c31b7
- (void)isPresentInFamilyCircleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000004c30eb
@property(readonly, copy) NSArray *identities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


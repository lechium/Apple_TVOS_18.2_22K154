//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAssistantAccessControlModel, HMDUser, NSArray, NSMutableSet, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAssistantAccessControl : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableSet *_appleMediaAccessories;	// 16 = 0x10
    NSMutableSet *_hapAccessoryIdentifiers;	// 24 = 0x18
    _Bool _enabled;	// 32 = 0x20
    _Bool _activityNotificationsEnabledForPersonalRequests;	// 33 = 0x21
    HMDUser *_user;	// 40 = 0x28
    unsigned long long _cachedHash;	// 48 = 0x30
    unsigned long long _options;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_clientQueue;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000b1df20
+ (id)logCategory;	// IMP=0x0010000000b1def0
+ (id)modelIDNamespace;	// IMP=0x0010000000b1dec0
+ (id)accessControlWithMessage:(id)arg1 user:(id)arg2 currentAccessories:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000b1d234
+ (_Bool)isAccessorySupported:(id)arg1;	// IMP=0x0010000000b1d0e4
- (void).cxx_destruct;	// IMP=0x0000000000b1b122
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b1abec
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b1a7fa
- (id)logIdentifier;	// IMP=0x0000000000b1a7aa
- (id)assistantAccessControlModelWithRemovedAccessories:(id)arg1;	// IMP=0x0000000000b1a1e2
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000b1a1dc
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000b1967a
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;	// IMP=0x0000000000b194e4
@property(readonly, copy) HMDAssistantAccessControlModel *model;
@property(readonly, copy) NSUUID *modelID;
- (void)notifyClientOfUpdateWithMessage:(id)arg1;	// IMP=0x0000000000b19182
- (void)removeAccessoriesAddedByOldController:(id)arg1;	// IMP=0x0000000000b190ca
- (void)handleRemovedAccessory:(id)arg1;	// IMP=0x0000000000b19012
- (void)removeAccessory:(id)arg1;	// IMP=0x0000000000b18d28
- (void)addAccessory:(id)arg1;	// IMP=0x0000000000b18ac2
- (void)setAppleMediaAccessories:(id)arg1;	// IMP=0x0000000000b18a55
- (void)setHapAccessoryIdentifiers:(id)arg1;	// IMP=0x0000000000b189e8
@property(readonly, copy) NSArray *accessories;
@property(getter=areActivityNotificationsEnabledForPersonalRequests) _Bool activityNotificationsEnabledForPersonalRequests; // @synthesize activityNotificationsEnabledForPersonalRequests=_activityNotificationsEnabledForPersonalRequests;
@property unsigned long long options; // @synthesize options=_options;
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000b18750
@property(readonly, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property __weak HMDUser *user; // @synthesize user=_user;
@property(readonly) unsigned long long cachedHash; // @synthesize cachedHash=_cachedHash;
@property(readonly, copy) NSString *propertyDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b182b0
@property(readonly) unsigned long long hash;
- (void)dealloc;	// IMP=0x0000000000b18229
- (void)configure;	// IMP=0x0000000000b18124
- (id)initWithUser:(id)arg1;	// IMP=0x0000000000b180f2
- (id)initWithUser:(id)arg1 appleAccessories:(id)arg2 hapAccessoryIdentifiers:(id)arg3 enabled:(_Bool)arg4 activityNotificationsEnabledForPersonalRequests:(_Bool)arg5;	// IMP=0x0000000000b17f30
- (id)initWithUser:(id)arg1 appleAccessories:(id)arg2 enabled:(_Bool)arg3;	// IMP=0x0000000000b17f04
- (id)initWithUser:(id)arg1 model:(id)arg2;	// IMP=0x0000000000b17ba7
- (id)init;	// IMP=0x0000000000b17aff

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end


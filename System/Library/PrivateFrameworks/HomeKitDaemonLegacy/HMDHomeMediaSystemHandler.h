//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMDHomeMediaSystemControllerMessageHandler, HMDStereoPairSettingsController, HMFMessageDispatcher, NSArray, NSMutableDictionary, NSNotificationCenter, NSObject, NSString, NSUUID;
@protocol HMDHomeMediaSystemHandlerDataSource, HMDHomeMediaSystemHandlerDelegate, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDHomeMediaSystemHandler : HMFObject
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSMutableDictionary *_uuidToMediaSystems;	// 24 = 0x18
    id <HMDHomeMediaSystemHandlerDataSource> _dataSource;	// 32 = 0x20
    id <HMDHomeMediaSystemHandlerDelegate> _delegate;	// 40 = 0x28
    NSUUID *_parentUUID;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    HMFMessageDispatcher *_messageDispatcher;	// 64 = 0x40
    NSNotificationCenter *_notificationCenter;	// 72 = 0x48
    HMDHome *_home;	// 80 = 0x50
    HMDHomeMediaSystemControllerMessageHandler *_messageHandler;	// 88 = 0x58
    HMDStereoPairSettingsController *_stereoPairSettingsController;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000003b9293
+ (id)logCategory;	// IMP=0x00100000003b9263
- (void).cxx_destruct;	// IMP=0x00000000003b8a75
@property(retain, nonatomic) HMDStereoPairSettingsController *stereoPairSettingsController; // @synthesize stereoPairSettingsController=_stereoPairSettingsController;
@property(retain) HMDHomeMediaSystemControllerMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
@property __weak id <HMDHomeMediaSystemHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDHomeMediaSystemHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)destinationForMediaSystem:(id)arg1;	// IMP=0x00000000003b8890
- (void)_userAssistantAccessControlDidUpdate:(id)arg1 accessories:(id)arg2;	// IMP=0x00000000003b82b1
- (id)_currentMediaSystemIfPrimary;	// IMP=0x00000000003b80db
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003b7d20
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003b7a51
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;	// IMP=0x00000000003b79cc
- (id)uuidToMediaSystems;	// IMP=0x00000000003b79b7
- (id)eventStoreReadHandle;	// IMP=0x00000000003b793d
- (id)eventForwarder;	// IMP=0x00000000003b78c3
- (id)localAndRemoteSubscriptionProvider;	// IMP=0x00000000003b7849
- (id)backingStoreObjectsForVersion:(long long)arg1;	// IMP=0x00000000003b7666
- (void)_handleUpdateMediaSystemModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000003b73b7
- (void)_handleRemoveMediaSystemModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000003b6eb9
- (void)confirmPrimaryResidentIfFirstMediaSystem;	// IMP=0x00000000003b6c7d
- (void)subscribeToSettingsForNewlyAddedMediaSystem:(id)arg1;	// IMP=0x00000000003b6b0f
- (void)addMediaSystem:(id)arg1;	// IMP=0x00000000003b690d
- (void)_handleAddMediaSystemModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000003b63da
- (void)addMediaSystemWithGroupIdentifier:(id)arg1 usingData:(id)arg2;	// IMP=0x00000000003b6095
- (void)addMediaSystemsWithIdentifiers:(id)arg1 usingData:(id)arg2;	// IMP=0x00000000003b5ffe
- (id)mediaSystemData:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000000003b5f5c
- (id)identifiersInMediaSystemData:(id)arg1;	// IMP=0x00000000003b5f40
- (void)mergeMediaSystemData:(id)arg1;	// IMP=0x00000000003b5dbe
- (void)messageHandlerRemoveMediaSystem:(id)arg1 builderSession:(id)arg2 message:(id)arg3;	// IMP=0x00000000003b5a4d
- (void)messageHandlerUpdateMediaSystem:(id)arg1 configuredName:(id)arg2 leftUUID:(id)arg3 leftAccessoryUUID:(id)arg4 rightUUID:(id)arg5 rightAccessoryUUID:(id)arg6 builderSession:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000003b51c5
- (void)messageHandlerAddMediaSystem:(id)arg1 configuredName:(id)arg2 leftUUID:(id)arg3 leftAccessoryUUID:(id)arg4 rightUUID:(id)arg5 rightAccessoryUUID:(id)arg6 builderSession:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000003b3fc3
- (void)routeMediaSystemWithMessage:(id)arg1;	// IMP=0x00000000003b3f5a
- (id)processedMediaSystemBuilderMessageFor:(id)arg1;	// IMP=0x00000000003b3ee0
- (id)mediaSystemForAccessory:(id)arg1;	// IMP=0x00000000003b3e10
- (void)configure:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3 queue:(id)arg4 messageDispatcher:(id)arg5 notificationCenter:(id)arg6;	// IMP=0x00000000003b39bd
- (id)logIdentifier;	// IMP=0x00000000003b396d
- (id)attributeDescriptions;	// IMP=0x00000000003b3828
- (id)privateDescription;	// IMP=0x00000000003b3816
- (void)notifyOfRemovedMediaSystem:(id)arg1;	// IMP=0x00000000003b36ea
- (void)unsubscribeToSettingsForMediaSystem:(id)arg1;	// IMP=0x00000000003b357c
- (void)handleRemovedMediaSystem:(id)arg1;	// IMP=0x00000000003b34b9
- (void)removeMediaSystem:(id)arg1;	// IMP=0x00000000003b32c6
- (void)updateMediaSystem:(id)arg1;	// IMP=0x00000000003b3148
- (id)mediaSystemWithUUID:(id)arg1;	// IMP=0x00000000003b30bf
- (id)filteredMediaSystems;	// IMP=0x00000000003b3068
@property(readonly, copy) NSArray *mediaSystems;
- (id)initWithMediaSystems:(id)arg1;	// IMP=0x00000000003b2f2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


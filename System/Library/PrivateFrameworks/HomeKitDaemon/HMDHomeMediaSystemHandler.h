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

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000053a77a
+ (id)logCategory;	// IMP=0x001000000053a74a
- (void).cxx_destruct;	// IMP=0x0000000000539fd2
@property(retain, nonatomic) HMDStereoPairSettingsController *stereoPairSettingsController; // @synthesize stereoPairSettingsController=_stereoPairSettingsController;
@property(retain) HMDHomeMediaSystemControllerMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
@property __weak id <HMDHomeMediaSystemHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDHomeMediaSystemHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)destinationForMediaSystem:(id)arg1;	// IMP=0x0000000000539ded
- (void)_userAssistantAccessControlDidUpdate:(id)arg1 accessories:(id)arg2;	// IMP=0x000000000053980e
- (id)_currentMediaSystemIfPrimary;	// IMP=0x0000000000539638
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005395c5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005392f6
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;	// IMP=0x0000000000539271
- (id)uuidToMediaSystems;	// IMP=0x000000000053925c
- (id)eventStoreReadHandle;	// IMP=0x00000000005391e2
- (id)eventForwarder;	// IMP=0x0000000000539168
- (id)localAndRemoteSubscriptionProvider;	// IMP=0x00000000005390ee
- (id)backingStoreObjectsForVersion:(long long)arg1;	// IMP=0x0000000000538f0b
- (void)_handleUpdateMediaSystemModel:(id)arg1 message:(id)arg2;	// IMP=0x0000000000538c3d
- (void)_handleRemoveMediaSystemModel:(id)arg1 message:(id)arg2;	// IMP=0x000000000053874c
- (void)confirmPrimaryResidentIfFirstMediaSystem;	// IMP=0x0000000000538510
- (void)subscribeToSettingsForNewlyAddedMediaSystem:(id)arg1;	// IMP=0x00000000005383a2
- (void)addMediaSystem:(id)arg1;	// IMP=0x00000000005381a0
- (void)_handleAddMediaSystemModel:(id)arg1 message:(id)arg2;	// IMP=0x0000000000537d32
- (void)addMediaSystemWithGroupIdentifier:(id)arg1 usingData:(id)arg2;	// IMP=0x00000000005379ed
- (void)addMediaSystemsWithIdentifiers:(id)arg1 usingData:(id)arg2;	// IMP=0x0000000000537956
- (id)mediaSystemData:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000000005378b4
- (id)identifiersInMediaSystemData:(id)arg1;	// IMP=0x0000000000537898
- (void)mergeMediaSystemData:(id)arg1;	// IMP=0x0000000000537716
- (void)messageHandlerRemoveMediaSystem:(id)arg1 builderSession:(id)arg2 message:(id)arg3;	// IMP=0x00000000005373a5
- (void)messageHandlerUpdateMediaSystem:(id)arg1 configuredName:(id)arg2 leftUUID:(id)arg3 leftAccessoryUUID:(id)arg4 rightUUID:(id)arg5 rightAccessoryUUID:(id)arg6 builderSession:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000536b1d
- (void)messageHandlerAddMediaSystem:(id)arg1 configuredName:(id)arg2 leftUUID:(id)arg3 leftAccessoryUUID:(id)arg4 rightUUID:(id)arg5 rightAccessoryUUID:(id)arg6 builderSession:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000535a68
- (void)routeMediaSystemWithMessage:(id)arg1;	// IMP=0x00000000005359ff
- (id)processedMediaSystemBuilderMessageFor:(id)arg1;	// IMP=0x0000000000535985
- (id)mediaSystemForAccessory:(id)arg1;	// IMP=0x00000000005358b5
- (void)configure:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3 queue:(id)arg4 messageDispatcher:(id)arg5 notificationCenter:(id)arg6;	// IMP=0x0000000000535462
- (id)logIdentifier;	// IMP=0x0000000000535412
- (id)attributeDescriptions;	// IMP=0x00000000005352cd
- (id)privateDescription;	// IMP=0x00000000005352bb
- (void)notifyOfRemovedMediaSystem:(id)arg1;	// IMP=0x000000000053518f
- (void)unsubscribeToSettingsForMediaSystem:(id)arg1;	// IMP=0x0000000000535021
- (void)handleRemovedMediaSystem:(id)arg1;	// IMP=0x0000000000534f5e
- (void)removeMediaSystem:(id)arg1;	// IMP=0x0000000000534d6b
- (void)updateMediaSystem:(id)arg1;	// IMP=0x0000000000534bed
- (id)mediaSystemWithUUID:(id)arg1;	// IMP=0x0000000000534b64
- (id)filteredMediaSystems;	// IMP=0x0000000000534b0d
@property(readonly, copy) NSArray *mediaSystems;
- (id)initWithMediaSystems:(id)arg1;	// IMP=0x00000000005349d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


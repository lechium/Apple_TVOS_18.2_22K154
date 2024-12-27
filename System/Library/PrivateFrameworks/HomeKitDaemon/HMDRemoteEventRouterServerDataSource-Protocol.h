//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCurrentAccessorySetupMetricDispatcher, HMDDevice, HMDRemoteEventRouterServer, HMFMessage, NSArray, NSString, NSUUID;
@protocol HMDRemoteEventAccessControlProvider, HMDRemoteEventRouterUserAccessControlProvider;

@protocol HMDRemoteEventRouterServerDataSource <NSObject>
- (NSUUID *)currentAccessoryHomeUUID;
- (HMDCurrentAccessorySetupMetricDispatcher *)currentAccessorySetupMetricDispatcher;
- (NSArray *)expandedTopicsWithTopics:(NSArray *)arg1;
- (HMDDevice *)messageTargetForDeviceIdentifier:(NSUUID *)arg1;
- (_Bool)isDeviceIdentifierPrimaryResident:(NSUUID *)arg1;
- (_Bool)isCurrentDevicePrimaryResident;
- (_Bool)canTopicBeForwardedToPrimaryFromResident:(NSString *)arg1;
- (_Bool)shouldAllowTopic:(NSString *)arg1 forDeviceWithMessageIdentifier:(NSUUID *)arg2;
- (id <HMDRemoteEventAccessControlProvider>)remoteEventAccessControlProvider;
- (id <HMDRemoteEventRouterUserAccessControlProvider>)routerServerUserAccessControlProviderForIdentifier:(NSUUID *)arg1;
- (NSUUID *)routerServerUserAccessControlProviderIdentifierForMessage:(HMFMessage *)arg1;
- (id)primaryResidentChangeMonitorForRouterServer:(HMDRemoteEventRouterServer *)arg1;
@end


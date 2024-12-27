//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDAccessorySettingsLocalMessageHandler, HMDAccessorySettingsMessenger, HMFMessageDispatcher, NSUUID;
@protocol HMDMessageRouter, HMMLogEventSubmitting;

@protocol HMDAccessorySettingsMessengerFactory <NSObject>
- (HMDAccessorySettingsMessenger *)createAccessorySettingsMessengerWithMessageTargetUUID:(NSUUID *)arg1 messageDispatcher:(HMFMessageDispatcher *)arg2 messageRouter:(id <HMDMessageRouter>)arg3 messageHandler:(HMDAccessorySettingsLocalMessageHandler *)arg4 logEventSubmitter:(id <HMMLogEventSubmitting>)arg5;
@end


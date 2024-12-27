//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDMediaSession, NSDictionary, NSNotificationCenter, NSString;
@protocol HMEEventForwarder;

__attribute__((visibility("hidden")))
@interface HMDMediaProfile
{
    struct hmf_unfair_data_lock_s _lock;	// 16 = 0x10
    HMDMediaSession *_mediaSession;	// 24 = 0x18
    NSNotificationCenter *_notificationCenter;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000a03d22
+ (id)logCategory;	// IMP=0x0010000000a03cf2
+ (id)uniqueIdentifierFromAccessory:(id)arg1;	// IMP=0x0010000000a03c90
+ (id)uniqueIdentifierFromAccessoryUUID:(id)arg1;	// IMP=0x0010000000a03bac
+ (id)sessionNamespace;	// IMP=0x0010000000a03b7c
+ (id)namespace;	// IMP=0x0010000000a03b4c
- (void).cxx_destruct;	// IMP=0x0000000000a02c8f
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a027cd
- (void)sessionAudioControlUpdated:(id)arg1;	// IMP=0x0000000000a023d8
- (void)handleSessionVolumeUpdatedNotification:(id)arg1;	// IMP=0x0000000000a01f4a
- (void)handleSessionPlaybackStateUpdatedNotification:(id)arg1;	// IMP=0x0000000000a01ebc
- (void)handleSessionUpdatedNotification:(id)arg1;	// IMP=0x0000000000a01af6
- (void)_handleSetPower:(id)arg1;	// IMP=0x0000000000a01af0
- (void)_handleSetValue:(id)arg1 withRequestProperty:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a01884
- (void)handleSetValue:(id)arg1 withRequestProperty:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a01779
- (id)parseAndSetPlaybackStateFromResponsePayload:(id)arg1 mediaSessionState:(id)arg2 outDidUpdateMediaSessionState:(_Bool *)arg3;	// IMP=0x0000000000a016da
- (void)_sessionPlaybackStateUpdated:(id)arg1 notifyXPCClients:(_Bool)arg2;	// IMP=0x0000000000a00087
- (void)updateWithResponses:(id)arg1 requestMessageInformation:(id)arg2;	// IMP=0x00000000009ffec9
- (void)_handleMediaResponses:(id)arg1 message:(id)arg2;	// IMP=0x00000000009ffdeb
- (void)_handleMediaSessionSetAudioControl:(id)arg1;	// IMP=0x00000000009ffd67
- (_Bool)_updateAudioControl:(id)arg1;	// IMP=0x00000000009ffc1f
- (void)_handleRefreshPlayback:(id)arg1;	// IMP=0x00000000009ffb9b
- (_Bool)_updateRefreshPlayback:(id)arg1;	// IMP=0x00000000009ffb1c
- (void)_handleSetPlayback:(id)arg1;	// IMP=0x00000000009ffa98
- (_Bool)_updatePlayback:(id)arg1;	// IMP=0x00000000009ffa19
@property(retain) HMDMediaSession *mediaSession; // @synthesize mediaSession=_mediaSession;
@property(readonly, nonatomic) unsigned long long capability;
@property(readonly) __weak id <HMEEventForwarder> eventForwarder;
- (void)unregisterForNotifications;	// IMP=0x00000000009ff73c
- (void)registerForNotifications;	// IMP=0x00000000009ff690
- (void)registerForMessages;	// IMP=0x00000000009ff49e
- (void)configureWithMessageDispatcher:(id)arg1 configurationTracker:(id)arg2;	// IMP=0x00000000009ff3b3
- (id)initWithAccessory:(id)arg1;	// IMP=0x00000000009ff337
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 workQueue:(id)arg4;	// IMP=0x00000000009ff260
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 workQueue:(id)arg4 notificationCenter:(id)arg5;	// IMP=0x00000000009ff1c2
@property(readonly, copy) NSString *mediaRouteID;
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


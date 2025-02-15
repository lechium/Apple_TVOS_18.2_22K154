//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;
@protocol CSDAVConference, OS_dispatch_queue;

@interface CSDRelayConferenceInterface : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_conferenceConnections;	// 16 = 0x10
    NSMutableSet *_conferencesAwaitingConnectionClose;	// 24 = 0x18
    CDUnknownBlockType _conferenceCreationBlock;	// 32 = 0x20
    double _connectionTimeout;	// 40 = 0x28
    double _closeConnectionTimeout;	// 48 = 0x30
    double _prepareToStopTimeout;	// 56 = 0x38
}

+ (id)sharedInstanceWithQueue:(id)arg1;	// IMP=0x00200000000dae86
+ (id)sharedInstance;	// IMP=0x00100000000dae66
- (void).cxx_destruct;	// IMP=0x00200000000df308
@property(nonatomic) double prepareToStopTimeout; // @synthesize prepareToStopTimeout=_prepareToStopTimeout;
@property(nonatomic) double closeConnectionTimeout; // @synthesize closeConnectionTimeout=_closeConnectionTimeout;
@property(nonatomic) double connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property(copy, nonatomic) CDUnknownBlockType conferenceCreationBlock; // @synthesize conferenceCreationBlock=_conferenceCreationBlock;
@property(retain, nonatomic) NSMutableSet *conferencesAwaitingConnectionClose; // @synthesize conferencesAwaitingConnectionClose=_conferencesAwaitingConnectionClose;
@property(retain, nonatomic) NSMutableArray *conferenceConnections; // @synthesize conferenceConnections=_conferenceConnections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)conference:(id)arg1 outputLevelChangedTo:(float)arg2;	// IMP=0x00100000000df1d3
- (void)conference:(id)arg1 inputLevelChangedTo:(float)arg2;	// IMP=0x00100000000df14a
- (void)conference:(id)arg1 outputFrequencyLevelChangedTo:(id)arg2;	// IMP=0x00100000000df0d6
- (void)conference:(id)arg1 inputFrequencyLevelChangedTo:(id)arg2;	// IMP=0x00100000000df062
- (void)sendingAudioChangedForConference:(id)arg1;	// IMP=0x00100000000defbb
- (void)mutedChangedForConference:(id)arg1;	// IMP=0x00100000000def14
- (void)connectionClosedForConference:(id)arg1;	// IMP=0x00100000000dee67
- (void)conference:(id)arg1 endedWithReason:(long long)arg2 error:(id)arg3;	// IMP=0x00100000000deaf0
- (void)conferenceStarted:(id)arg1;	// IMP=0x00100000000de93e
- (void)conferenceFinishedPreparing:(id)arg1;	// IMP=0x00100000000de732
- (void)conference:(id)arg1 didReceiveData:(id)arg2 forCallID:(long long)arg3;	// IMP=0x00100000000de4b9
- (void)_postDidCloseNotificationForConference:(id)arg1;	// IMP=0x00100000000de3e0
- (void)_postDidCloseNotificationForConferenceIfNecessary:(id)arg1;	// IMP=0x00100000000de325
- (void)_stopConference:(id)arg1;	// IMP=0x00100000000de19d
- (void)_cleanUpConferenceConnection:(id)arg1 error:(id)arg2;	// IMP=0x00100000000ddce5
- (void)_cleanUpAllConferenceConnectionsForConference:(id)arg1 withError:(id)arg2;	// IMP=0x00100000000ddb7a
- (void)_prepareConferenceForConferenceConnection:(id)arg1 remoteInviteDictionary:(id)arg2;	// IMP=0x00100000000dd960
@property(readonly, nonatomic) id <CSDAVConference> activeConference;
- (id)_conferenceConnectionsForConference:(id)arg1;	// IMP=0x00100000000dd4c3
- (id)conferenceConnectionForIdentifier:(id)arg1;	// IMP=0x00100000000dd2c8
- (id)activeConferenceConnectionForIdentifier:(id)arg1;	// IMP=0x00100000000dd03d
- (void)stopConferenceForIdentifier:(id)arg1;	// IMP=0x00100000000dce9c
- (void)prepareToStopConferenceForIdentifier:(id)arg1;	// IMP=0x00100000000dc97e
- (void)setConferenceActiveForIdentifier:(id)arg1;	// IMP=0x00100000000dc818
- (void)updateConferenceForIdentifier:(id)arg1 isUsingBaseband:(_Bool)arg2 disableAudio:(_Bool)arg3 isTinCan:(_Bool)arg4;	// IMP=0x00100000000dc54b
- (void)sendData:(id)arg1 throughConferenceForIdentifier:(id)arg2;	// IMP=0x00100000000dc3f9
- (void)startConferenceForIdentifier:(id)arg1 usingTransport:(id)arg2 remoteInviteDictionary:(id)arg3 didStartHandler:(CDUnknownBlockType)arg4 didStopHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000dbfa9
- (void)prepareConferenceForCall:(id)arg1 remoteInviteDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000dbed6
- (void)prepareConferenceConnection:(id)arg1 remoteInviteDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000db9d6
- (void)setSendingAudio:(_Bool)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000000db7cf
- (long long)spatialAudioSourceIdentifierForIdentifier:(id)arg1;	// IMP=0x00100000000db704
- (long long)outputAudioPowerSpectrumTokenForIdentifier:(id)arg1;	// IMP=0x00100000000db639
- (long long)inputAudioPowerSpectrumTokenForIdentifier:(id)arg1;	// IMP=0x00100000000db56e
- (_Bool)isSendingAudioForIdentifier:(id)arg1;	// IMP=0x00100000000db4a3
- (void)setMuted:(_Bool)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000000db289
- (_Bool)isMutedForIdentifier:(id)arg1;	// IMP=0x00100000000db1be
- (void)uplinkMutedStatusChanged:(id)arg1;	// IMP=0x00100000000db135
- (void)dealloc;	// IMP=0x00100000000db0c0
- (id)initWithSerialQueue:(id)arg1;	// IMP=0x00100000000daf68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


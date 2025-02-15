//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCScreenCapture, AVCSession, NSData, NSMutableArray, NSMutableDictionary, NSNumber, NSString, TUCallScreenShareAttributes;
@protocol CSDAVCSessionDelegate, OS_dispatch_queue, TUFeatureFlags;

@interface CSDAVCSession : NSObject
{
    _Bool _video;	// 8 = 0x8
    _Bool _relaying;	// 9 = 0x9
    _Bool _screening;	// 10 = 0xa
    _Bool _audioReady;	// 11 = 0xb
    _Bool _hasCalledStop;	// 12 = 0xc
    unsigned char _captureCapabilities;	// 13 = 0xd
    AVCSession *_session;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    id <CSDAVCSessionDelegate> _delegate;	// 32 = 0x20
    NSMutableDictionary *_remoteParticipantsByIdentifier;	// 40 = 0x28
    NSMutableDictionary *_pendingRemovedParticipantsByID;	// 48 = 0x30
    CDUnknownBlockType _captureSessionCreationBlock;	// 56 = 0x38
    TUCallScreenShareAttributes *_mostRecentScreenShareAttributes;	// 64 = 0x40
    NSNumber *_mostRecentCompletedOneToOneEnabledValue;	// 72 = 0x48
    AVCScreenCapture *_avcScreenCapture;	// 80 = 0x50
    id <TUFeatureFlags> _featureFlags;	// 88 = 0x58
    NSMutableArray *_captureSessionQueue;	// 96 = 0x60
    NSMutableArray *_sessionUpdateCompletionQueue;	// 104 = 0x68
    CDUnknownBlockType _avcSessionParticipantCreationBlock;	// 112 = 0x70
    TUCallScreenShareAttributes *_currentLocalScreenShareAttributes;	// 120 = 0x78
}

+ (id)avcScreenCaptureConfigurationForScreenAttributes:(id)arg1;	// IMP=0x00200000001aadb9
+ (id)defaultScreenShareAttributes;	// IMP=0x00100000001a99d6
+ (long long)defaultSessionMode;	// IMP=0x00100000001a96e2
+ (id)defaultConfiguration;	// IMP=0x00100000001a9690
- (void).cxx_destruct;	// IMP=0x00200000001b289c
@property(retain, nonatomic) TUCallScreenShareAttributes *currentLocalScreenShareAttributes; // @synthesize currentLocalScreenShareAttributes=_currentLocalScreenShareAttributes;
@property(copy, nonatomic) CDUnknownBlockType avcSessionParticipantCreationBlock; // @synthesize avcSessionParticipantCreationBlock=_avcSessionParticipantCreationBlock;
@property(readonly, nonatomic) NSMutableArray *sessionUpdateCompletionQueue; // @synthesize sessionUpdateCompletionQueue=_sessionUpdateCompletionQueue;
@property(readonly, nonatomic) NSMutableArray *captureSessionQueue; // @synthesize captureSessionQueue=_captureSessionQueue;
@property(retain, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(nonatomic) unsigned char captureCapabilities; // @synthesize captureCapabilities=_captureCapabilities;
@property(retain, nonatomic) AVCScreenCapture *avcScreenCapture; // @synthesize avcScreenCapture=_avcScreenCapture;
@property(retain, nonatomic) NSNumber *mostRecentCompletedOneToOneEnabledValue; // @synthesize mostRecentCompletedOneToOneEnabledValue=_mostRecentCompletedOneToOneEnabledValue;
@property(nonatomic) _Bool hasCalledStop; // @synthesize hasCalledStop=_hasCalledStop;
@property(retain, nonatomic) TUCallScreenShareAttributes *mostRecentScreenShareAttributes; // @synthesize mostRecentScreenShareAttributes=_mostRecentScreenShareAttributes;
@property(readonly, copy, nonatomic) CDUnknownBlockType captureSessionCreationBlock; // @synthesize captureSessionCreationBlock=_captureSessionCreationBlock;
@property(readonly, nonatomic) NSMutableDictionary *pendingRemovedParticipantsByID; // @synthesize pendingRemovedParticipantsByID=_pendingRemovedParticipantsByID;
@property(readonly, nonatomic) NSMutableDictionary *remoteParticipantsByIdentifier; // @synthesize remoteParticipantsByIdentifier=_remoteParticipantsByIdentifier;
@property(readonly, nonatomic) __weak id <CSDAVCSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) AVCSession *session; // @synthesize session=_session;
@property(nonatomic, getter=isScreening) _Bool screening; // @synthesize screening=_screening;
@property(nonatomic, getter=isRelaying) _Bool relaying; // @synthesize relaying=_relaying;
@property(nonatomic, getter=isVideo) _Bool video; // @synthesize video=_video;
@property(readonly, nonatomic) long long localCaptionsToken;
- (_Bool)isRemoteScreenEnabledForParticipant:(id)arg1;	// IMP=0x00100000001b2676
- (void)screenCapture:(id)arg1 didUpdateAttributes:(id)arg2 error:(id)arg3;	// IMP=0x00100000001b233a
- (void)screenCapture:(id)arg1 didStop:(_Bool)arg2 withError:(id)arg3;	// IMP=0x00100000001b1f62
- (void)screenCapture:(id)arg1 didStart:(_Bool)arg2 withError:(id)arg3;	// IMP=0x00100000001b1d56
- (void)participant:(id)arg1 mixingDidStopForMediaType:(unsigned int)arg2;	// IMP=0x00100000001b1c24
- (void)participant:(id)arg1 mixingDidStartForMediaType:(unsigned int)arg2 mixingMediaType:(unsigned int)arg3;	// IMP=0x00100000001b1ad7
- (void)participant:(id)arg1 mediaStateDidChange:(unsigned int)arg2 forMediaType:(unsigned int)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x00100000001b1ad1
- (void)participant:(id)arg1 remoteMediaStateDidChange:(unsigned int)arg2 forMediaType:(unsigned int)arg3;	// IMP=0x00100000001b19dd
- (void)participant:(id)arg1 didReact:(id)arg2;	// IMP=0x00100000001b189b
- (void)participant:(id)arg1 mediaPrioritiesDidChange:(id)arg2;	// IMP=0x00100000001b175a
- (void)participant:(id)arg1 remoteScreenEnabledDidChange:(_Bool)arg2;	// IMP=0x00100000001b15a8
- (void)participant:(id)arg1 screenEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000001b135c
- (void)participant:(id)arg1 remoteAudioPausedDidChange:(_Bool)arg2;	// IMP=0x00100000001b1213
- (void)participant:(id)arg1 remoteVideoEnabledDidChange:(_Bool)arg2;	// IMP=0x00100000001b109f
- (void)participant:(id)arg1 remoteAudioEnabledDidChange:(_Bool)arg2;	// IMP=0x00100000001b0f2b
- (void)sessionDidStopReacting:(id)arg1;	// IMP=0x00100000001b0e1a
- (void)session:(id)arg1 didReact:(id)arg2;	// IMP=0x00100000001b0cda
- (void)session:(id)arg1 mixingDidStopForMediaType:(unsigned int)arg2;	// IMP=0x00100000001b0bdc
- (void)session:(id)arg1 mixingDidStartForMediaType:(unsigned int)arg2 mixingMediaType:(unsigned int)arg3;	// IMP=0x00100000001b0ac3
- (void)sessionShouldReconnect:(id)arg1;	// IMP=0x00100000001b09b2
- (void)session:(id)arg1 mediaStateDidChange:(unsigned int)arg2 forMediaType:(unsigned int)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x00100000001b08a7
- (void)session:(id)arg1 oneToOneEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000001b0410
- (void)session:(id)arg1 videoPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000001b0284
- (void)session:(id)arg1 audioPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000001b00f8
- (void)session:(id)arg1 screenEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000001afd6b
- (void)session:(id)arg1 videoEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000001afbdf
- (void)session:(id)arg1 audioEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000001afa53
- (void)session:(id)arg1 didUpdate:(_Bool)arg2 configuration:(id)arg3 error:(id)arg4;	// IMP=0x00100000001af902
- (void)session:(id)arg1 removeParticipant:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000001af5c4
- (void)session:(id)arg1 addParticipant:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000001aef30
- (void)sessionServerDidDisconnect:(id)arg1;	// IMP=0x00100000001aee62
- (void)session:(id)arg1 didDetectError:(id)arg2;	// IMP=0x00100000001aed4e
- (id)pendingRemovedRemoteParticipantByIdentififer:(unsigned long long)arg1;	// IMP=0x00100000001aec95
- (void)session:(id)arg1 didStopWithError:(id)arg2 metadata:(id)arg3;	// IMP=0x00100000001ae8de
- (void)session:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x00100000001ae85d
- (void)session:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x00100000001ae6d2
- (_Bool)shouldIgnoreBenignErrorOnStart:(id)arg1;	// IMP=0x00100000001ae5e0
- (void)stopWithError:(id)arg1;	// IMP=0x00100000001ae42c
- (void)stop;	// IMP=0x00100000001ae418
- (void)start;	// IMP=0x00100000001ae343
- (void)commitParticipantUpdates;	// IMP=0x00100000001ae27d
- (void)beginParticipantUpdates;	// IMP=0x00100000001ae1b7
- (void)setVideoQuality:(unsigned long long)arg1 visibility:(id)arg2 prominence:(id)arg3 spatialPosition:(struct CGRect)arg4 isInCanvas:(_Bool)arg5 forParticipantWithIdentifier:(unsigned long long)arg6;	// IMP=0x00100000001add65
- (void)setAudioAndVideoMuted:(_Bool)arg1 forParticipantWithIdentifier:(unsigned long long)arg2;	// IMP=0x00100000001adb5b
- (void)setScreenEnabled:(_Bool)arg1 forParticipantWithIdentifier:(unsigned long long)arg2;	// IMP=0x00100000001ad969
- (void)setAudioPaused:(_Bool)arg1 forParticipantWithIdentifier:(unsigned long long)arg2;	// IMP=0x00100000001ad777
- (void)setDownlinkMuted:(_Bool)arg1 forParticipantWithIdentifier:(unsigned long long)arg2;	// IMP=0x00100000001ad585
- (void)removeParticipant:(id)arg1;	// IMP=0x00100000001acf86
- (void)addParticipant:(id)arg1 withVideoEnabled:(_Bool)arg2 audioPaused:(_Bool)arg3 screenEnabled:(_Bool)arg4;	// IMP=0x00100000001ac891
- (void)queueAddParticipantRetryBlock:(id)arg1 withVideoEnabled:(_Bool)arg2 audioPaused:(_Bool)arg3 screenEnabled:(_Bool)arg4;	// IMP=0x00100000001ac601
- (void)updateConfigurationSessionMode:(long long)arg1;	// IMP=0x00100000001ac333
- (void)setScreenShareAttributes:(id)arg1;	// IMP=0x00100000001ac15b
@property(readonly, nonatomic) _Bool shouldDisableOneToOneModeForScreenShare;
- (void)startAVCScreenCaptureWithAttributes:(id)arg1 preferImmediateActivation:(_Bool)arg2 screenControlEnabled:(_Bool)arg3 capturesCursor:(_Bool)arg4;	// IMP=0x00100000001ab8ff
- (void)setOneToOneModeEnabled:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ab68b
- (void)setScreenEnabled:(_Bool)arg1 attributes:(id)arg2;	// IMP=0x00100000001aaf2c
- (unsigned int)presentationLayoutForGridDisplayMode:(unsigned long long)arg1;	// IMP=0x00100000001aadaa
- (void)setGridDisplayMode:(unsigned long long)arg1;	// IMP=0x00100000001aabf1
@property(nonatomic) struct CGRect presentationRect;
@property(nonatomic) int presentationState;
@property(nonatomic, getter=isOneToOneModeEnabled) _Bool oneToOneModeEnabled;
@property(nonatomic, getter=isAudioPaused) _Bool audioPaused;
@property(nonatomic, getter=isVideoPaused) _Bool videoPaused;
- (void)setScreenEnabled:(_Bool)arg1;	// IMP=0x00100000001aa250
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
@property(readonly, nonatomic, getter=isScreenEnabled) _Bool screenEnabled;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled;
@property(nonatomic, getter=isUplinkMuted) _Bool uplinkMuted;
@property(nonatomic, getter=isAudioReady) _Bool audioReady; // @synthesize audioReady=_audioReady;
@property(readonly, nonatomic) long long maxVideoDecodesAllowed;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier;
@property(readonly, nonatomic) long long sessionToken;
- (_Bool)containsRemoteParticipantWithIdentifier:(unsigned long long)arg1;	// IMP=0x00100000001a97e1
- (id)localParticipantDataWithVersion:(unsigned long long)arg1;	// IMP=0x00100000001a9742
@property(readonly, copy, nonatomic) NSData *localParticipantData;
- (id)initWithTransportToken:(id)arg1 delegate:(id)arg2 queue:(id)arg3 reportingHierarchyToken:(id)arg4 oneToOneModeEnabled:(_Bool)arg5 avMode:(unsigned long long)arg6 videoEnabled:(_Bool)arg7 report:(id)arg8 serviceName:(id)arg9 ABTestConfiguration:(id)arg10;	// IMP=0x00100000001a902f
- (id)initWithSessionCreationBlock:(CDUnknownBlockType)arg1 transportToken:(id)arg2 delegate:(id)arg3 queue:(id)arg4 reportingHierarchyToken:(id)arg5 avMode:(unsigned long long)arg6 videoEnabled:(_Bool)arg7 captureSessionCreationBlock:(CDUnknownBlockType)arg8;	// IMP=0x00100000001a8b8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


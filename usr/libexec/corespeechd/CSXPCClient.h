//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioStream, MISSING_TYPE, NSHashTable, NSMutableSet, NSString;
@protocol CSAudioAlertProvidingDelegate, CSAudioSessionProvidingDelegate, CSAudioStreamProvidingDelegate, CSXPCClientDelegate, OS_dispatch_queue, OS_xpc_object;

@interface CSXPCClient : NSObject
{
    id <CSAudioSessionProvidingDelegate> _audioSessionProvidingDelegate;	// 8 = 0x8
    id <CSAudioStreamProvidingDelegate> _audioStreamProvidingDelegate;	// 16 = 0x10
    id <CSAudioAlertProvidingDelegate> _audioAlertProvidingDelegate;	// 24 = 0x18
    id <CSXPCClientDelegate> _delegate;	// 32 = 0x20
    NSString *_UUID;	// 40 = 0x28
    NSObject<OS_xpc_object> *_xpcConnection;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_xpcReplyQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_xpcClientQueue;	// 64 = 0x40
    CSAudioStream *_audioStream;	// 72 = 0x48
    NSMutableSet *_activationAssertions;	// 80 = 0x50
    NSHashTable *_audioSessionInfoObservers;	// 88 = 0x58
    unsigned long long _xpcClientType;	// 96 = 0x60
}

+ (id)createStopAudioStreamMessageWithOption:(id)arg1;	// IMP=0x0020000000036410
+ (id)createStartAudioStreamMessageWithOption:(id)arg1;	// IMP=0x00100000000362e5
+ (id)createPrepareAudioStreamMessageWithRequest:(id)arg1;	// IMP=0x00100000000361ba
+ (id)createAudioStreamMessageWithRequest:(id)arg1;	// IMP=0x001000000003608f
- (void).cxx_destruct;	// IMP=0x0020000000034628
@property(nonatomic) unsigned long long xpcClientType; // @synthesize xpcClientType=_xpcClientType;
@property(retain, nonatomic) NSHashTable *audioSessionInfoObservers; // @synthesize audioSessionInfoObservers=_audioSessionInfoObservers;
@property(retain, nonatomic) NSMutableSet *activationAssertions; // @synthesize activationAssertions=_activationAssertions;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xpcClientQueue; // @synthesize xpcClientQueue=_xpcClientQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xpcReplyQueue; // @synthesize xpcReplyQueue=_xpcReplyQueue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) __weak id <CSXPCClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CSAudioAlertProvidingDelegate> audioAlertProvidingDelegate; // @synthesize audioAlertProvidingDelegate=_audioAlertProvidingDelegate;
@property(nonatomic) __weak id <CSAudioStreamProvidingDelegate> audioStreamProvidingDelegate; // @synthesize audioStreamProvidingDelegate=_audioStreamProvidingDelegate;
@property(nonatomic) __weak id <CSAudioSessionProvidingDelegate> audioSessionProvidingDelegate; // @synthesize audioSessionProvidingDelegate=_audioSessionProvidingDelegate;
- (void)_handleStreamProvidingDelegateHardwareConfigChange:(id)arg1;	// IMP=0x0010000000034416
- (void)_handleStreamProvidingDelegateChunkForTVAvailable:(id)arg1;	// IMP=0x0010000000034328
- (void)_handleStreamProvidingDelegateChunkAvailable:(id)arg1;	// IMP=0x001000000003423a
- (void)_handleStreamProvidingDelegateDidStopUnexpectedly:(id)arg1;	// IMP=0x0010000000034184
- (void)_handleStreamProvidingDelegateMessageBody:(id)arg1;	// IMP=0x0010000000034068
- (void)_handleSessionInfoProvidingDelegateMediaServicesWereResetNotification:(id)arg1;	// IMP=0x0010000000033eab
- (void)_handleSessionInfoProvidingDelegateMediaServicesWereLostNotification:(id)arg1;	// IMP=0x0010000000033cee
- (void)_handleSessionInfoProvidingDelegateRouteChangeNotification:(id)arg1;	// IMP=0x0010000000033a5b
- (void)_handleSessionInfoProvidingDelegateInterruptionNotification:(id)arg1;	// IMP=0x00100000000337c8
- (void)_handleSessionInfoProvidingDelegateMessageBody:(id)arg1;	// IMP=0x001000000003364b
- (void)_handleSessionProvidingDelegateDidChangeContext:(id)arg1;	// IMP=0x0010000000033594
- (void)_handleSessionProvidingDelegateStreamHandleIdInvalidation:(id)arg1;	// IMP=0x00100000000334dd
- (void)_handleSessionProvidingDelegateDidSetAudioSession:(id)arg1;	// IMP=0x0010000000033426
- (void)_handleSessionProvidingDelegateWillSetAudioSession:(id)arg1;	// IMP=0x001000000003336f
- (void)_handleSessionProvidingDelegateEndInterruption:(id)arg1;	// IMP=0x00100000000332d2
- (void)_handleSessionProvidingDelegateBeginInterruptionWithContext:(id)arg1;	// IMP=0x00100000000330fd
- (void)_handleSessionProvidingDelegateBeginInterruption:(id)arg1;	// IMP=0x0010000000033060
- (void)_handleSessionProvidingDelegateMessageBody:(id)arg1;	// IMP=0x0010000000032ea4
- (void)_handleAlertProvidingDelegateDidFinishAlertPlayback:(id)arg1;	// IMP=0x0010000000032d34
- (void)_handleAlertProvidingDelegateMessageBody:(id)arg1;	// IMP=0x0010000000032bfb
- (void)_handleListenerDisconnectedError:(id)arg1;	// IMP=0x0010000000032af1
- (void)_handleListenerError:(id)arg1;	// IMP=0x0010000000032954
- (void)_handleListenerMessage:(id)arg1;	// IMP=0x0010000000032792
- (void)_handleListenerEvent:(id)arg1;	// IMP=0x001000000003264a
- (_Bool)sendMessageAndReplySync:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000324f7
- (id)_decodeError:(id)arg1;	// IMP=0x001000000003242d
- (void)_sendMessageAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003231a
- (void)sendMessageAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000032263
- (_Bool)fallbackDeactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000032136
- (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1;	// IMP=0x0010000000031e93
- (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1;	// IMP=0x0010000000031bf0
- (unsigned int)audioSessionIdForDeviceId:(id)arg1;	// IMP=0x00100000000318d7
- (void)unregisterObserver:(id)arg1;	// IMP=0x00100000000318ba
- (void)registerObserver:(id)arg1;	// IMP=0x001000000003189d
- (void)attachTandemStream:(id)arg1 toPrimaryStream:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000031816
- (void)setAnnounceCallsEnabled:(_Bool)arg1 withStreamHandleID:(unsigned long long)arg2;	// IMP=0x001000000003178f
- (_Bool)isRecording;	// IMP=0x0010000000031706
- (void)cancelAudioStreamHold:(id)arg1;	// IMP=0x001000000003167f
- (id)holdAudioStreamWithDescription:(id)arg1 option:(id)arg2;	// IMP=0x00100000000315f6
- (void)saveRecordingBufferToEndFrom:(unsigned long long)arg1 toURL:(id)arg2;	// IMP=0x001000000003156f
- (void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;	// IMP=0x00100000000314e8
- (id)audioChunkToEndFrom:(unsigned long long)arg1 channelIdx:(unsigned long long)arg2;	// IMP=0x001000000003145f
- (id)audioChunkToEndFrom:(unsigned long long)arg1;	// IMP=0x00100000000313d6
- (id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 channelIdx:(unsigned long long)arg3;	// IMP=0x001000000003134d
- (id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x00100000000312c4
- (MISSING_TYPE *)audioStreamId;	// IMP=0x001000000003123b
- (id)playbackRoute;	// IMP=0x0010000000030ff0
- (_Bool)isNarrowBand;	// IMP=0x0010000000030e01
- (id)recordSettings;	// IMP=0x0010000000030b88
- (id)audioDeviceInfo;	// IMP=0x00100000000309dd
- (id)recordDeviceInfo;	// IMP=0x001000000003077c
- (id)recordRoute;	// IMP=0x0010000000030531
- (void)triggerInfoForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002fe46
- (void)acousticSLResultForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002fb58
- (void)stopAudioStream:(id)arg1 option:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002fa38
- (void)startAudioStream:(id)arg1 option:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f90a
- (_Bool)supportsDuckingOnCurrentRouteWithError:(id *)arg1;	// IMP=0x001000000002f802
- (void)prepareAudioStream:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f5a4
- (_Bool)prepareAudioStreamSync:(id)arg1 request:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002f117
- (void)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002ee73
- (id)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002e9aa
- (_Bool)setCurrentContext:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002e64a
- (id)audioMetric;	// IMP=0x001000000002e49f
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x001000000002e2e9
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x001000000002e133
- (void)updateMeters;	// IMP=0x001000000002e03a
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x001000000002df1b
- (void)configureAlertBehavior:(id)arg1;	// IMP=0x001000000002ddd1
- (unsigned long long)alertStartTime;	// IMP=0x001000000002dc50
- (_Bool)playRecordStartingAlertAndResetEndpointerWithAlertOverride:(long long)arg1;	// IMP=0x001000000002db2b
- (_Bool)playAlertSoundForType:(long long)arg1;	// IMP=0x001000000002da06
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 force:(_Bool)arg3;	// IMP=0x001000000002d823
- (void)setAudioAlertDelegate:(id)arg1;	// IMP=0x001000000002d811
- (void)setAudioSessionDelegate:(id)arg1;	// IMP=0x001000000002d7ff
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x001000000002d6e0
- (void)enableSmartRoutingConsideration:(_Bool)arg1;	// IMP=0x001000000002d5c1
- (void)setDuckOthersOption:(_Bool)arg1;	// IMP=0x001000000002d4a2
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000002d375
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 dynamicAttribute:(unsigned long long)arg2 bundleID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000002d1d7
- (_Bool)prewarmAudioSessionWithError:(id *)arg1;	// IMP=0x001000000002d0cf
- (void)pingpong:(CDUnknownBlockType)arg1;	// IMP=0x001000000002cfc6
- (_Bool)prepareAudioProviderWithContext:(id)arg1 clientType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000002cded
- (void)_sendXPCClientType;	// IMP=0x001000000002cc92
- (id)_getSerialQueueWithName:(id)arg1 targetQueue:(id)arg2;	// IMP=0x001000000002cc09
- (void)dealloc;	// IMP=0x001000000002cbcb
- (void)_disconnect;	// IMP=0x001000000002cb85
- (void)disconnect;	// IMP=0x001000000002cb3a
- (void)connect;	// IMP=0x001000000002caef
- (_Bool)isConnected;	// IMP=0x001000000002ca61
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x001000000002c8c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


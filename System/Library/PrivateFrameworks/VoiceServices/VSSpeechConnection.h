//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, VSSpeechConnectionDelegateWrapper;
@protocol OS_dispatch_queue, VSSpeechConnectionDelegate;

__attribute__((visibility("hidden")))
@interface VSSpeechConnection : NSObject
{
    _Bool _keepActive;	// 8 = 0x8
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    id <VSSpeechConnectionDelegate> _delegate;	// 32 = 0x20
    VSSpeechConnectionDelegateWrapper *_delegateWrapper;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_threadSafeQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000041fc2
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *threadSafeQueue; // @synthesize threadSafeQueue=_threadSafeQueue;
@property(retain, nonatomic) VSSpeechConnectionDelegateWrapper *delegateWrapper; // @synthesize delegateWrapper=_delegateWrapper;
@property(nonatomic) __weak id <VSSpeechConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool keepActive; // @synthesize keepActive=_keepActive;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)killDaemon;	// IMP=0x0000000000041ee8
- (void)invokeDaemon:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041e61
- (void)forwardStreamObject:(id)arg1;	// IMP=0x0000000000041dd3
- (void)getVoiceInfoForLanguageCode:(id)arg1 name:(id)arg2 footprint:(long long)arg3 gender:(long long)arg4 type:(long long)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000000041cd2
- (void)getVoiceResourceForLanguage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000041c07
- (void)getAllVoiceSubscriptionsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041b4e
- (void)getSubscribedVoiceAssetsWithClientID:(id)arg1 forAccessoryID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000041a64
- (void)triggerCellularDownloadedVoiceAssets:(id)arg1 withClientID:(id)arg2;	// IMP=0x00000000000419d9
- (void)setSubscribedVoiceAssets:(id)arg1 withClientID:(id)arg2 forAccessoryID:(id)arg3;	// IMP=0x000000000004193c
- (void)getLocalVoiceResources:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041883
- (void)getLocalVoiceAssetsForLanguage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000417b8
- (oneway void)cleanUnusedAssets:(CDUnknownBlockType)arg1;	// IMP=0x000000000004174f
- (void)continueSpeechRequest:(id)arg1;	// IMP=0x00000000000416e6
- (void)pauseSpeechRequest:(id)arg1 atMark:(long long)arg2;	// IMP=0x000000000004166f
- (void)stopSpeechRequest:(id)arg1 atMark:(long long)arg2;	// IMP=0x00000000000415f8
- (void)startSynthesisRequest:(id)arg1;	// IMP=0x00000000000414f9
- (void)stopPresynthesizedAudioRequest:(id)arg1;	// IMP=0x0000000000041490
- (void)cachePresynthesizedAudioRequest:(id)arg1;	// IMP=0x0000000000041427
- (void)startPresynthesizedAudioRequest:(id)arg1;	// IMP=0x000000000004121d
- (void)startSpeechRequest:(id)arg1;	// IMP=0x000000000004100c
- (void)endAudioPowerUpdate;	// IMP=0x0000000000040fcf
- (void)beginAudioPowerUpdateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040f66
- (void)startPhonemesRequest:(id)arg1 phonemeSystem:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000040e93
- (_Bool)isSystemSpeakingOnBehalfOfCurrentConnection;	// IMP=0x0000000000040d3b
- (_Bool)isSystemSpeaking;	// IMP=0x0000000000040c43
- (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;	// IMP=0x0000000000040ae2
- (id)availableVoicesForLanguageCode:(id)arg1;	// IMP=0x0000000000040999
- (void)estimateDurationWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000408e9
- (_Bool)queryPhaticCapabilityWithRequest:(id)arg1;	// IMP=0x00000000000407cc
- (void)prewarmIfNeededWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000040701
- (void)updateWithConnectionIdentifier:(id)arg1 keepActive:(_Bool)arg2;	// IMP=0x0000000000040685
- (id)currentAudioRequest;	// IMP=0x0000000000040564
- (id)currentRequest;	// IMP=0x00000000000404ea
- (void)_connectionInvalidated;	// IMP=0x000000000003fd6d
- (id)_remoteObjectWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003fcf3
- (id)_remoteObjectSync;	// IMP=0x000000000003fc9c
- (id)_remoteObject;	// IMP=0x000000000003fc4c
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)dealloc;	// IMP=0x000000000003faab
- (id)init;	// IMP=0x000000000003fa20

@end


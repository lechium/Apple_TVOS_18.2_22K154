//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CSAttSiriAudioCoordinator : NSObject
{
    _Bool _shouldStopDeliverAudioOnEndpoint;	// 8 = 0x8
    _Bool _hasAudioEverStarted;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSHashTable *_receivers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000037229
@property(nonatomic) _Bool hasAudioEverStarted; // @synthesize hasAudioEverStarted=_hasAudioEverStarted;
@property(nonatomic) _Bool shouldStopDeliverAudioOnEndpoint; // @synthesize shouldStopDeliverAudioOnEndpoint=_shouldStopDeliverAudioOnEndpoint;
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_handleClientDidStopIfNeeded;	// IMP=0x0010000000036ff5
- (void)intuitiveConvAudioCaptureMonitorDidStopAudioCapture:(id)arg1 stopStreamOption:(id)arg2 eventUUID:(id)arg3;	// IMP=0x0010000000036faa
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x0010000000036f5f
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x0010000000036f59
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x0010000000036f53
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x0010000000036f4d
- (void)attSiriNode:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x0010000000036f47
- (void)attSiriNode:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 usesAutomaticEndPointing:(_Bool)arg4;	// IMP=0x0010000000036ef8
- (void)attSiriAudioSrcNodeLPCMRecordBufferAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x0010000000036e41
- (void)attSiriAudioSrcNodeDidStop:(id)arg1;	// IMP=0x0010000000036db4
- (void)attSiriAudioSrcNodeDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x0010000000036cf1
- (void)reset;	// IMP=0x0010000000036ca6
- (void)removeReceiver:(id)arg1;	// IMP=0x0010000000036c19
- (void)addReceiver:(id)arg1;	// IMP=0x0010000000036b8c
- (id)initWithTargetQueue:(id)arg1;	// IMP=0x0010000000036acd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


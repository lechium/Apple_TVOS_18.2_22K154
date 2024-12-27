//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWAttentionSampler, AWAttentionStreamer, NSMutableArray, NSMutableDictionary, NSString;
@protocol AWSchedulerObserver, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    NSMutableArray *_clients;	// 24 = 0x18
    NSMutableDictionary *_streamingClients;	// 32 = 0x20
    NSMutableDictionary *_interruptedStreamingClients;	// 40 = 0x28
    AWAttentionSampler *_attentionSampler;	// 48 = 0x30
    AWAttentionStreamer *_attentionStreamer;	// 56 = 0x38
    struct mach_timebase_info _timebase;	// 64 = 0x40
    _Bool _useAVFoundation;	// 72 = 0x48
    _Bool _allowFaceDetect;	// 73 = 0x49
    _Bool _allowHIDEvents;	// 74 = 0x4a
    _Bool _allowMotionDetect;	// 75 = 0x4b
    _Bool _unitTestMode;	// 76 = 0x4c
    _Bool _isDeviceStationary;	// 77 = 0x4d
    _Bool _isDeviceOnLockScreen;	// 78 = 0x4e
    id <AWSchedulerObserver> _observer;	// 80 = 0x50
    NSString *_identifier;	// 88 = 0x58
}

+ (id)sharedUnitTestScheduler;	// IMP=0x00600000000071f9
+ (id)sharedMotionDetectScheduler;	// IMP=0x00600000000071c9
+ (id)sharedScheduler;	// IMP=0x0060000000007199
- (void).cxx_destruct;	// IMP=0x0000000000006567
@property(readonly, nonatomic) _Bool isDeviceOnLockScreen; // @synthesize isDeviceOnLockScreen=_isDeviceOnLockScreen;
@property(readonly, nonatomic) _Bool isDeviceStationary; // @synthesize isDeviceStationary=_isDeviceStationary;
@property(readonly, nonatomic) _Bool unitTestMode; // @synthesize unitTestMode=_unitTestMode;
@property(readonly, nonatomic) _Bool allowMotionDetect; // @synthesize allowMotionDetect=_allowMotionDetect;
@property(readonly, nonatomic) _Bool allowHIDEvents; // @synthesize allowHIDEvents=_allowHIDEvents;
@property(readonly, nonatomic) _Bool allowFaceDetect; // @synthesize allowFaceDetect=_allowFaceDetect;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) AWAttentionSampler *attentionSampler; // @synthesize attentionSampler=_attentionSampler;
@property(nonatomic) __weak id <AWSchedulerObserver> observer; // @synthesize observer=_observer;
- (void)lockScreenStateChanging:(_Bool)arg1;	// IMP=0x00000000000064ed
- (void)motionActivityChanging:(_Bool)arg1;	// IMP=0x00000000000064e4
- (void)carPlayStateChanging:(_Bool)arg1;	// IMP=0x00000000000064ce
- (void)screenStateChanging:(_Bool)arg1;	// IMP=0x0000000000006489
- (_Bool)canRunMotionDetect;	// IMP=0x0000000000006437
- (double)calculateTimeDelta:(unsigned long long)arg1 endTime:(unsigned long long)arg2 timebase:(struct mach_timebase_info)arg3;	// IMP=0x00000000000063fd
- (_Bool)shouldActivateMotionDetectForSampling;	// IMP=0x0000000000006229
- (_Bool)shouldActivateEyeReliefForStreaming;	// IMP=0x0000000000006055
- (_Bool)shouldActivateAttentionDetectForStreaming;	// IMP=0x0000000000005e81
- (_Bool)shouldActivateAttentionDetectionForSampling;	// IMP=0x0000000000005cad
- (void)setClientAsInterrupted:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000599b
- (void)handleNotification:(unsigned long long)arg1;	// IMP=0x0000000000005926
- (id)cancelFaceDetectStream:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000005037
- (id)streamFaceDetectEventsWithOptions:(CDStruct_2a4d9400)arg1;	// IMP=0x0000000000004e19
- (id)streamFaceDetectEvents;	// IMP=0x0000000000004dc6
- (void)removeStreamingClientwithIdentifier:(id)arg1;	// IMP=0x000000000000490f
- (id)addStreamingClient:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000000000042ad
- (id)resetInterruptedStreamingClientWithIdentifier:(id)arg1;	// IMP=0x0000000000003ff7
- (unsigned long long)nextSamplingTimeForSamplingInterval:(unsigned long long)arg1;	// IMP=0x0000000000003fa6
- (void)reevaluate;	// IMP=0x0000000000003e72
- (void)armEvents;	// IMP=0x0000000000003829
- (void)setSmartCoverClosed:(_Bool)arg1;	// IMP=0x00000000000037d9
- (void)processHIDEvent:(struct __IOHIDEvent *)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3 senderID:(unsigned long long)arg4 displayUUID:(id)arg5;	// IMP=0x0000000000003627
- (void)removeInvalidClients;	// IMP=0x0000000000003613
- (void)removeInvalidClientsWithConnection:(id)arg1;	// IMP=0x000000000000324b
- (void)addClient:(id)arg1;	// IMP=0x0000000000002de8
- (id)description;	// IMP=0x0000000000002d73
- (_Bool)canActiveOperationBeEnded;	// IMP=0x0000000000002c2e
- (id)initWithOptions:(id)arg1;	// IMP=0x0000000000001fa8

@end


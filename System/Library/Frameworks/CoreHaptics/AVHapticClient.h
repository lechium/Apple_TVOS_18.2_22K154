//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVHapticClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    void *_commandWriter;	// 16 = 0x10
    unsigned long long _uniqueID;	// 24 = 0x18
    int _serverTimeout;	// 32 = 0x20
    CDUnknownBlockType _completionCallback;	// 40 = 0x28
    CDUnknownBlockType _connectionCallback;	// 48 = 0x30
    struct mutex _mapMutex;	// 56 = 0x38
    struct map<unsigned long, AVHapticSequenceEntry *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, AVHapticSequenceEntry *>>> _sequenceEntryMap;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_completionQueue;	// 144 = 0x90
    int _state;	// 152 = 0x98
    _Bool _disconnecting;	// 156 = 0x9c
    _Bool _prewarmed;	// 157 = 0x9d
    _Bool _connected;	// 158 = 0x9e
    int _serverProcessID;	// 160 = 0xa0
    unsigned long long _clientID;	// 168 = 0xa8
    NSArray *_channelKeys;	// 176 = 0xb0
    CDUnknownBlockType _asyncStopCallback;	// 184 = 0xb8
}

- (id).cxx_construct;	// IMP=0x0000000000030571
- (void).cxx_destruct;	// IMP=0x00000000000304fb
@property(copy) CDUnknownBlockType asyncStopCallback; // @synthesize asyncStopCallback=_asyncStopCallback;
@property int serverProcessID; // @synthesize serverProcessID=_serverProcessID;
@property(readonly) _Bool disconnecting; // @synthesize disconnecting=_disconnecting;
@property(copy) CDUnknownBlockType connectionCallback; // @synthesize connectionCallback=_connectionCallback;
@property(copy) CDUnknownBlockType completionCallback; // @synthesize completionCallback=_completionCallback;
@property _Bool connected; // @synthesize connected=_connected;
@property(readonly) _Bool prewarmed; // @synthesize prewarmed=_prewarmed;
@property(readonly) NSArray *channelKeys; // @synthesize channelKeys=_channelKeys;
@property(readonly) unsigned long long clientID; // @synthesize clientID=_clientID;
- (void)clientDisconnectingForReason:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x00000000000302c1
- (void)clientStoppedForReason:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x000000000002fef8
- (void)clientCompletedWithError:(id)arg1;	// IMP=0x000000000002f801
- (void)sequenceFinished:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x000000000002f28c
- (void)destroySharedMemory;	// IMP=0x000000000002f232
- (unsigned int)calculateHapticCommandParamCurveMemorySize:(unsigned int)arg1;	// IMP=0x000000000002f0e7
- (void)handleServerConnectionInvalidation;	// IMP=0x000000000002ee01
- (void)handleServerConnectionInterruption;	// IMP=0x000000000002e79c
- (_Bool)removeAssignedChannelID:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000002e470
- (_Bool)requestAssignedChannels:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000002deff
- (void)clearAssignedChannels;	// IMP=0x000000000002dde7
- (_Bool)setPlayerBehavior:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000002d9ae
- (void)setChannelKeys:(id)arg1;	// IMP=0x000000000002d93c
- (void)disconnect;	// IMP=0x000000000002d782
- (id)getSyncDelegateForMethod:(SEL)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d44e
- (id)getAsyncDelegateForMethod:(SEL)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d11a
- (_Bool)setupConnectionWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002c223
- (void)doInit;	// IMP=0x000000000002c175
- (void)releaseResources;	// IMP=0x000000000002bf7f
- (void)detachHapticSequence:(unsigned long long)arg1;	// IMP=0x000000000002bd9a
- (_Bool)clearSequenceEvents:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000002bbeb
- (_Bool)setSequenceChannelParameter:(unsigned long long)arg1 atTime:(double)arg2 value:(float)arg3 sequenceID:(unsigned long long)arg4 channel:(unsigned long long)arg5;	// IMP=0x000000000002b9d8
- (_Bool)sendUnduckAudioCommand:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000002b808
- (_Bool)resetHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000002b638
- (_Bool)seekHapticSequence:(unsigned long long)arg1 toTime:(double)arg2;	// IMP=0x000000000002b474
- (_Bool)resumeHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000002b2a4
- (_Bool)pauseHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000002b0d4
- (_Bool)stopHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000002af04
- (_Bool)startHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 withOffset:(double)arg3;	// IMP=0x000000000002acfa
- (_Bool)setSequencePlaybackRate:(unsigned long long)arg1 rate:(float)arg2 error:(id *)arg3;	// IMP=0x000000000002aadd
- (_Bool)setSequenceLoopLength:(unsigned long long)arg1 length:(float)arg2 error:(id *)arg3;	// IMP=0x000000000002a8c0
- (_Bool)enableSequenceLooping:(unsigned long long)arg1 enable:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000002a6b6
- (_Bool)prepareHapticSequence:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000002a0d8
- (void)detachSequenceEntryforID:(unsigned long long)arg1;	// IMP=0x0000000000029e8d
- (void)setRunStateForSequenceEntryWithID:(unsigned long long)arg1 running:(_Bool)arg2;	// IMP=0x0000000000029dfe
- (void)callSequenceFinishedHandlersWithError:(id)arg1;	// IMP=0x0000000000029bf8
- (CDUnknownBlockType)getSequenceFinishedHandlerForID:(unsigned long long)arg1;	// IMP=0x0000000000029b44
- (void)setSequenceFinishedHandlerForID:(unsigned long long)arg1 finishedHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029947
- (_Bool)setSequenceEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 channel:(unsigned long long)arg3;	// IMP=0x00000000000293ff
- (_Bool)loadAndPrepareHapticSequenceFromVibePattern:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028d10
- (_Bool)loadAndPrepareHapticSequenceFromEvents:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000002857e
- (_Bool)loadAndPrepareHapticSequenceFromData:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027d1e
- (_Bool)scheduleParameterCurve:(unsigned long long)arg1 curve:(id)arg2 atTime:(double)arg3 channel:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0000000000027b8d
- (_Bool)setParameter:(unsigned long long)arg1 atTime:(double)arg2 value:(float)arg3 channel:(unsigned long long)arg4;	// IMP=0x0000000000027958
- (_Bool)clearEventsFromTime:(double)arg1 channel:(unsigned long long)arg2;	// IMP=0x000000000002776b
- (_Bool)sendEvents:(id)arg1 withImmediateParameters:(id)arg2 atTime:(double)arg3 channel:(unsigned long long)arg4 outToken:(unsigned long long *)arg5 error:(id *)arg6;	// IMP=0x000000000002768b
- (_Bool)doScheduleParamCurveWithMemoryReserve:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 memoryReserve:(struct HapticSharedMemoryAddressReserve *)arg4 paramCurve:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000026a5c
- (_Bool)doScheduleParamCurve:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 paramCurve:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000026304
- (_Bool)doSendEvents:(id)arg1 withImmediateParameters:(id)arg2 atTime:(double)arg3 channel:(unsigned long long)arg4 sorted:(_Bool)arg5 outToken:(unsigned long long *)arg6 error:(id *)arg7;	// IMP=0x0000000000024672
- (_Bool)resetChannel:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x0000000000023d45
- (_Bool)setChannelEventBehavior:(unsigned long long)arg1 channel:(unsigned long long)arg2;	// IMP=0x000000000002381d
- (void)expectNotifyAfter:(double)arg1;	// IMP=0x0000000000023817
- (_Bool)finish:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022f6e
- (void)stopRunning:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022a9d
- (void)stopRunning;	// IMP=0x000000000002278c
- (void)startRunning:(CDUnknownBlockType)arg1;	// IMP=0x00000000000222c5
- (void)stopPrewarm;	// IMP=0x0000000000021fd7
- (void)prewarm:(CDUnknownBlockType)arg1;	// IMP=0x0000000000021bdd
- (_Bool)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021775
- (_Bool)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000212f9
- (_Bool)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000020e36
- (_Bool)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000020916
- (_Bool)loadHapticEvent:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000020362
- (void)allocateResources:(CDUnknownBlockType)arg1;	// IMP=0x000000000001faaa
@property(readonly) double hapticLatency;
- (void)queryServerCapabilities:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f3d7
- (void)dealloc;	// IMP=0x000000000001f18a
- (id)initWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001ee71
@property(readonly) int state;
- (void)setState:(int)arg1;	// IMP=0x000000000001eac6
@property(readonly) _Bool running;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


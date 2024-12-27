//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCStreamInputManager
{
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_streamInputQueue;	// 96 = 0x60
    NSMutableDictionary *_streamInputs;	// 104 = 0x68
}

+ (id)sharedInstance;	// IMP=0x00100000001be376
- (void)didResumeStreamInput:(id)arg1;	// IMP=0x00000000001bffa9
- (void)didSuspendStreamInput:(id)arg1;	// IMP=0x00000000001bfef5
- (void)didStopStreamInput:(id)arg1;	// IMP=0x00000000001bfe41
- (void)didStartStreamInput:(id)arg1;	// IMP=0x00000000001bfd8d
- (id)streamInputWithID:(long long)arg1;	// IMP=0x00000000001bfc23
- (void)deregisterBlocksForService;	// IMP=0x00000000001bfbea
- (void)registerBlocksForService;	// IMP=0x00000000001bfad7
- (void)registerDidClientDieBlock:(id)arg1;	// IMP=0x00000000001bf98b
- (void)registerService:(char *)arg1 weakSelf:(id)arg2 eventLogLevel:(int)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000001bf82f
- (void)registerService:(char *)arg1 weakSelf:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bf814
- (_Bool)pushSampleBufferWithXPCArguments:(id)arg1 result:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000001bf65a
- (_Bool)clientProcessDiedWithXPCArguments:(id)arg1 result:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000001bf477
- (_Bool)terminateStreamInputWithXPCArguments:(id)arg1 result:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000001bf13b
- (_Bool)getServerPidWithXPCArguments:(id)arg1 result:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000001bef50
- (_Bool)initializeStreamInputWithXPCArguments:(id)arg1 result:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000001be853
- (id)newStreamInputID;	// IMP=0x00000000001be6f9
- (void)dealloc;	// IMP=0x00000000001be667
- (id)autorelease;	// IMP=0x00000000001be65e
- (oneway void)release;	// IMP=0x00000000001be658
- (unsigned long long)retainCount;	// IMP=0x00000000001be64b
- (id)retain;	// IMP=0x00000000001be642
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001be639
- (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001be62c
- (id)init;	// IMP=0x00000000001be3bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


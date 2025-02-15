//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, VCMediaRecorderDelegate;

__attribute__((visibility("hidden")))
@interface VCMediaRecorderManager : NSObject
{
    NSMutableDictionary *_streamTokenList;	// 8 = 0x8
    id _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 24 = 0x18
}

+ (id)prepareURL:(id)arg1 forXPCWithSandboxing:(_Bool)arg2;	// IMP=0x00100000001715e6
+ (id)sharedInstance;	// IMP=0x001000000016fac5
- (id)newRequestWithArguments:(id)arg1 state:(unsigned char)arg2;	// IMP=0x0000000000171eb8
- (void)streamTokenDidCleanupAllRequests:(long long)arg1;	// IMP=0x0000000000171ba7
- (void)streamToken:(long long)arg1 didUpdateCapabilities:(unsigned int)arg2;	// IMP=0x0000000000171aff
- (void)streamToken:(long long)arg1 didFinishRequest:(id)arg2 didSucceed:(_Bool)arg3;	// IMP=0x0000000000171a75
- (void)saveImage:(id)arg1 movie:(id)arg2;	// IMP=0x000000000017181e
- (void)streamToken:(long long)arg1 didEndProcessingRequest:(id)arg2 urlContext:(const struct tagVCMediaRecorderDelegateURLContext *)arg3 error:(id)arg4;	// IMP=0x00000000001716eb
- (void)streamToken:(long long)arg1 didStartProcessingRequest:(id)arg2 error:(id)arg3;	// IMP=0x0000000000171549
- (void)notifyClientsWithStreamToken:(long long)arg1 service:(char *)arg2 arguments:(id)arg3;	// IMP=0x000000000017110a
- (void)deregisterBlocksFromService;	// IMP=0x0000000000171031
- (void)registerBlocksForService;	// IMP=0x00000000001700a1
- (id)newClientContextWithStreamToken:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000016ffb5
- (id)mediaRecorderFromClientContext:(id)arg1;	// IMP=0x000000000016ff24
- (_Bool)dispatchedRegisterMediaRecorder:(id)arg1 withStreamToken:(long long)arg2 andError:(id *)arg3;	// IMP=0x000000000016fcd1
- (void)registerMediaRecorder:(id)arg1 withStreamToken:(long long)arg2;	// IMP=0x000000000016fc36
@property(nonatomic) id <VCMediaRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x000000000016fb98
- (id)init;	// IMP=0x000000000016fb0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


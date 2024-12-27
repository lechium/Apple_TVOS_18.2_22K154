//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MADServiceClientTaskQueuingScheduler, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, VCPMediaAnalysisClientProtocol;

@interface VCPMADServicePublicClientHandler
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <VCPMediaAnalysisClientProtocol> _clientProxy;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_managementQueue;	// 24 = 0x18
    struct CF<__SecTask *> _secTask;	// 32 = 0x20
    NSString *_clientBundleID;	// 40 = 0x28
    NSString *_clientTeamID;	// 48 = 0x30
    _Bool _userSafetyEntitled;	// 56 = 0x38
    MADServiceClientTaskQueuingScheduler *_queuingTaskScheduler;	// 64 = 0x40
}

+ (id)clientHandlerWithXPCConnection:(id)arg1;	// IMP=0x0020000000006ac1
- (id).cxx_construct;	// IMP=0x0020000000009ffb
- (void).cxx_destruct;	// IMP=0x0010000000009f77
- (void)requestProcessing:(id)arg1 multiModalInputs:(id)arg2 requestID:(int)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000009a69
- (void)requestMultiModalPrewarming:(id)arg1 requestID:(int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000095a4
- (void)requestTextProcessing:(id)arg1 textInputs:(id)arg2 requestID:(int)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000904b
- (void)requestTextPrewarming:(id)arg1 requestID:(int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008b86
- (void)submitSpotlightAssetURL:(id)arg1 uniqueIdentifier:(id)arg2 bundleIdentifier:(id)arg3 typeIdentifier:(id)arg4 sandboxToken:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x00100000000089c1
- (void)endEntryPoint;	// IMP=0x00100000000089bb
- (void)cacheHitWithQueryID:(unsigned long long)arg1 cachedResultQueryID:(unsigned long long)arg2 engagementSuggestionType:(id)arg3;	// IMP=0x00100000000089b5
- (void)cacheHitWithQueryID:(unsigned long long)arg1 cachedResultQueryID:(unsigned long long)arg2;	// IMP=0x00100000000089af
- (void)startEntryPointWithQueryID:(unsigned long long)arg1 andEvent:(unsigned long long)arg2;	// IMP=0x00100000000089a9
- (void)startEntryPointWithQueryID:(unsigned long long)arg1;	// IMP=0x00100000000089a3
- (void)queryUserSafetyEnablement:(CDUnknownBlockType)arg1;	// IMP=0x00100000000087cb
- (void)cancelAllRequests;	// IMP=0x001000000000869f
- (void)cancelRequest:(int)arg1;	// IMP=0x0010000000008568
- (void)currentOutstandingTasksWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008510
- (void)requestVideoProcessing:(id)arg1 assetURL:(id)arg2 sandboxToken:(id)arg3 identifier:(id)arg4 requestID:(int)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000007d25
- (void)requestImageProcessing:(id)arg1 forAssetURL:(id)arg2 withSandboxToken:(id)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000007580
- (void);	// IMP=0x0010000000006dae
- (long long)consumeSandboxExtension:(id)arg1 url:(id)arg2;	// IMP=0x0010000000006b26
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00100000000062b4
- (id)init;	// IMP=0x00100000000062a6

@end


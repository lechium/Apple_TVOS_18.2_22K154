//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtCV23IntelligenceFlowRuntime23SessionXPCServiceServer6Server : NSObject
{
    MISSING_TYPE *sessionClientId;	// 0 = 0x0
    MISSING_TYPE *clientIdentityPack;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *sessionManager;	// 1887007839 = 0x7079745f
    MISSING_TYPE *clientCapabilities;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *clientProxy;	// 0 = 0x0
    MISSING_TYPE *transactionHookContainer;	// 1004300 = 0xf530c
    MISSING_TYPE *jsonDecoder;	// 19614 = 0x4c9e
    MISSING_TYPE *jsonEncoder;	// 1004300 = 0xf530c
}

- (void).cxx_destruct;	// IMP=0x00000000000d99c8
- (id)init;	// IMP=0x00000000000d9aaa
- (void)dealloc;	// IMP=0x00000000000d99ab
- (void)fetchSessionClientIdWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d974e
- (void)detachObservationFrom:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d94e2
- (void)attachAsObserverTo:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d903f
- (void)updateTransactionHookAttachmentStatus:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d8c77
- (void)generateStatementIdWithId:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d8915
- (void)sendWithMessageData:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d841c
- (void)endSessionWithId:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d7f3d
- (void)postTransactionWithSessionId:(id)arg1 eventProtos:(id)arg2 with:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d7b79
- (void)createSessionFromProtoEventsWithEventProtos:(id)arg1 configData:(id)arg2 xpcData:(id)arg3 with:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d70e3
- (void)startSessionWithId:(id)arg1 configData:(id)arg2 xpcData:(id)arg3 with:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d52b4
- (void)performSetupWithConfigData:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d3247

@end


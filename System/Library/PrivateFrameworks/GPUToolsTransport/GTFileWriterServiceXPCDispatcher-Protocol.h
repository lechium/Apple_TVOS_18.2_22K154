//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUToolsTransport/GTXPCDispatcher-Protocol.h>

@class NSObject;
@protocol GTXPCConnection, OS_xpc_object;

@protocol GTFileWriterServiceXPCDispatcher <GTXPCDispatcher>
- (void)writeFileData_sessionID_completionHandler_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)beginTransferSessionWithFileEntries_basePath_toDevice_options_sessionID_completionHandler_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)startTransfer_basePath_fromDevice_options_completionHandler_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)initiateTransfer_basePath_fromDevice_options_completionHandler_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GTFileWriterService;

@interface GTFileWriterServiceXPCDispatcher
{
    id <GTFileWriterService> _service;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000111d5
- (void)writeFileData_sessionID_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000001107e
- (void)beginTransferSessionWithFileEntries_basePath_toDevice_options_sessionID_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0010000000010c33
- (void)startTransfer_basePath_fromDevice_options_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x00100000000107d9
- (void)initiateTransfer_basePath_fromDevice_options_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x00100000000103b4
- (id)initWithService:(id)arg1 properties:(id)arg2;	// IMP=0x0010000000010314

@end


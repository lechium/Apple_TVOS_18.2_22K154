//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, NSURLResponse, NWURLError;
@protocol OS_dispatch_io;

__attribute__((visibility("hidden")))
@interface NWURLSessionResponseConsumerDownload : NSObject
{
    _Bool _isResuming;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSURLResponse *_currentResponse;	// 24 = 0x18
    NSURL *_fileURL;	// 32 = 0x20
    NSString *_tempFileName;	// 40 = 0x28
    NSObject<OS_dispatch_io> *_io;	// 48 = 0x30
    CDUnknownBlockType _pendingCompletionBlock;	// 56 = 0x38
    NWURLError *_error;	// 64 = 0x40
    long long _countOfBytesReceivedInternal;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000082bba0
- (id)createResumeInfo;	// IMP=0x000000000082bb30
@property(readonly) long long countOfBytesReceived;
@property(readonly) NSURLResponse *response;
- (void)task:(id)arg1 deliverData:(id)arg2 complete:(_Bool)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000082b790
- (void)task:(id)arg1 deliverResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000082b090

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


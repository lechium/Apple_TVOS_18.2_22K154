//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFileHandle, NSInputStream, NSObject;
@protocol OS_dispatch_io;

__attribute__((visibility("hidden")))
@interface __NSCFBackgroundDataTask
{
    struct shared_ptr<RequestBody> _requestBody;	// 24 = 0x18
    NSInputStream *_requestBodyStream;	// 40 = 0x28
    NSInputStream *_initialStream;	// 48 = 0x30
    NSFileHandle *_readHandle;	// 56 = 0x38
    NSObject<OS_dispatch_io> *_pipeIO;	// 64 = 0x40
    unsigned long long _numberOfOngoingWrites;	// 72 = 0x48
    _Bool _openedStreamDuringNeedNewBodyStream;	// 80 = 0x50
    _Bool _readingRequestBody;	// 81 = 0x51
}

- (id).cxx_construct;	// IMP=0x000000000011d494
- (void).cxx_destruct;	// IMP=0x000000000011d47e
- (void)dealloc;	// IMP=0x000000000011d402
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x000000000011d3a7
- (void)_onqueue_didFinishWithError:(id)arg1;	// IMP=0x000000000011d362
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000011d2b4
- (id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;	// IMP=0x000000000011d24a

@end


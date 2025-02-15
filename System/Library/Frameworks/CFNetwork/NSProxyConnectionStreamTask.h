//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSInputStream, NSObject, NSOutputStream, NSString, NSURLSessionStreamTask;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSProxyConnectionStreamTask
{
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    _Bool _isConnected;	// 48 = 0x30
    NSString *_host;	// 56 = 0x38
    int _port;	// 64 = 0x40
    _Bool _dataAvailableForReading;	// 68 = 0x44
    NSInputStream *_inputStream;	// 72 = 0x48
    NSOutputStream *_outputStream;	// 80 = 0x50
    NSURLSessionStreamTask *_streamTask;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000019ed8f
- (void)dealloc;	// IMP=0x000000000019ed51
- (void)cancel;	// IMP=0x000000000019ebf5
- (void)write:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000019ea1c
- (void)read:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000019e8fc
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4;	// IMP=0x000000000019e651
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;	// IMP=0x000000000019e54a
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x000000000019e36c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


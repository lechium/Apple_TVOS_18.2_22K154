//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSInputStream, NSMutableDictionary, NSNumber, NSOutputStream, NSString;
@protocol OS_dispatch_queue;

@interface _IDSDeviceConnection : NSObject
{
    NSString *_nsuuid;	// 8 = 0x8
    NSString *_service;	// 16 = 0x10
    NSString *_streamName;	// 24 = 0x18
    NSString *_serviceToken;	// 32 = 0x20
    NSString *_connectionUUID;	// 40 = 0x28
    NSString *_clientName;	// 48 = 0x30
    CDUnknownBlockType _openSocketCompletionHandler;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_openSocketCompletionHandlerQueue;	// 64 = 0x40
    NSString *_openSocketCompletionHandlerID;	// 72 = 0x48
    NSInputStream *_inputStreamForSocket;	// 80 = 0x50
    NSOutputStream *_outputStreamForSocket;	// 88 = 0x58
    NSNumber *_clientTimeout;	// 96 = 0x60
    NSMutableDictionary *_awdMetrics;	// 104 = 0x68
    unsigned long long _mtu;	// 112 = 0x70
    int _socket;	// 120 = 0x78
    _Bool _isDefaultPairedDevice;	// 124 = 0x7c
    _Bool _hasTimedOut;	// 125 = 0x7d
}

- (void).cxx_destruct;	// IMP=0x0000000000090cc0
- (id)deviceConnectionKey;	// IMP=0x0000000000090c93
- (void)_daemonDied:(id)arg1;	// IMP=0x0000000000090b59
- (void)_cleanupCompletionBlock;	// IMP=0x0000000000090afe
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;	// IMP=0x0000000000090432
- (void)_close;	// IMP=0x000000000008ff6a
- (void)close;	// IMP=0x000000000008febe
- (_Bool)updateConnectionWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008fb19
- (void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;	// IMP=0x000000000008f94c
@property(readonly, nonatomic) NSDictionary *metrics;
@property(readonly, nonatomic) unsigned long long mtu;
@property(readonly, nonatomic) NSOutputStream *outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream;
@property(readonly, nonatomic) int socket;
- (void)_connect;	// IMP=0x000000000008f3dc
- (void)dealloc;	// IMP=0x000000000008f2ba
- (id)initWithDevice:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x000000000008e10e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AXIPCOutstandingAsyncRequest : NSObject
{
    unsigned int _replyPort;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_replyQueue;	// 16 = 0x10
    CDUnknownBlockType _replyHandler;	// 24 = 0x18
    struct __CFRunLoopSource *_replyMachPortSource;	// 32 = 0x20
}

+ (void)registerOutstandingRequest:(id)arg1;	// IMP=0x006000000002c1b9
+ (void)unregisterByPort:(unsigned int)arg1;	// IMP=0x006000000002c13a
+ (id)lookupByPort:(unsigned int)arg1;	// IMP=0x006000000002c09a
+ (void)initialize;	// IMP=0x006000000002bffe
- (void).cxx_destruct;	// IMP=0x000000000002c82f
@property(readonly, nonatomic) struct __CFRunLoopSource *replyMachPortSource; // @synthesize replyMachPortSource=_replyMachPortSource;
@property(readonly, nonatomic) CDUnknownBlockType replyHandler; // @synthesize replyHandler=_replyHandler;
@property(readonly, nonatomic) unsigned int replyPort; // @synthesize replyPort=_replyPort;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
- (void)initialSendAborted;	// IMP=0x000000000002c7c4
- (void)sendOnceRightDestroyed;	// IMP=0x000000000002c6a4
- (void)rawResponseReceived:(id)arg1;	// IMP=0x000000000002c651
- (void)_responseReceived:(id)arg1;	// IMP=0x000000000002c4f2
- (void)registerAndListenForResponse;	// IMP=0x000000000002c495
- (void)dealloc;	// IMP=0x000000000002c3b8
- (id)initWithReplyPort:(unsigned int)arg1 handlerQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002c261

@end


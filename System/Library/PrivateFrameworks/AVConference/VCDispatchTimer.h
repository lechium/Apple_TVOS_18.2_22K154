//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCDispatchTimer
{
    CDUnknownBlockType _callbackBlock;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_timer;	// 96 = 0x60
    unsigned int _intervalMilliseconds;	// 104 = 0x68
    _Bool _running;	// 108 = 0x6c
    NSObject<OS_dispatch_queue> *_clientQueue;	// 112 = 0x70
}

@property(readonly, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_running;
- (void)stop;	// IMP=0x00000000000c2137
- (void)start;	// IMP=0x00000000000c1f26
- (void)dealloc;	// IMP=0x00000000000c1b2d
- (id)initWithIntervalMilliseconds:(unsigned int)arg1 callbackBlock:(CDUnknownBlockType)arg2 clientQueue:(id)arg3;	// IMP=0x00000000000c1555
- (id)initWithIntervalSeconds:(unsigned int)arg1 callbackBlock:(CDUnknownBlockType)arg2 clientQueue:(id)arg3;	// IMP=0x00000000000c153d
- (id)initWithIntervalMilliseconds:(unsigned int)arg1 callbackBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c1528
- (id)initWithIntervalSeconds:(unsigned int)arg1 callbackBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c150d

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface HHADispatchTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;	// 8 = 0x8
    CDUnknownBlockType _callback;	// 16 = 0x10
    unsigned long long _timeout;	// 24 = 0x18
    unsigned long long _leeway;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000b38d
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) unsigned long long leeway; // @synthesize leeway=_leeway;
@property(readonly, nonatomic) unsigned long long timeout; // @synthesize timeout=_timeout;
- (void)start;	// IMP=0x000000000000b24e
- (void)cancel;	// IMP=0x000000000000b218
- (void)_handleTimerFired;	// IMP=0x000000000000b1e3
- (void)dealloc;	// IMP=0x000000000000b1a5
- (id)initWithDuration:(unsigned long long)arg1 leeway:(unsigned long long)arg2 queue:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x000000000000b0de

@end


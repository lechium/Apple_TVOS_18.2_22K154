//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSVBlockGuard, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCDeferrableTask : NSObject
{
    _Bool _finished;	// 8 = 0x8
    _Bool _deallocating;	// 9 = 0x9
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    NSString *_identifier;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CDUnknownBlockType _block;	// 32 = 0x20
    MSVBlockGuard *_guard;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001e923f
@property(nonatomic) _Bool deallocating; // @synthesize deallocating=_deallocating;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) MSVBlockGuard *guard; // @synthesize guard=_guard;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (void)taskDidExecute;	// IMP=0x00000000001e916b
- (void)execute:(long long)arg1;	// IMP=0x00000000001e8eff
- (void)dealloc;	// IMP=0x00000000001e8ea7
- (id)description;	// IMP=0x00000000001e8e1f
- (_Bool)cancel;	// IMP=0x00000000001e8d6e
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e8bd7

@end


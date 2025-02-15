//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLDispatchSilo.h"

@class NSMutableArray;

@interface CLTimeCoercibleDispatchSilo : CLDispatchSilo
{
    NSMutableArray *_timerHolders;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000001b16b
@property(readonly, nonatomic) NSMutableArray *timerHolders; // @synthesize timerHolders=_timerHolders;
- (id)newTimer;	// IMP=0x000000000001b0d5
- (void)heartBeat:(id)arg1;	// IMP=0x000000000001b016
- (void)afterInterval:(double)arg1 async:(CDUnknownBlockType)arg2;	// IMP=0x000000000001af17
- (void)prepareAndRunBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001af05
- (void)setLatchedAbsoluteTimestamp:(double)arg1;	// IMP=0x000000000001ab5d
- (id)initWithUnderlyingQueue:(id)arg1;	// IMP=0x000000000001aaf0
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000001aa83

@end


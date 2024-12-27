//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MFObservable.h"

@class NSLock;
@protocol MFObservable;

__attribute__((visibility("hidden")))
@interface _MFDistinctUntilChangedObservable : MFObservable
{
    id <MFObservable> _observable;	// 8 = 0x8
    id _lastObservedResult;	// 16 = 0x10
    NSLock *_lock;	// 24 = 0x18
}

- (_Bool)_isLastResultDistinctFromResult:(id)arg1;	// IMP=0x0000000000006427
- (id)subscribe:(id)arg1;	// IMP=0x0000000000006253
- (id)initWithObservable:(id)arg1;	// IMP=0x00000000000061e5
- (void)dealloc;	// IMP=0x000000000000617f

@end


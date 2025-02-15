//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LTInterruptionHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000010794
- (void)_didReceiveInterruption;	// IMP=0x00000000000105b0
- (id)addObservationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010544
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000010448
- (void)addObserver:(id)arg1;	// IMP=0x000000000001034f
- (id)init;	// IMP=0x00000000000102c4

@end


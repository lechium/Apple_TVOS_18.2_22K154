//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BLSHWaiterForBacklight.h"

__attribute__((visibility("hidden")))
@interface BLSHWaiterForBacklightDisplayMode : BLSHWaiterForBacklight
{
    CDUnknownBlockType _predicate;	// 24 = 0x18
    long long _displayMode;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004416c
- (void)backlight:(id)arg1 didUpdateToDisplayMode:(long long)arg2 fromDisplayMode:(long long)arg3 activeEvents:(id)arg4 abortedEvents:(id)arg5;	// IMP=0x0000000000044132
- (void)backlight:(id)arg1 willUpdateToDisplayMode:(long long)arg2 fromDisplayMode:(long long)arg3 forEvents:(id)arg4 abortedEvents:(id)arg5;	// IMP=0x000000000004412c
- (_Bool)observesUpdateToDisplayMode;	// IMP=0x0000000000044124
- (_Bool)isAlreadyAtDesiredState;	// IMP=0x00000000000440bf
- (_Bool)isDesiredDisplayMode:(long long)arg1;	// IMP=0x000000000004408e
- (id)initWithPredicate:(CDUnknownBlockType)arg1;	// IMP=0x000000000004401c
- (id)initWithDisplayMode:(long long)arg1;	// IMP=0x0000000000043fd8

@end


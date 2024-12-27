//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction;

__attribute__((visibility("hidden")))
@interface _SBInstallProgressStateTransition
{
    double _totalElapsedTime;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    CAMediaTimingFunction *_timingFunction;	// 24 = 0x18
    long long _fromState;	// 32 = 0x20
    long long _toState;	// 40 = 0x28
    double _fraction;	// 48 = 0x30
}

+ (Class)_classForTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x006000000000b617
+ (id)newTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x006000000000b5cf
- (void).cxx_destruct;	// IMP=0x000000000000b8b6
- (void)_updateView:(id)arg1;	// IMP=0x000000000000b83e
- (_Bool)isCompleteWithView:(id)arg1;	// IMP=0x000000000000b81b
- (void)completeTransitionAndUpdateView:(id)arg1;	// IMP=0x000000000000b7f4
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;	// IMP=0x000000000000b748
- (id)_initWithFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x000000000000b689

@end


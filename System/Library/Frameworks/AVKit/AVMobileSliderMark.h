//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface AVMobileSliderMark : NSObject
{
    float _startValue;	// 8 = 0x8
    float _endValue;	// 12 = 0xc
    UIColor *_filledColor;	// 16 = 0x10
    UIColor *_unfilledColor;	// 24 = 0x18
    unsigned long long _markType;	// 32 = 0x20
}

+ (id)liveEdgeMarkAtValue:(float)arg1;	// IMP=0x006000000008d53b
+ (id)interstitialMarkAtValue:(float)arg1;	// IMP=0x006000000008d491
- (void).cxx_destruct;	// IMP=0x000000000008d469
@property(readonly, nonatomic) unsigned long long markType; // @synthesize markType=_markType;
@property(readonly, nonatomic) UIColor *unfilledColor; // @synthesize unfilledColor=_unfilledColor;
@property(readonly, nonatomic) UIColor *filledColor; // @synthesize filledColor=_filledColor;
@property(readonly, nonatomic) float endValue; // @synthesize endValue=_endValue;
@property(readonly, nonatomic) float startValue; // @synthesize startValue=_startValue;
- (id)initWithStartValue:(float)arg1 endValue:(float)arg2 filledColor:(id)arg3 unfilledColor:(id)arg4 markWithType:(unsigned long long)arg5;	// IMP=0x000000000008d372

@end


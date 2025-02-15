//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol UIViewSpringAnimationBehaviorDescribing;

__attribute__((visibility("hidden")))
@interface UIResponseFactorViewSpringAnimationBehavior : NSObject
{
    id <UIViewSpringAnimationBehaviorDescribing> _wrappedBehavior;	// 8 = 0x8
    double _responseFactor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000015e8952
@property(nonatomic) double responseFactor; // @synthesize responseFactor=_responseFactor;
@property(retain, nonatomic) id <UIViewSpringAnimationBehaviorDescribing> wrappedBehavior; // @synthesize wrappedBehavior=_wrappedBehavior;
- (CDStruct_aa45ca86)parametersForTransitionFromState:(int)arg1 toState:(int)arg2;	// IMP=0x00000000015e887c
- (id)initWithWrapedBehavior:(id)arg1 responseFactor:(double)arg2;	// IMP=0x00000000015e8801

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface MKLookAroundPresentAnimationController : NSObject
{
    UIView *_sourceView;	// 8 = 0x8
    struct CGRect _initialFrame;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003f53c
- (void)animateTransition:(id)arg1;	// IMP=0x000000000003f04e
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000003f037
- (_Bool)_shouldUseSpringWithDampingAnimationStyle;	// IMP=0x000000000003f020
- (id)initWithSourceView:(id)arg1 initialFrame:(struct CGRect)arg2;	// IMP=0x000000000003ef98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI15SideBarAnimator : NSObject
{
    MISSING_TYPE *preTransitionHandler;	// 8 = 0x8
    MISSING_TYPE *startDelay;	// 24 = 0x18
    MISSING_TYPE *completionHandler;	// 32 = 0x20
    MISSING_TYPE *splitViewController;	// 48 = 0x30
    MISSING_TYPE *pillView;	// 56 = 0x38
    MISSING_TYPE *profileController;	// 64 = 0x40
    MISSING_TYPE *animationType;	// 72 = 0x48
    MISSING_TYPE *participants;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000007177a9
- (id)init;	// IMP=0x0000000000717776
- (void)animateTransition:(id)arg1;	// IMP=0x000000000071770d
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000000715587
@property(nonatomic, readonly) NSString *description;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC12IdleScreenUI26AerialScreenSaverViewModel : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *_currentItem;	// 1143958386 = 0x442f6b72
    MISSING_TYPE *_currentItemStartTime;	// 0 = 0x0
    MISSING_TYPE *_shouldPause;	// 68352 = 0x10b00
    MISSING_TYPE *_isPreparingForPresentation;	// 1937330991 = 0x7379532f
    MISSING_TYPE *_isTransitioningAssets;	// 1362064235 = 0x512f736b
    MISSING_TYPE *_transitionSignpostIntervalState;	// 1918989649 = 0x72617551
    MISSING_TYPE *retailScreenSaverTimeout;	// 25970 = 0x6572
    MISSING_TYPE *retailScreenSaverTimer;	// 12 = 0xc
    MISSING_TYPE *labelViewState;	// 3 = 0x3
    MISSING_TYPE *labelViewStateChangeSubscription;	// 24 = 0x18
    MISSING_TYPE *transitionAnimationDuration;	// 101712005 = 0x6100085
    MISSING_TYPE *transitionAnimation;	// 79 = 0x4f
    MISSING_TYPE *transitionSubject;	// 65536 = 0x10000
    MISSING_TYPE *transitionSubjectSubscription;	// 1937330991 = 0x7379532f
    MISSING_TYPE *playbackStartStyle;	// 2003135841 = 0x77656d61
    MISSING_TYPE *currentItemIndex;	// 1919052108 = 0x7262694c
    MISSING_TYPE *assets;	// 1701013878 = 0x65636976
    MISSING_TYPE *localizationBundleURL;	// 1835102790 = 0x6d617246
    MISSING_TYPE *controller;	// 1412395883 = 0x542f736b
    MISSING_TYPE *aerialsStartDate;	// 1699960404 = 0x65535654
    MISSING_TYPE *contentCategory;	// 29541 = 0x7365
    MISSING_TYPE *onReadyForDisplay;	// 12 = 0xc
}

- (void).cxx_destruct;	// IMP=0x0000000000020570
- (id)init;	// IMP=0x0000000000021da0
- (void)dealloc;	// IMP=0x0000000000020550
- (void)screenSaverService:(id)arg1 didUpdateConfiguration:(id)arg2;	// IMP=0x0000000000021e10

@end


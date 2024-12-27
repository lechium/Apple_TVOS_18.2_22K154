//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BSSimpleAssertion, UIInputViewSetNotificationInfo, UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollToDismissSupport
{
    UIScrollView *_scrollViewForTransition;	// 32 = 0x20
    _Bool _scrollViewShowsHorizontalScrollIndicator;	// 40 = 0x28
    _Bool _scrollViewTransitionFinishing;	// 41 = 0x29
    BSSimpleAssertion *_interfaceAutorotationDisabledAssertion;	// 48 = 0x30
    struct CGPoint _scrollViewTransitionPreviousPoint;	// 56 = 0x38
    UIInputViewSetNotificationInfo *_scrollViewNotificationInfo;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000e9573d
- (void)_updateKeyboardLayoutGuideForScrollTransitionWithSize:(struct CGSize)arg1 hostFrame:(struct CGRect)arg2 duration:(double)arg3;	// IMP=0x0000000000e94f66
- (struct CGRect)addPaddingToFrame:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x0000000000e94ec7
- (id)_infoForMatchMove;	// IMP=0x0000000000e94b24
- (void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2;	// IMP=0x0000000000e9469f
- (void)scrollView:(id)arg1 didPanWithGesture:(id)arg2;	// IMP=0x0000000000e93c30
- (void)completeKeyboardDismiss:(unsigned long long)arg1 withDuration:(double)arg2;	// IMP=0x0000000000e938a8
- (id)cancelNotificationsForMode:(unsigned long long)arg1;	// IMP=0x0000000000e9383a
- (void)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;	// IMP=0x0000000000e936ab
- (void)finishScrollViewTransitionForController:(id)arg1;	// IMP=0x0000000000e93691
- (void)setInterfaceAutorotationDisabled:(_Bool)arg1 forController:(id)arg2;	// IMP=0x0000000000e932e9
- (void)finishScrollViewTransition;	// IMP=0x0000000000e93271
- (void)hideScrollViewHorizontalScrollIndicator:(_Bool)arg1;	// IMP=0x0000000000e931e9
- (void)updateScrollViewContentInsetBottom:(double)arg1;	// IMP=0x0000000000e93147
@property(readonly, nonatomic) _Bool isFinishingDismissTransition;

@end


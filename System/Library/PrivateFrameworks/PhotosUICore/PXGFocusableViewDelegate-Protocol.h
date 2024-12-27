//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXGFocusableView, UIFocusAnimationCoordinator, UIFocusMovementHint, UIFocusUpdateContext;

@protocol PXGFocusableViewDelegate <NSObject>

@optional
- (void)focusableView:(PXGFocusableView *)arg1 didHintFocusMovement:(UIFocusMovementHint *)arg2;
- (void)focusableView:(PXGFocusableView *)arg1 didUpdateFocusInContext:(UIFocusUpdateContext *)arg2 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg3;
- (void)focusableViewDidUpdateUserInfo:(PXGFocusableView *)arg1;
@end


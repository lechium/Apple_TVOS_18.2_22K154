//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UIFocusEnginePanGestureRecognizer;

@protocol _UIFocusEnginePanGestureTouchObserver <NSObject>
- (void)focusEnginePanGesture:(_UIFocusEnginePanGestureRecognizer *)arg1 touchCancelledAtDigitizerLocation:(struct CGPoint)arg2;
- (void)focusEnginePanGesture:(_UIFocusEnginePanGestureRecognizer *)arg1 touchEndedAtDigitizerLocation:(struct CGPoint)arg2;
- (void)focusEnginePanGesture:(_UIFocusEnginePanGestureRecognizer *)arg1 touchMovedToDigitizerLocation:(struct CGPoint)arg2;
- (void)focusEnginePanGesture:(_UIFocusEnginePanGestureRecognizer *)arg1 touchBeganAtDigitizerLocation:(struct CGPoint)arg2;
@end


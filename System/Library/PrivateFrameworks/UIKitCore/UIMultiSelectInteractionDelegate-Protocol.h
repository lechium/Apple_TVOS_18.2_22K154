//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSIndexPath, UIGestureRecognizer, UIMultiSelectInteraction, UIScrollView;

@protocol UIMultiSelectInteractionDelegate <NSObject>
- (void)didEndMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 atPoint:(struct CGPoint)arg2;
- (void)multiSelectInteraction:(UIMultiSelectInteraction *)arg1 appendSelectionAtPoint:(struct CGPoint)arg2;
- (_Bool)shouldAllowSelectionExtensionAtPoint:(struct CGPoint)arg1;
- (void)multiSelectInteraction:(UIMultiSelectInteraction *)arg1 toggleSelectionStateUpToPoint:(struct CGPoint)arg2;
- (void)willBeginMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 atPoint:(struct CGPoint)arg2 keepCurrentSelection:(_Bool)arg3;
- (_Bool)shouldBeginMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 ofType:(long long)arg2 atPoint:(struct CGPoint)arg3 withVelocity:(struct CGPoint)arg4;
- (_Bool)interaction:(UIMultiSelectInteraction *)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(_Bool)arg1;
- (_Bool)isInMultiSelectMode;
- (_Bool)supportsMultiSelectInteraction:(UIMultiSelectInteraction *)arg1;

@optional
- (void)willBeginMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)shouldBeginMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 atPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (_Bool)interaction:(UIMultiSelectInteraction *)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2;
- (void)automaticallyTransitionToMultiSelectMode;
- (UIScrollView *)childScrollViewAtLocation:(struct CGPoint)arg1;
- (void)multiSelectInteraction:(UIMultiSelectInteraction *)arg1 extendSelectionInDirection:(unsigned long long)arg2;
- (_Bool)supportsKeyboardSelectionExtension;
- (_Bool)multiSelectInteraction:(UIMultiSelectInteraction *)arg1 shouldStartBandSelectionAtPoint:(struct CGPoint)arg2;
- (void)multiSelectInteraction:(UIMultiSelectInteraction *)arg1 toggleSelectionWithinRect:(struct CGRect)arg2 leadingPoint:(struct CGPoint)arg3;
- (void)multiSelectInteraction:(UIMultiSelectInteraction *)arg1 selectItemsWithinRect:(struct CGRect)arg2 leadingPoint:(struct CGPoint)arg3;
- (void)didCancelMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)multiSelectInteractionGestureShouldPreventDragLiftGesture:(UIGestureRecognizer *)arg1;
- (_Bool)shouldAllowSelectionExtensionAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)shouldAllowSelectionAppendageAtPoint:(struct CGPoint)arg1;
@end


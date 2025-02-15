//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIKeyboardAsyncTextSelectionController
{
    _Bool _shouldDelayShowSelectionCommands;	// 8 = 0x8
}

- (id)webInputDelegate;	// IMP=0x0000000000eff014
- (void)endFloatingCursor;	// IMP=0x0000000000efefd7
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000efef7e
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000efef25
- (void)modifySelectionWithExtentPoint:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000efef13
- (void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;	// IMP=0x0000000000efef01
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 withBoundary:(long long)arg2 executionContext:(id)arg3;	// IMP=0x0000000000efeb7a
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000efe788
- (void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(struct CGPoint)arg2 executionContext:(id)arg3;	// IMP=0x0000000000efe39a
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000efe0ac
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 executionContext:(id)arg3;	// IMP=0x0000000000efddd7
- (void)showSelectionView;	// IMP=0x0000000000efdd68
- (void)showSelectionCommands;	// IMP=0x0000000000efdca9
- (void)setRangedSelectionShouldShowGrabbers:(_Bool)arg1;	// IMP=0x0000000000efda4a
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4;	// IMP=0x0000000000efd5de
- (void)selectPositionAtPoint:(struct CGPoint)arg1 granularity:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000efd510
- (void)selectPositionAtPoint:(struct CGPoint)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000efd4f9
- (void)selectPositionAtPoint:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000efd137
- (_Bool)shouldAllowSelectionGestureWithTouchType:(long long)arg1 atPoint:(struct CGPoint)arg2 toProgressToState:(long long)arg3;	// IMP=0x0000000000efd0ac
- (struct CGRect)caretRectForRightmostSelectedPosition;	// IMP=0x0000000000efceae
- (struct CGRect)caretRectForLeftmostSelectedPosition;	// IMP=0x0000000000efccb0
- (_Bool)cursorPositionIsContainedByRange:(id)arg1;	// IMP=0x0000000000efc9e4

@end


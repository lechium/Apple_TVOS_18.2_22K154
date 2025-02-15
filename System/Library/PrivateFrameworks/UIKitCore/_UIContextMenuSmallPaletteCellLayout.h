//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor, UIShape, _UIContextMenuCellContentView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuSmallPaletteCellLayout : NSObject
{
    _UIContextMenuCellContentView *_contentView;	// 8 = 0x8
    NSArray *_managedConstraints;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000150401c
@property(retain, nonatomic) NSArray *managedConstraints; // @synthesize managedConstraints=_managedConstraints;
@property(nonatomic) __weak _UIContextMenuCellContentView *contentView; // @synthesize contentView=_contentView;
- (struct CGRect)_rectForHighlightContentShape;	// IMP=0x0000000001503d53
@property(readonly, nonatomic) long long focusStyle;
@property(readonly, nonatomic) _Bool useContentShapeForSelectionHighlight;
@property(readonly, nonatomic) UIShape *contentShape;
- (void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000001503c8c
- (void)removeConstraints;	// IMP=0x0000000001503c25
- (void)updateConstraints;	// IMP=0x0000000001503c1f
- (void)installConstraints;	// IMP=0x00000000015034ad
@property(readonly, nonatomic) UIColor *preferredBackgroundColorForCurrentState;
@property(readonly, nonatomic) UIColor *preferredContentColorForCurrentState;
- (id)preferredIconFontUsingBoldFont:(_Bool)arg1;	// IMP=0x000000000150335b
@property(readonly, nonatomic) unsigned long long labelMaximumNumberOfLines;
@property(readonly, nonatomic) long long labelTextAlignment;
@property(readonly, nonatomic) long long layoutSize;
- (id)initWithContentView:(id)arg1;	// IMP=0x0000000001503294

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableView.h"

@class NSMutableArray, NSMutableIndexSet, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UIPickerTableView : UITableView
{
    struct CGRect _selectionBarRect;	// 168 = 0xa8
    long long _selectionBarRow;	// 200 = 0xc8
    NSMutableIndexSet *_checkedRows;	// 208 = 0xd0
    double _lastClickedOffset;	// 216 = 0xd8
    long long _lastSelectedRow;	// 224 = 0xe0
    UIColor *_textColor;	// 232 = 0xe8
    struct CGRect _visibleRect;	// 240 = 0xf0
    NSMutableArray *_referencingCells;	// 272 = 0x110
    struct {
        unsigned int allowsMultipleSelection:1;
        unsigned int scrollingDirection:2;
        unsigned int didSelectDisabled:1;
        unsigned int skipRowChangeNotifications:1;
        unsigned int scrollingForSelection:1;
        unsigned int cancellingAnimation:1;
        unsigned int updatingContentInset:1;
    } _pickerTableFlags;	// 280 = 0x118
    _Bool _playsFeedback;	// 284 = 0x11c
    _Bool _generatorActivated;	// 285 = 0x11d
}

+ (_Bool)_isInternalTableView;	// IMP=0x0010000001045562
- (void).cxx_destruct;	// IMP=0x000000000104798a
@property(nonatomic) _Bool generatorActivated; // @synthesize generatorActivated=_generatorActivated;
@property(getter=_playsFeedback, setter=_setPlaysFeedback:) _Bool playsFeedback; // @synthesize playsFeedback=_playsFeedback;
@property(nonatomic) long long lastSelectedRow; // @synthesize lastSelectedRow=_lastSelectedRow;
@property(nonatomic) struct CGRect selectionBarRect; // @synthesize selectionBarRect=_selectionBarRect;
- (_Bool)_shouldWrapCells;	// IMP=0x00000000010478fe
@property(retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000010477ed
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000104765c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000010475e5
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;	// IMP=0x00000000010475dd
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000010475cb
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000104759d
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000000010474fc
- (void)_scrollViewDidInterruptDecelerating:(id)arg1;	// IMP=0x00000000010474ea
- (void)_deactivateFeedbackGeneratorIfNeeded;	// IMP=0x00000000010474e4
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000104745c
- (void)_scrollingFinished;	// IMP=0x0000000001047352
- (struct CGPoint)contentOffsetForRowAtIndexPath:(id)arg1;	// IMP=0x00000000010472bf
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000001047003
- (_Bool)_beginTrackingWithEvent:(id)arg1;	// IMP=0x0000000001046fbd
- (_Bool)isRowChecked:(long long)arg1;	// IMP=0x0000000001046fa0
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000001046ecd
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000001046dfa
@property(nonatomic, setter=_setSelectionBarRow:) long long selectionBarRow; // @synthesize selectionBarRow=_selectionBarRow;
- (void)_playClickIfNecessary;	// IMP=0x0000000001046d3b
- (id)_containerView;	// IMP=0x0000000001046cb6
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000001046c7a
- (id)_anyDateLabel;	// IMP=0x0000000001046bc3
- (void)layoutSubviews;	// IMP=0x00000000010467f7
- (void)setContentOffset:(struct CGPoint)arg1;	// IMP=0x00000000010467e0
- (void)_setContentOffset:(struct CGPoint)arg1 notify:(_Bool)arg2;	// IMP=0x0000000001046535
- (void)_notifyContentOffsetChange;	// IMP=0x00000000010464d8
- (struct CATransform3D)_transformForCellAtY:(double)arg1;	// IMP=0x00000000010463ba
- (long long)_contentInsetAdjustmentBehavior;	// IMP=0x00000000010463af
- (void)_updateContentInsets;	// IMP=0x0000000001046203
- (void)_rectChangedWithNewSize:(struct CGSize)arg1 oldSize:(struct CGSize)arg2;	// IMP=0x00000000010461c2
- (_Bool)didSelectDisabled:(_Bool)arg1;	// IMP=0x00000000010461a1
- (_Bool)selectRow:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3 updateChecked:(_Bool)arg4;	// IMP=0x0000000001045bf3
- (_Bool)selectRow:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;	// IMP=0x0000000001045bdb
- (id)_checkedRows;	// IMP=0x0000000001045b9a
- (_Bool)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000001045a81
- (struct CGRect)_selectionBarRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000001045a21
- (void)dealloc;	// IMP=0x0000000001045898
- (id)_pickerView;	// IMP=0x0000000001045813
- (struct CGRect)_visibleBounds;	// IMP=0x0000000001045793
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 visibleRect:(struct CGRect)arg3;	// IMP=0x000000000104556a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


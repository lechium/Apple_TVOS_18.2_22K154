//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIEditable-Protocol.h>
#import <UIKitCore/UITableConstantsTableProviding-Protocol.h>

@class UIColor, UIScrollView, UITableViewHeaderFooterView;

@protocol UITable <UIEditable, UITableConstantsTableProviding>
@property(readonly, nonatomic, getter=_multiselectCheckmarkColor) UIColor *multiselectCheckmarkColor;
@property(readonly, nonatomic, getter=_accessoryBaseColor) UIColor *accessoryBaseColor;
@property(readonly, nonatomic, getter=_supplementariesFollowSectionContentInsets) _Bool supplementariesFollowSectionContentInsets;
@property(readonly, nonatomic, getter=_supplementarySectionHeadersHugContent) _Bool supplementarySectionHeadersHugContent;
@property(readonly, nonatomic, getter=_sectionContentInsetFollowsLayoutMargins) _Bool sectionContentInsetFollowsLayoutMargins;
@property(readonly, nonatomic, getter=_sectionCornerRadius) double sectionCornerRadius;
@property(readonly, nonatomic, getter=_rawSectionContentInset) struct UIEdgeInsets rawSectionContentInset;
@property(readonly, nonatomic, getter=_sectionContentInset) struct UIEdgeInsets sectionContentInset;
@property(readonly, nonatomic, getter=_indexBarExtentFromEdge) double indexBarExtentFromEdge;
@property(readonly, nonatomic, getter=_indexFrame) struct CGRect indexFrame;
@property(readonly, nonatomic, getter=_isShowingIndex) _Bool showingIndex;
@property(readonly, nonatomic, getter=_bottomPadding) double bottomPadding;
@property(readonly, nonatomic, getter=_topPadding) double topPadding;
@property(nonatomic, setter=_setHeadersHugContent:) _Bool _sectionHeadersHugContent;
@property(readonly, nonatomic) _Bool cellLayoutMarginsFollowReadableWidth;
@property(readonly, nonatomic, getter=_cellSafeAreaInsets) struct UIEdgeInsets cellSafeAreaInsets;
@property(readonly, nonatomic, getter=_backgroundInset) double backgroundInset;
@property(readonly, nonatomic) _Bool overlapsSectionHeaderViews;
@property(readonly, nonatomic) _Bool usesVariableMargins;
@property(readonly, nonatomic, getter=_separatorInsetIsRelativeToCellEdges) _Bool separatorInsetIsRelativeToCellEdges;
@property(readonly, nonatomic) struct UIEdgeInsets separatorInset;
@property(readonly, nonatomic) double estimatedSectionFooterHeight;
@property(readonly, nonatomic) double estimatedSectionHeaderHeight;
@property(readonly, nonatomic) double estimatedRowHeight;
@property(readonly, nonatomic) double sectionFooterHeight;
@property(readonly, nonatomic) double sectionHeaderHeight;
@property(readonly, nonatomic) double rowHeight;
@property(readonly, nonatomic) _Bool allowsMultipleSelectionDuringEditing;
@property(readonly, nonatomic) _Bool allowsMultipleSelection;
@property(readonly, nonatomic, getter=_numberOfSections) long long numberOfSections;
@property(readonly, nonatomic, getter=_scrollView) UIScrollView *scrollView;
- (void)_headerFooterDidInvalidateIntrinsicContentSize:(UITableViewHeaderFooterView *)arg1;
- (_Bool)_shouldHaveFooterViewForSection:(long long)arg1;
- (_Bool)_shouldHaveHeaderViewForSection:(long long)arg1;
- (long long)_numberOfRowsInSection:(long long)arg1;
@end


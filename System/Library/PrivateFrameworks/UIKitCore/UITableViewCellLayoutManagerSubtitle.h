//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewCellLayoutManager.h"

__attribute__((visibility("hidden")))
@interface UITableViewCellLayoutManagerSubtitle : UITableViewCellLayoutManager
{
}

- (struct CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2;	// IMP=0x00000000012becaf
- (void)layoutSubviewsOfCell:(id)arg1;	// IMP=0x00000000012be984
- (void)getTextLabelRect:(struct CGRect *)arg1 detailTextLabelRect:(struct CGRect *)arg2 forCell:(id)arg3 rowWidth:(double)arg4 forSizing:(_Bool)arg5;	// IMP=0x00000000012be561
- (double)_textLabelYAdjustmentForCell:(id)arg1 totalTextRect:(struct CGRect)arg2;	// IMP=0x00000000012be2bb
- (id)defaultDetailTextLabelFontForCell:(id)arg1;	// IMP=0x00000000012be22b
- (id)detailTextLabelForCell:(id)arg1;	// IMP=0x00000000012be06f
- (id)textLabelForCell:(id)arg1;	// IMP=0x00000000012be031
- (id)imageViewForCell:(id)arg1;	// IMP=0x00000000012bdff3
- (double)defaultDetailTextLabelFontSizeForCell:(id)arg1;	// IMP=0x00000000012bdfe5
- (double)defaultTextLabelFontSizeForCell:(id)arg1;	// IMP=0x00000000012bdf5d

@end


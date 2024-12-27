//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVContainerCollectionViewCell.h"

@class NSString, UIView;
@protocol TVAuxiliaryViewSelecting;

__attribute__((visibility("hidden")))
@interface _TVCollectionViewCell : TVContainerCollectionViewCell
{
    UIView<TVAuxiliaryViewSelecting> *_selectingView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004a968
@property(nonatomic) __weak UIView<TVAuxiliaryViewSelecting> *selectingView; // @synthesize selectingView=_selectingView;
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x000000000004a8e8
- (void)layoutSubviews;	// IMP=0x000000000004a67b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


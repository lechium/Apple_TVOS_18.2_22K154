//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionReusableView.h"

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface _UISearchSuggestionsHeaderView : UICollectionReusableView
{
    UILabel *_titleLabel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000162cb31
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)prepareForReuse;	// IMP=0x000000000162ca69
@property(readonly, nonatomic) struct CGSize fittingSize;
@property(copy, nonatomic) NSString *title;
- (void)commonInit;	// IMP=0x000000000162c4c7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000162c46a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000162c41e

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class CNQuickActionButton;

__attribute__((visibility("hidden")))
@interface CNQuickActionCell : UICollectionViewCell
{
    _Bool _showTitle;	// 8 = 0x8
    _Bool _showBackgroundPlatter;	// 9 = 0x9
    CNQuickActionButton *_button;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008fc9d
@property(nonatomic) _Bool showBackgroundPlatter; // @synthesize showBackgroundPlatter=_showBackgroundPlatter;
@property(retain, nonatomic) CNQuickActionButton *button; // @synthesize button=_button;
@property(nonatomic) _Bool showTitle; // @synthesize showTitle=_showTitle;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000008f98a

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIEmojiNoResultsView : UIView
{
    UILabel *_noResultsLabel;	// 8 = 0x8
    UILabel *_createNewEmojiLabel;	// 16 = 0x10
    _Bool _supportsGenmoji;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000022de1c
@property(nonatomic) _Bool supportsGenmoji; // @synthesize supportsGenmoji=_supportsGenmoji;
- (void)createNewEmoji;	// IMP=0x000000000022dd77
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000022d83e

@end


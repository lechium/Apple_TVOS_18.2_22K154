//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemPanelUI/TVSPRenderer.h>

@interface TVSSInterstitialInfoRenderer : TVSPRenderer
{
    struct NSDirectionalEdgeInsets _contentInsets;	// 8 = 0x8
}

+ (id)titleFont;	// IMP=0x00400000000fcf60
- (_Bool)wantsFloatingContentView;	// IMP=0x00200000000fdfc0
- (_Bool)isFocusable;	// IMP=0x00100000000fdfa0
- (long long)focusStyle;	// IMP=0x00100000000fdf80
- (id)layoutConstraintsWithSubviews:(id)arg1 contentView:(id)arg2;	// IMP=0x00100000000fd940
- (id)subviewIdentifiersWantingAutolayout;	// IMP=0x00100000000fd870
- (struct CGSize)contentSizeForLayoutEnvironment:(id)arg1;	// IMP=0x00100000000fd490
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 contentInsets:(struct NSDirectionalEdgeInsets)arg3;	// IMP=0x00100000000fd070
- (id)initWithIdentifier:(id)arg1 content:(id)arg2;	// IMP=0x00100000000fcf90

@end


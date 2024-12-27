//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPCircularProgressIndicatorStyle, LPPadding, LPPointUnit, UIColor, UIFont, UIImageSymbolConfiguration;

__attribute__((visibility("hidden")))
@interface LPButtonStyle : NSObject
{
    _Bool _ignoresInvertColors;	// 8 = 0x8
    _Bool _enableUserInteractionForDecorativeButton;	// 9 = 0x9
    _Bool _showsChevronForSingleAction;	// 10 = 0xa
    _Bool _useSystemButtonAppearance;	// 11 = 0xb
    _Bool _useSegmentedControl;	// 12 = 0xc
    _Bool _prefersBehavioralStylePad;	// 13 = 0xd
    UIColor *_foregroundColor;	// 16 = 0x10
    UIColor *_backgroundColor;	// 24 = 0x18
    UIColor *_menuBackgroundColor;	// 32 = 0x20
    UIFont *_font;	// 40 = 0x28
    UIFont *_menuFont;	// 48 = 0x30
    UIImageSymbolConfiguration *_symbolConfiguration;	// 56 = 0x38
    LPPadding *_padding;	// 64 = 0x40
    LPPadding *_margin;	// 72 = 0x48
    LPPointUnit *_imagePadding;	// 80 = 0x50
    LPPointUnit *_menuMinimumWidth;	// 88 = 0x58
    LPPointUnit *_minimumWidth;	// 96 = 0x60
    LPPointUnit *_minimumHeight;	// 104 = 0x68
    LPPointUnit *_height;	// 112 = 0x70
    LPPointUnit *_additionalVerticalPadding;	// 120 = 0x78
    LPPointUnit *_indicatorSpacing;	// 128 = 0x80
    LPCircularProgressIndicatorStyle *_progressIndicatorStyle;	// 136 = 0x88
    long long _behavior;	// 144 = 0x90
}

+ (id)systemPillButtonStyleForPlatform:(long long)arg1 sizeClass:(unsigned long long)arg2;	// IMP=0x006000000006da28
- (void).cxx_destruct;	// IMP=0x000000000006e6e0
@property(nonatomic) long long behavior; // @synthesize behavior=_behavior;
@property(nonatomic) _Bool prefersBehavioralStylePad; // @synthesize prefersBehavioralStylePad=_prefersBehavioralStylePad;
@property(nonatomic) _Bool useSegmentedControl; // @synthesize useSegmentedControl=_useSegmentedControl;
@property(nonatomic) _Bool useSystemButtonAppearance; // @synthesize useSystemButtonAppearance=_useSystemButtonAppearance;
@property(nonatomic) _Bool showsChevronForSingleAction; // @synthesize showsChevronForSingleAction=_showsChevronForSingleAction;
@property(nonatomic) _Bool enableUserInteractionForDecorativeButton; // @synthesize enableUserInteractionForDecorativeButton=_enableUserInteractionForDecorativeButton;
@property(nonatomic) _Bool ignoresInvertColors; // @synthesize ignoresInvertColors=_ignoresInvertColors;
@property(retain, nonatomic) LPCircularProgressIndicatorStyle *progressIndicatorStyle; // @synthesize progressIndicatorStyle=_progressIndicatorStyle;
@property(retain, nonatomic) LPPointUnit *indicatorSpacing; // @synthesize indicatorSpacing=_indicatorSpacing;
@property(retain, nonatomic) LPPointUnit *additionalVerticalPadding; // @synthesize additionalVerticalPadding=_additionalVerticalPadding;
@property(retain, nonatomic) LPPointUnit *height; // @synthesize height=_height;
@property(retain, nonatomic) LPPointUnit *minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(retain, nonatomic) LPPointUnit *minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(retain, nonatomic) LPPointUnit *menuMinimumWidth; // @synthesize menuMinimumWidth=_menuMinimumWidth;
@property(retain, nonatomic) LPPointUnit *imagePadding; // @synthesize imagePadding=_imagePadding;
@property(retain, nonatomic) LPPadding *margin; // @synthesize margin=_margin;
@property(retain, nonatomic) LPPadding *padding; // @synthesize padding=_padding;
@property(retain, nonatomic) UIImageSymbolConfiguration *symbolConfiguration; // @synthesize symbolConfiguration=_symbolConfiguration;
@property(retain, nonatomic) UIFont *menuFont; // @synthesize menuFont=_menuFont;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *menuBackgroundColor; // @synthesize menuBackgroundColor=_menuBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
- (id)initWithPlatform:(long long)arg1;	// IMP=0x000000000006d93d

@end


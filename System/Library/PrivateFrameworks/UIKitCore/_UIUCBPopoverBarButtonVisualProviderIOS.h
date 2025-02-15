//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _UIUCBPopoverBarButtonVisualProviderIOS
{
    UIView *_selectionBackgroundView;	// 40 = 0x28
    UIColor *_selectionBackgroundTintColor;	// 48 = 0x30
    UIColor *_selectionTintColor;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000352e58
@property(retain, nonatomic) UIColor *selectionTintColor; // @synthesize selectionTintColor=_selectionTintColor;
@property(retain, nonatomic) UIColor *selectionBackgroundTintColor; // @synthesize selectionBackgroundTintColor=_selectionBackgroundTintColor;
- (void)updateButton:(id)arg1 forSelectedState:(_Bool)arg2;	// IMP=0x0000000000352d68
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;	// IMP=0x0000000000352a5b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000352990
- (unsigned long long)hash;	// IMP=0x0000000000352917
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003528a1
- (long long)_securePasteButtonSite;	// IMP=0x0000000000352896
- (id)init;	// IMP=0x00000000003527ca

@end


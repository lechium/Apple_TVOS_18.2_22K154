//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, UIImage, _UITabBarItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UITabBarAppearanceStorage : NSObject
{
    UIImage *backgroundImage;	// 8 = 0x8
    UIImage *shadowImage;	// 16 = 0x10
    UIImage *selectionIndicatorImage;	// 24 = 0x18
    UIColor *barTintColor;	// 32 = 0x20
    UIColor *selectedImageTintColor;	// 40 = 0x28
    _UITabBarItemAppearanceStorage *tabItemAppearanceStorage;	// 48 = 0x30
    UIColor *_unselectedImageTintColor;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000004418fe
@property(retain, nonatomic) UIColor *unselectedImageTintColor; // @synthesize unselectedImageTintColor=_unselectedImageTintColor;
@property(retain, nonatomic) UIColor *selectedImageTintColor; // @synthesize selectedImageTintColor;
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor;
@property(retain, nonatomic) UIImage *selectionIndicatorImage; // @synthesize selectionIndicatorImage;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage;
- (id)_tabItemAppearanceStorage;	// IMP=0x000000000044184e
@property(retain, nonatomic) _UITabBarItemAppearanceStorage *tabItemAppearanceStorage;

@end


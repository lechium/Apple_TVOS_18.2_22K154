//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIFont.h"

@class NSNumber;

@interface UIFont (Variant_Private)
+ (id)layoutMetrics;	// IMP=0x0020000000b15f1d
+ (void)registerLayoutMetrics:(Class)arg1;	// IMP=0x0020000000b15e38
+ (double)systemMinimumFontSize;	// IMP=0x0020000000b495e7
+ (double)defaultFontSize;	// IMP=0x0020000000b495ce
+ (void)_setDefaultFontSizesForUserInterfaceIdiom:(long long)arg1;	// IMP=0x0020000000b49600
+ (id)preferredContentSizeCategory;	// IMP=0x002000000139ed15
+ (id)_preferredContentSizeCategory:(unsigned long long)arg1;	// IMP=0x002000000139ecf9
+ (id)_normalizedContentSizeCategory:(id)arg1 default:(_Bool)arg2;	// IMP=0x002000000139eb99
@property(retain, nonatomic, setter=_setCachedVariantWeight:) NSNumber *_cachedVariantWeight;
- (id)_fontWithVariantWeight:(unsigned long long)arg1;	// IMP=0x001000000084685f
- (unsigned long long)_variantWeight;	// IMP=0x0010000000846527
- (unsigned short)_bulletGlyphWithOriginalFont:(id)arg1 fontForBulletRendering:(id *)arg2;	// IMP=0x001000000177c79d
- (unsigned short)_bulletGlyph;	// IMP=0x001000000177c787
- (id)_ui_bulletStringWithFont:(id *)arg1;	// IMP=0x001000000177c690
@end


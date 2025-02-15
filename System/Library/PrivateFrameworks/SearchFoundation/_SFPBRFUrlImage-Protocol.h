//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBRFAspectRatio, _SFPBRFColor, _SFPBRFSymbolImage;

@protocol _SFPBRFUrlImage <NSObject>
@property(readonly, nonatomic) unsigned long long whichPlaceholder_Image;
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) float inset_padding;
@property(nonatomic) int corner_rounding_mode;
@property(retain, nonatomic) _SFPBRFColor *background_color;
@property(nonatomic) int image_rendering_mode;
@property(nonatomic) int sizing_mode;
@property(retain, nonatomic) _SFPBRFAspectRatio *aspect_ratio;
@property(nonatomic) int image_style;
@property(retain, nonatomic) _SFPBRFSymbolImage *symbol_placeholder_image;
@property(copy, nonatomic) NSString *dark_mode_url;
@property(copy, nonatomic) NSString *url;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBImage, _SFPBPunchout, _SFPBRichText;

@protocol _SFPBRowCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBRichText *trailingSubtitle;
@property(retain, nonatomic) _SFPBRichText *leadingSubtitle;
@property(nonatomic) _Bool cardPaddingBottom;
@property(nonatomic) int valueWeight;
@property(nonatomic) _Bool valueNoWrap;
@property(copy, nonatomic) NSString *value;
@property(nonatomic) int keyWeight;
@property(nonatomic) _Bool keyNoWrap;
@property(copy, nonatomic) NSString *key;
@property(retain, nonatomic) _SFPBImage *attributionImage;
@property(retain, nonatomic) _SFPBRichText *trailingText;
@property(retain, nonatomic) _SFPBRichText *leadingText;
@property(nonatomic) _Bool imageIsRightAligned;
@property(retain, nonatomic) _SFPBImage *image;
@property(retain, nonatomic) _SFPBColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) _Bool hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(nonatomic) _Bool canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end


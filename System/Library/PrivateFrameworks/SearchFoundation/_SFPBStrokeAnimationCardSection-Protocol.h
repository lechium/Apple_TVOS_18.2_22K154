//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBPunchout;

@protocol _SFPBStrokeAnimationCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *pronunciations;
@property(copy, nonatomic) NSArray *characters;
@property(copy, nonatomic) NSArray *strokeNames;
@property(copy, nonatomic) NSString *strokeAnimationRepresentation;
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
- (NSString *)pronunciationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pronunciationsCount;
- (void)addPronunciations:(NSString *)arg1;
- (void)clearPronunciations;
- (NSString *)charactersAtIndex:(unsigned long long)arg1;
- (unsigned long long)charactersCount;
- (void)addCharacters:(NSString *)arg1;
- (void)clearCharacters;
- (NSString *)strokeNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)strokeNamesCount;
- (void)addStrokeNames:(NSString *)arg1;
- (void)clearStrokeNames;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end


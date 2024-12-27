//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBAbstractCommand, _SFPBColor, _SFPBImage, _SFPBPunchout, _SFPBRichText;

@protocol _SFPBAudioPlaybackCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBImage *thumbnail;
@property(retain, nonatomic) _SFPBRichText *subtitle;
@property(retain, nonatomic) _SFPBRichText *title;
@property(retain, nonatomic) _SFPBRichText *detailText;
@property(copy, nonatomic) NSArray *stopCommands;
@property(copy, nonatomic) NSArray *playCommands;
@property(nonatomic) int state;
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
- (_SFPBAbstractCommand *)stopCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)stopCommandsCount;
- (void)addStopCommands:(_SFPBAbstractCommand *)arg1;
- (void)clearStopCommands;
- (_SFPBAbstractCommand *)playCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)playCommandsCount;
- (void)addPlayCommands:(_SFPBAbstractCommand *)arg1;
- (void)clearPlayCommands;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end


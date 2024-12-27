//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSData, NSDictionary, NSString, SFImage, SFRichText;

@protocol SFVerticalLayoutCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) _Bool useAppIconMetrics;
@property(retain, nonatomic) SFRichText *thumbnailOverlayText;
@property(nonatomic) _Bool contentsLeading;
@property(retain, nonatomic) SFRichText *footnote;
@property(retain, nonatomic) SFRichText *title;
@property(retain, nonatomic) SFImage *thumbnail;
@property(copy, nonatomic) NSString *type;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSData, NSDictionary, NSString, SFImage, SFRichText;

@protocol SFCommandRowCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFRichText *subtitle;
@property(retain, nonatomic) SFRichText *toggledTitle;
@property(retain, nonatomic) SFRichText *title;
@property(retain, nonatomic) SFImage *toggledImage;
@property(retain, nonatomic) SFImage *image;
@property(copy, nonatomic) NSString *type;
@end


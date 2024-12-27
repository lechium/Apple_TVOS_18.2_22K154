//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFImage, SFRichText;

@protocol SFAudioPlaybackCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFImage *thumbnail;
@property(retain, nonatomic) SFRichText *subtitle;
@property(retain, nonatomic) SFRichText *title;
@property(retain, nonatomic) SFRichText *detailText;
@property(copy, nonatomic) NSArray *stopCommands;
@property(copy, nonatomic) NSArray *playCommands;
@property(nonatomic) int state;
@property(copy, nonatomic) NSString *type;
@end


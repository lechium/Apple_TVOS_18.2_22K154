//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFImage-Protocol.h>

@class NSData, NSDictionary, NSString, SFPunchout;

@protocol SFDefaultPunchoutAppIconImage <SFImage>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *fileProviderIdentifier;
@property(copy, nonatomic) NSString *coreSpotlightIdentifier;
@property(retain, nonatomic) SFPunchout *punchout;
@end


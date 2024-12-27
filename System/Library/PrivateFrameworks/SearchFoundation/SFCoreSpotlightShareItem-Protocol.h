//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFShareItem-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol SFCoreSpotlightShareItem <SFShareItem>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *coreSpotlightIdentifier;
@property(copy, nonatomic) NSString *applicationBundleIdentifier;
@property(copy, nonatomic) NSString *shareProviderTypeIdentifier;
@end


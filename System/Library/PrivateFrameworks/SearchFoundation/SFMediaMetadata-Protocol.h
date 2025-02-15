//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFMediaMetadata <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *mediaIdentifier;
@property(copy, nonatomic) NSString *disambiguationTitle;
@property(copy, nonatomic) NSArray *bundleIdentifiersToExclude;
@property(copy, nonatomic) NSArray *mediaPunchouts;
@property(copy, nonatomic) NSString *albumName;
@property(copy, nonatomic) NSString *artistName;
@property(nonatomic) int mediaType;
@property(copy, nonatomic) NSString *mediaName;
@end


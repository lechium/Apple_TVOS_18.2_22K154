//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol _CPPhotosAttributes <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int photosSuggestionType;
@property(nonatomic) _Bool isFavorite;
@property(nonatomic) _Bool isVideo;
@property(nonatomic) _Bool isMetadataMatched;
@property(nonatomic) _Bool isEmbeddingMatched;
@property(nonatomic) unsigned long long positionIndex;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end


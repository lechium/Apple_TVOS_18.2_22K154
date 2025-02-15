//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol _CPQueryUnderstandingParse <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) _Bool isBlocklistedQuery;
@property(nonatomic) _Bool isUnsafeQuery;
@property(nonatomic) int spotlightQueryIntent;
@property(nonatomic) _Bool hasPersonSenderTokens;
@property(nonatomic) _Bool hasPersonTokens;
@property(nonatomic) _Bool hasSourceAppTokens;
@property(nonatomic) _Bool hasFavoritedTokens;
@property(nonatomic) _Bool hasCaptureDeviceTokens;
@property(nonatomic) _Bool hasGenericLocationTokens;
@property(nonatomic) _Bool hasEventTokens;
@property(nonatomic) _Bool hasTimeTokens;
@property(nonatomic) _Bool hasNounTokens;
@property(nonatomic) _Bool hasVisualQualityTokens;
@property(nonatomic) _Bool hasMediaTypeTokens;
@property(nonatomic) _Bool hasActionTokens;
@property(nonatomic) _Bool hasLocationTokens;
@property(nonatomic) _Bool hasSortCriteriaTokens;
@property(nonatomic) _Bool hasUnspecifiedTokens;
@property(nonatomic) int queryIntentType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end


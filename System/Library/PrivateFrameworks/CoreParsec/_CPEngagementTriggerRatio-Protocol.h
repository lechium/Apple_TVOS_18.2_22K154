//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol _CPEngagementTriggerRatio <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int totalEngagements;
@property(nonatomic) float tap;
@property(nonatomic) float go;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end


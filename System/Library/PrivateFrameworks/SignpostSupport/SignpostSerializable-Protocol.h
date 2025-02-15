//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SignpostSupport/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@protocol SignpostSerializable <NSObject>
+ (NSNumber *)serializationTypeNumber;
- (NSString *)humanReadableType;
- (NSDictionary *)humanReadableDictionaryRepresentation;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (NSDictionary *)serializeableDictionaryWithShouldRedact:(_Bool)arg1;
@end


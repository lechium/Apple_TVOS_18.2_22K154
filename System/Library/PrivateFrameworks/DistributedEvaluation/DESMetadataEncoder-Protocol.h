//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSNumber, NSString;

@protocol DESMetadataEncoder
- (NSData *)zeroWithLength:(unsigned long long)arg1;
- (NSData *)encodeNumberVector:(NSArray *)arg1 toLength:(unsigned long long)arg2;
- (NSData *)encodeStringVector:(NSArray *)arg1 toLength:(unsigned long long)arg2;
- (NSData *)encodeNumber:(NSNumber *)arg1 toLength:(unsigned long long)arg2;
- (NSData *)encodeString:(NSString *)arg1 toLength:(unsigned long long)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSDictionary, NSString;

@protocol AAFSerializer
@property(readonly) NSArray *mediaTypes;
- (NSString *)stringFromData:(NSData *)arg1;
- (NSString *)stringFromDictionary:(NSDictionary *)arg1;
- (NSData *)dataFromDictionary:(NSDictionary *)arg1 error:(out id *)arg2;
- (NSData *)dataFromDictionary:(NSDictionary *)arg1;
- (NSDictionary *)dictionaryFromObject:(id)arg1 error:(out id *)arg2;
- (NSDictionary *)dictionaryFromObject:(id)arg1;
@end


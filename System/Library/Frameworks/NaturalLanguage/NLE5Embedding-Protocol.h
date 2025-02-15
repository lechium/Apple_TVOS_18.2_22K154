//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NaturalLanguage/NSObject-Protocol.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

@protocol NLE5Embedding <NSObject>
@property(readonly) NSArray *adapters;
@property(readonly) unsigned long long maximumSequenceLength;
@property(readonly) unsigned long long dimension;
- (_Bool)loadAdapter:(NSString *)arg1;
- (_Bool)isAdapterLoaded:(NSString *)arg1;
- (_Bool)loadBackbone;
- (_Bool)isBackboneLoaded;
- (NSString *)textForTokenIDs:(NSArray *)arg1;
- (NSArray *)tokenIDsForText:(NSString *)arg1;
- (NSData *)embeddingDataForString:(NSString *)arg1 sequenceSize:(unsigned long long *)arg2 error:(id *)arg3;
- (NSData *)embeddingDataForTokenizedBatch:(NSArray *)arg1 withOutputProperties:(NSMutableDictionary *)arg2;
@end


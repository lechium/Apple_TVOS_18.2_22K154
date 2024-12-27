//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKCodedObject-Protocol.h>

@class NSArray, NSLocale, NSString, NSUUID;

@protocol HKConceptIndexable <HKCodedObject>
+ (NSArray *)cachedConceptRelationshipKeyPaths;
+ (NSArray *)indexableConceptKeyPaths;
@property(readonly, nonatomic) long long recordCategoryType;
@property(readonly, copy, nonatomic) NSString *country;
@property(readonly, copy, nonatomic) NSLocale *locale;
@property(readonly) NSUUID *UUID;
@end


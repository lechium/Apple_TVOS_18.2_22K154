//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface SNResultsCollector : NSObject
{
    MISSING_TYPE *results;	// 8 = 0x8
    MISSING_TYPE *errors;	// 16 = 0x10
    MISSING_TYPE *completeCount;	// 24 = 0x18
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00100000000d40ac
- (void).cxx_destruct;	// IMP=0x00000000000d46fe
- (void)clearCompleteCount;	// IMP=0x00000000000d46ac
- (void)clearErrors;	// IMP=0x00000000000d45fe
- (void)clearResults;	// IMP=0x00000000000d4527
- (void)requestDidComplete:(id)arg1;	// IMP=0x00000000000d4431
- (void)request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000d4334
- (void)request:(id)arg1 didProduceResult:(id)arg2;	// IMP=0x00000000000d41e7
- (id)init;	// IMP=0x00000000000d3f8b
@property(nonatomic) long long completeCount; // @synthesize completeCount;
@property(nonatomic, copy) NSArray *errors;
@property(nonatomic, copy) NSArray *results;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SEMSQLCommandJoinCriterion;

@interface SEMSQLCommandJoin : NSObject
{
    NSString *_table;	// 8 = 0x8
    SEMSQLCommandJoinCriterion *_joinCriterion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005cd4e
@property(readonly, nonatomic) SEMSQLCommandJoinCriterion *joinCriterion; // @synthesize joinCriterion=_joinCriterion;
@property(readonly, nonatomic) NSString *table; // @synthesize table=_table;
- (id)init;	// IMP=0x000000000005ccf2
- (id)description;	// IMP=0x000000000005cc76
- (id)initWithTable:(id)arg1 joinCriterion:(id)arg2;	// IMP=0x000000000005cbbd

@end


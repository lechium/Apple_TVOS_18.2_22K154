//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPredicate.h>

@interface NSPredicate (MTAdditions)
+ (id)predicateForObjectIds:(id)arg1;	// IMP=0x008000000003ecf2
+ (id)predicateForObjectId:(id)arg1;	// IMP=0x008000000003eccd
+ (id)predicateForNilValueOrEmptyStringForKey:(id)arg1;	// IMP=0x008000000003ec9a
+ (id)predicateForNilValueForKey:(id)arg1;	// IMP=0x008000000003ec75
+ (id)predicateForNonNilValueForKey:(id)arg1;	// IMP=0x008000000003ec50
+ (id)predicateForDateKey:(id)arg1 isLessThanDate:(id)arg2;	// IMP=0x008000000003ec21
+ (id)predicateForDateKey:(id)arg1 isGreaterThanDate:(id)arg2;	// IMP=0x008000000003ebf2
+ (id)predicateForDateKey:(id)arg1 isLessThanOrEqualToDate:(id)arg2;	// IMP=0x008000000003ebc3
+ (id)predicateForDateKey:(id)arg1 isGreaterThanOrEqualToDateKey:(id)arg2;	// IMP=0x008000000003eb94
+ (id)predicateForDateKey:(id)arg1 isGreaterThanOrEqualToDate:(id)arg2;	// IMP=0x008000000003eb65
+ (id)truePredicate;	// IMP=0x008000000003eb43
+ (id)falsePredicate;	// IMP=0x008000000003eb21
- (id)NOT;	// IMP=0x001000000003eb05
- (id)OR:(id)arg1;	// IMP=0x001000000003ea41
- (id)AND:(id)arg1;	// IMP=0x001000000003e96d
@end


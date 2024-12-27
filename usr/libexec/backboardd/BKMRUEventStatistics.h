//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableOrderedSet;

@interface BKMRUEventStatistics
{
    NSMutableOrderedSet *_statistics;	// 8 = 0x8
    long long _capacity;	// 16 = 0x10
}

+ (id)statisticsWithLabel:(id)arg1 capacity:(long long)arg2;	// IMP=0x0040000000054817
- (void).cxx_destruct;	// IMP=0x0020000000054ced
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000054c79
- (void)reset;	// IMP=0x0010000000054c30
- (void)pushStatistics:(id)arg1;	// IMP=0x0010000000054b1b
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0010000000054986
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000054920
- (unsigned long long)hash;	// IMP=0x0010000000054903

@end


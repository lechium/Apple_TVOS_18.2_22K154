//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMMDateProvider, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HMMDailyPartitionProvider : NSObject
{
    HMMDateProvider *_dateProvider;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0010000000008974
- (void).cxx_destruct;	// IMP=0x0000000000008964
@property(readonly, nonatomic) HMMDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
- (id)datePartitionWithOffset:(long long)arg1 fromDatePartition:(id)arg2;	// IMP=0x0000000000008941
- (id)datePartitionContainingDate:(id)arg1;	// IMP=0x0000000000008928
- (id)datePartitionWithOffsetFromNow:(long long)arg1;	// IMP=0x00000000000088c9
@property(readonly, copy, nonatomic) NSDate *currentDatePartition;
- (id)initWithDateProvider:(id)arg1;	// IMP=0x000000000000880e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


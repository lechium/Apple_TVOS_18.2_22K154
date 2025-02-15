//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface CSDMomentsUsageReport : NSObject
{
    MISSING_TYPE *availability;	// 8 = 0x8
    MISSING_TYPE *photoRequestSuccessCount;	// 16 = 0x10
    MISSING_TYPE *photoRequestFailureCount;	// 24 = 0x18
    MISSING_TYPE *medianRequestDuration;	// 32 = 0x20
    MISSING_TYPE *meanRequestDuration;	// 40 = 0x28
}

- (id)init;	// IMP=0x0040000000279a68
@property(nonatomic, readonly) NSString *description;
- (id)initWithAvailability:(int)arg1 photoRequestSuccessCount:(long long)arg2 photoRequestFailureCount:(long long)arg3 medianRequestDuration:(double)arg4 meanRequestDuration:(double)arg5;	// IMP=0x00100000002797fb
@property(nonatomic, readonly) double meanRequestDuration; // @synthesize meanRequestDuration;
@property(nonatomic, readonly) double medianRequestDuration; // @synthesize medianRequestDuration;
@property(nonatomic, readonly) long long photoRequestFailureCount; // @synthesize photoRequestFailureCount;
@property(nonatomic, readonly) long long photoRequestSuccessCount; // @synthesize photoRequestSuccessCount;
@property(nonatomic, readonly) int availability; // @synthesize availability;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _HKRateLimiterOperationRecord : NSObject
{
    NSDate *_datePerformed;	// 8 = 0x8
    unsigned long long _cost;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e7601
@property(readonly) unsigned long long cost; // @synthesize cost=_cost;
@property(readonly, copy) NSDate *datePerformed; // @synthesize datePerformed=_datePerformed;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMetricsEvent, MISSING_TYPE, NSArray;

@interface _TtC9appstored10ASEMetrics : NSObject
{
    MISSING_TYPE *enqueueTransactionID;	// 8 = 0x8
    MISSING_TYPE *flushTransactionID;	// 24 = 0x18
    MISSING_TYPE *amsMetrics;	// 40 = 0x28
    MISSING_TYPE *shortName;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0040000000023180
- (id)init;	// IMP=0x0010000000023120
- (void)flushWithCompletionHandler:(void (^)(NSError *))arg1;	// IMP=0x0010000000022ee0
- (void)enqueueEvents:(NSArray *)arg1 flushEvents:(_Bool)arg2 completionHandler:(void (^)(void))arg3;	// IMP=0x0010000000022370
- (void)enqueueEvent:(AMSMetricsEvent *)arg1 flushEvents:(_Bool)arg2 completionHandler:(void (^)(void))arg3;	// IMP=0x0010000000020e90
- (id)initWithType:(long long)arg1;	// IMP=0x0010000000020e70

@end


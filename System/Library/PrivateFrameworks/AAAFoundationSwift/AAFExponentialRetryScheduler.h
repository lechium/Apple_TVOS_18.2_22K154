//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface AAFExponentialRetryScheduler : NSObject
{
    MISSING_TYPE *maxRetries;	// 8 = 0x8
    MISSING_TYPE *power;	// 16 = 0x10
    MISSING_TYPE *schedulerDelay;	// 24 = 0x18
    MISSING_TYPE *currentRetry;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000033ac0
- (id)init;	// IMP=0x0000000000033a60
- (void)scheduleTask:(void (^)(void (^)(id, NSError *)))arg1 shouldRetry:(_Bool (^)(NSError *))arg2 completionHandler:(void (^)(id, NSError *))arg3;	// IMP=0x00000000000332c0
- (id)initWithMaxRetries:(long long)arg1 power:(double)arg2;	// IMP=0x000000000002e430
- (id)initWithMaxRetries:(long long)arg1;	// IMP=0x000000000002e310

@end


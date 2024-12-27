//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/NSObject-Protocol.h>

@class PBSScheduledSleepRequest;

@protocol PBSScheduledSleepServiceInterface <NSObject>
- (oneway void)cancelScheduledSleepWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (oneway void)getCurrentScheduledSleepWithCompletion:(void (^)(PBSScheduledSleep *, NSError *))arg1;
- (oneway void)getAvailableScheduledSleepRequestsWithCompletion:(void (^)(NSArray<__PBSScheduledSleepRequest__> *, NSError *))arg1;
- (oneway void)scheduleSleepWithRequest:(PBSScheduledSleepRequest *)arg1 completion:(void (^)(PBSScheduledSleep *, NSError *))arg2;
@end


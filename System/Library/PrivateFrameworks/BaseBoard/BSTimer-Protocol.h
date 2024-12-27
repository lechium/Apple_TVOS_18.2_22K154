//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol BSTimer <NSObject>
+ (id)scheduledTimerWithFireInterval:(double)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 handler:(void (^)(void))arg3;
@property(readonly, nonatomic) double fireInterval;
@property(readonly, nonatomic) double startTime;
@property(readonly, nonatomic, getter=isScheduled) _Bool scheduled;
- (void)cancel;
- (void)schedule;
- (id)initWithFireInterval:(double)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 handler:(void (^)(void))arg3;
@end


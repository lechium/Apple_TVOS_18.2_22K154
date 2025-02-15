//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallHistory/NSObject-Protocol.h>

@class NSObject;
@protocol CHConfigurationDelegate, OS_dispatch_queue;

@protocol CHConfiguration <NSObject>
@property(readonly, nonatomic) long long keepCallsTimeIntervalType;
@property(readonly, nonatomic, getter=isCloudKitEnabled) _Bool cloudKitEnabled;
- (void)removeDelegate:(id <CHConfigurationDelegate>)arg1;
- (void)addDelegate:(id <CHConfigurationDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDBackgroundSystemTaskRequest, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol HMDBackgroundSystemTaskSchedulerInterfacing <NSObject>
- (_Bool)submitTaskRequest:(HMDBackgroundSystemTaskRequest *)arg1 error:(id *)arg2;
- (_Bool)cancelTaskRequestWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (HMDBackgroundSystemTaskRequest *)taskRequestForIdentifier:(NSString *)arg1;
- (_Bool)registerForTaskWithIdentifier:(NSString *)arg1 usingQueue:(NSObject<OS_dispatch_queue> *)arg2 launchHandler:(void (^)(id <HMDBackgroundSystemTask>))arg3;
@end


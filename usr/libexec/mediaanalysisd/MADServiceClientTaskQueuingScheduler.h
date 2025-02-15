//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MADServiceClientTaskQueuingScheduler : NSObject
{
    NSString *_clientBundleID;	// 8 = 0x8
    NSMutableArray *_pendingTaskList;	// 16 = 0x10
    NSMutableDictionary *_requestIDToScheduledTask;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_managementQueue;	// 32 = 0x20
}

+ (unsigned long long)scheduledRequestLimit;	// IMP=0x00400000000bd8eb
- (void).cxx_destruct;	// IMP=0x00200000000bf836
- (unsigned long long)currentOutstandingTasks;	// IMP=0x00100000000bf759
- (unsigned long long)currentPendingTasks;	// IMP=0x00100000000bf69e
- (unsigned long long)cancelAllTasks;	// IMP=0x00100000000bf257
- (void)cancelTaskWithRequestID:(unsigned long long)arg1;	// IMP=0x00100000000becea
- (void)submitClientTask:(id)arg1 withRequestID:(unsigned long long)arg2 schedulingErrorHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000be742
- (_Bool)scheduleTask:(id)arg1;	// IMP=0x00100000000bdbfd
- (void)completeTaskWithInfo:(id)arg1 madTaskID:(unsigned long long)arg2;	// IMP=0x00100000000bd8f6
- (id)initWithClientBundleID:(id)arg1;	// IMP=0x00100000000bd7c2

@end


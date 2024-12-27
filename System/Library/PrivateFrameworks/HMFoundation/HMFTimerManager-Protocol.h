//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/NSObject-Protocol.h>

@class NSObject;
@protocol HMFTimerManagerDelegate, HMFTimerManagerTimerContext, OS_dispatch_queue;

@protocol HMFTimerManager <NSObject>
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property __weak id <HMFTimerManagerDelegate> delegate;
- (void)cancelTimerForContext:(id <HMFTimerManagerTimerContext>)arg1;
- (id <HMFTimerManagerTimerContext>)startTimerWithTimeInterval:(double)arg1 andReplaceObject:(NSObject *)arg2;
- (id <HMFTimerManagerTimerContext>)startTimerWithTimeInterval:(double)arg1 object:(NSObject *)arg2;
@end


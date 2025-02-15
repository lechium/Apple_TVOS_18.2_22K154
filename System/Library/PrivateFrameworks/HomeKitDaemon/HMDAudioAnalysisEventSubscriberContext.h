//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDAppleMediaAccessory, HMDBulletinBoard, HMDDevice, HMDHome, HMFMessageDispatcher, NSPredicate, NSString, NSUUID;
@protocol HMEEventForwarder, HMELastEventStoreReadHandle, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAudioAnalysisEventSubscriberContext : NSObject
{
    HMDAppleMediaAccessory *_accessory;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00100000004c0a47
- (void).cxx_destruct;	// IMP=0x00000000004c0a12
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak HMDAppleMediaAccessory *accessory; // @synthesize accessory=_accessory;
- (void)forwardEvent:(id)arg1 topic:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004c0901
- (void)submitLogEvent:(id)arg1 error:(id)arg2;	// IMP=0x00000000004c0872
- (void)submitLogEvent:(id)arg1;	// IMP=0x00000000004c0805
@property(readonly) HMDBulletinBoard *bulletinBoard;
- (id)logIdentifier;	// IMP=0x00000000004c079c
@property(readonly) __weak HMDHome *home;
@property(readonly, copy) NSString *roomName;
@property(readonly, getter=isCurrentAccessory) _Bool currentAccessory;
@property(readonly, copy) NSUUID *spiClientIdentifier;
@property(readonly, copy) NSUUID *uuid;
@property(readonly, copy) NSString *name;
@property(readonly) __weak id <HMELastEventStoreReadHandle> eventStoreReadHandle;
- (id)initWithAccessory:(id)arg1 queue:(id)arg2;	// IMP=0x00000000004c0448
@property(readonly) _Bool dropInEnabled;
@property(readonly) HMFMessageDispatcher *dispatcher;
@property(readonly) __weak id <HMEEventForwarder> eventForwarder;
@property(readonly) HMDDevice *device;
@property(readonly) NSPredicate *audioAnalysisEventNotificationCondition;
@property(readonly, getter=isAudioAnalysisEventNotificationEnabled) _Bool audioAnalysisEventNotificationEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


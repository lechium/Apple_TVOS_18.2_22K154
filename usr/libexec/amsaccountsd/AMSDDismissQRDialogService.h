//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface AMSDDismissQRDialogService : NSObject
{
    struct os_unfair_lock_s _queueLock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_taskQueue;	// 16 = 0x10
    NSMutableDictionary *_dismissalCompletionQueue;	// 24 = 0x18
}

+ (_Bool)isConnectionEntitled:(id)arg1;	// IMP=0x002000000001c63c
+ (id)sharedService;	// IMP=0x001000000001bdb3
- (void).cxx_destruct;	// IMP=0x002000000001c6e3
@property(readonly, nonatomic) NSMutableDictionary *dismissalCompletionQueue; // @synthesize dismissalCompletionQueue=_dismissalCompletionQueue;
@property(readonly, nonatomic) struct os_unfair_lock_s queueLock; // @synthesize queueLock=_queueLock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
- (void)notifyDismissDialogWithIdentifier:(id)arg1;	// IMP=0x001000000001c35e
- (void)removeQRDialogDismissalObserverForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001c0b9
- (void)observeQRDialogDismissalNotificationForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001be08
- (id)init;	// IMP=0x001000000001bd13

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


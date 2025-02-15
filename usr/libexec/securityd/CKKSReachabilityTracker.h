//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSResultOperation, NSOperationQueue;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_nw_path_monitor;

@interface CKKSReachabilityTracker : NSObject
{
    _Bool _haveNetwork;	// 8 = 0x8
    CKKSResultOperation *_reachabilityDependency;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
    NSObject<OS_nw_path_monitor> *_networkMonitor;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_timer;	// 48 = 0x30
}

+ (_Bool)isNetworkFailureError:(id)arg1;	// IMP=0x004000000011e7e9
+ (_Bool)isNetworkError:(id)arg1;	// IMP=0x001000000011e694
- (void).cxx_destruct;	// IMP=0x002000000011e29f
@property(retain) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain) NSObject<OS_nw_path_monitor> *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property _Bool haveNetwork; // @synthesize haveNetwork=_haveNetwork;
@property(retain) CKKSResultOperation *reachabilityDependency; // @synthesize reachabilityDependency=_reachabilityDependency;
- (_Bool)isNetworkError:(id)arg1;	// IMP=0x001000000011e1c3
- (void)setNetworkReachability:(_Bool)arg1;	// IMP=0x001000000011e149
- (void)_onqueueSetNetworkReachability:(_Bool)arg1;	// IMP=0x001000000011e08f
- (void)_onQueueResetReachabilityDependency;	// IMP=0x001000000011dd65
- (void)_onQueueRunReachabilityDependency;	// IMP=0x001000000011dc27
@property(readonly) _Bool currentReachability;
- (id)description;	// IMP=0x001000000011db0c
- (id)init;	// IMP=0x001000000011d8e3

@end


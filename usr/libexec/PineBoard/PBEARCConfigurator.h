//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface PBEARCConfigurator : NSObject
{
    NSObject<OS_dispatch_queue> *_observerQueue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00200000001289ba
- (void).cxx_destruct;	// IMP=0x0020000000128b94
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
- (void)removeEARCObserver:(id)arg1;	// IMP=0x0010000000128b7a
- (void)addEARCObserver:(id)arg1;	// IMP=0x0010000000128b74
- (void)toggleEARC:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000128a7d
- (void)enableEARC:(_Bool)arg1;	// IMP=0x0010000000128a77
@property(readonly, nonatomic) long long eARCStatus;
- (id)_init;	// IMP=0x0010000000128a21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


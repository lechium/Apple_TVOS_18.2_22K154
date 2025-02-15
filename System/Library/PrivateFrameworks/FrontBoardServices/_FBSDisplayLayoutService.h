//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection, BSServiceConnectionEndpoint, FBSDisplayLayout, NSMapTable, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _FBSDisplayLayoutService : NSObject
{
    BSServiceConnectionEndpoint *_endpoint;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callOutQueue;	// 16 = 0x10
    BSServiceConnection *_connection;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    NSMapTable *_lock_keyedObservers;	// 40 = 0x28
    FBSDisplayLayout *_lock_layout;	// 48 = 0x30
    unsigned long long _lock_layoutGeneration;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000457b0
- (oneway void)updateLayout:(id)arg1 withTransition:(id)arg2;	// IMP=0x00000000000455a9
- (void)_noteDisconnected;	// IMP=0x00000000000454d9
- (void)removeObserverForKey:(id)arg1;	// IMP=0x0000000000045408
- (void)addObserver:(CDUnknownBlockType)arg1 forKey:(id)arg2;	// IMP=0x00000000000450d3
- (id)currentLayout;	// IMP=0x000000000004509c
- (id)endpoint;	// IMP=0x000000000004508e
- (void)invalidate;	// IMP=0x0000000000045049
- (void)dealloc;	// IMP=0x0000000000045007
- (id)_initWithEndpoint:(id)arg1 qos:(BOOL)arg2;	// IMP=0x0000000000044afa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


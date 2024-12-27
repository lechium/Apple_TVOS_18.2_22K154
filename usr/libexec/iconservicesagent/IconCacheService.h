//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ClearCacheOperation, ISMutableIconCache, ISMutableStoreIndex, ISStore, NSOperationQueue, NSString, NSXPCListener;
@protocol OS_dispatch_source, OS_dispatch_workloop;

@interface IconCacheService : NSObject
{
    ISStore *_store;	// 8 = 0x8
    ISMutableStoreIndex *_storeIndex;	// 16 = 0x10
    NSString *_serviceName;	// 24 = 0x18
    NSXPCListener *_listener;	// 32 = 0x20
    NSOperationQueue *_operationQueue;	// 40 = 0x28
    struct os_unfair_lock_s _clearOperationLock;	// 48 = 0x30
    ISMutableIconCache *_iconCache;	// 56 = 0x38
    NSObject<OS_dispatch_workloop> *_workLoop;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_clearTimer;	// 72 = 0x48
    ClearCacheOperation *_clearOperation;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00100000000036c1
@property(readonly) ClearCacheOperation *clearOperation; // @synthesize clearOperation=_clearOperation;
@property(readonly) struct os_unfair_lock_s clearOperationLock; // @synthesize clearOperationLock=_clearOperationLock;
@property(readonly) NSObject<OS_dispatch_source> *clearTimer; // @synthesize clearTimer=_clearTimer;
@property(readonly) NSObject<OS_dispatch_workloop> *workLoop; // @synthesize workLoop=_workLoop;
@property(readonly) ISMutableIconCache *iconCache; // @synthesize iconCache=_iconCache;
@property(readonly) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)clearCache;	// IMP=0x00100000000035a0
- (void)scheduleCacheOperation:(unsigned long long)arg1;	// IMP=0x0010000000003480
- (void)start;	// IMP=0x001000000000336c
- (id)initWithServiceName:(id)arg1;	// IMP=0x0010000000003062
- (id)generateStoreUnitWithRequest:(id)arg1 validationToken:(id *)arg2;	// IMP=0x00100000000042f1
- (void)clearCachedItemsForBundeID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004297
- (void)generateImageWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003b14
- (void)fetchCacheConfigurationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000038f5
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000003736

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


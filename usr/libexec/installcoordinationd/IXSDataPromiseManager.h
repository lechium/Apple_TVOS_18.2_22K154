//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IXSDataPromiseManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_uuidToPromiseMap;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x002000000006e8dc
+ (id)saveDir;	// IMP=0x001000000006e84f
+ (id)savePathForPromise:(id)arg1;	// IMP=0x001000000006e76e
- (void).cxx_destruct;	// IMP=0x0020000000070cbd
@property(readonly, nonatomic) NSMutableDictionary *uuidToPromiseMap; // @synthesize uuidToPromiseMap=_uuidToPromiseMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)promise:(id)arg1 didCancelForReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x0010000000070bb5
- (void)promise:(id)arg1 didUpdateProgress:(double)arg2;	// IMP=0x0010000000070add
- (void)promiseDidReset:(id)arg1;	// IMP=0x0010000000070a1c
- (void)promiseDidComplete:(id)arg1;	// IMP=0x001000000007095b
- (void)promiseDidBegin:(id)arg1;	// IMP=0x001000000007089a
- (void)cancelPromiseForUUIDIfNotAssociatedWithAnyCoordinator:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x001000000007071b
- (void)clearAllPromisesForCreator:(unsigned long long)arg1;	// IMP=0x00100000000702aa
- (void)decommissionPromise:(id)arg1;	// IMP=0x001000000007017d
- (void)enumeratePromises:(CDUnknownBlockType)arg1;	// IMP=0x001000000006ffd2
- (void)registerPromise:(id)arg1;	// IMP=0x001000000006fd25
- (id)promiseForUUID:(id)arg1;	// IMP=0x001000000006fb15
- (id)promiseForUUID:(id)arg1 ofType:(Class)arg2;	// IMP=0x001000000006fafd
- (id)_promiseForUUID:(id)arg1 ofType:(Class)arg2 useQueue:(_Bool)arg3;	// IMP=0x001000000006f916
- (void)_onQueue_restoreSavedPromises;	// IMP=0x001000000006ea76
- (id)init;	// IMP=0x001000000006e969

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


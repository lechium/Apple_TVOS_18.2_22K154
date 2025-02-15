//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableArray;
@protocol OS_dispatch_queue;

@interface StorePreorderQueue : NSObject
{
    NSMutableArray *_clients;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    ISOperationQueue *_operationQueue;	// 24 = 0x18
}

+ (void)registerManagerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00400000000fccb7
+ (void)observeXPCServer:(id)arg1;	// IMP=0x00100000000fcc2a
+ (void)getPreordersWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000fc785
+ (void)checkQueueWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000fc552
+ (void)cancelPreordersWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000fbdb2
+ (id)sharedPreorderQueue;	// IMP=0x00100000000fb004
- (void)_sendChangeNotificationForKinds:(id)arg1;	// IMP=0x00200000000fe9a1
- (id)_preorderQueryWithAccountID:(id)arg1 database:(id)arg2;	// IMP=0x00100000000fe955
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fe867
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fe7a5
- (void)_handleLoadQueueFinish:(id)arg1;	// IMP=0x00100000000fdbca
- (void)_handleCheckQueueFinish:(id)arg1;	// IMP=0x00100000000fd717
- (id)_copyPreorderAccountIdentifiers;	// IMP=0x00100000000fd511
- (id)_clientForConnection:(id)arg1;	// IMP=0x00100000000fd370
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x00100000000fd131
- (void)removePreordersWithPreorderIdentifiers:(id)arg1;	// IMP=0x00100000000fb976
- (void)checkPreorderQueue;	// IMP=0x00100000000fb5a0
- (void)addPreordersWithItems:(id)arg1 accountID:(id)arg2;	// IMP=0x00100000000fb081
- (void)dealloc;	// IMP=0x00100000000faf48
- (id)init;	// IMP=0x00100000000fae52

@end


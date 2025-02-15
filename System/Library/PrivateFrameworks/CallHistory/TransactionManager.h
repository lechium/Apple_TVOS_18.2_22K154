//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHSynchronizedLoggable.h"

@class NSMutableArray, NSString, NSXPCConnection, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface TransactionManager : CHSynchronizedLoggable
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSXPCInterface *_interface;	// 16 = 0x10
    id _syncHelperReadyNotificationRef;	// 24 = 0x18
    NSMutableArray *_queuedTransactions;	// 32 = 0x20
}

+ (id)instance;	// IMP=0x001000000003d860
- (void).cxx_destruct;	// IMP=0x000000000003e753
- (void)setupConnectionHandlers_sync;	// IMP=0x000000000003e153
- (void)appendTransactions_sync:(id)arg1;	// IMP=0x000000000003dc21
- (void)appendTransactions:(id)arg1;	// IMP=0x000000000003db72
- (void)createXpcConnection_sync;	// IMP=0x000000000003da24
- (void)createXpcConnection;	// IMP=0x000000000003d9c2
- (void)dealloc;	// IMP=0x000000000003d938
- (id)init;	// IMP=0x000000000003d8e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


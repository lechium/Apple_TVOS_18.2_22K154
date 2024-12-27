//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHLogger.h"

@class NSString;
@protocol CHFeatureFlags, CallHistoryDBClientHandleProtocol, TransactionManagerProtocol;

__attribute__((visibility("hidden")))
@interface SyncManager : CHLogger
{
    id <CallHistoryDBClientHandleProtocol> _dbHandle;	// 8 = 0x8
    id <CHFeatureFlags> _featureFlags;	// 16 = 0x10
    id <TransactionManagerProtocol> _transactionManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002068e
@property(readonly, nonatomic) id <TransactionManagerProtocol> transactionManager; // @synthesize transactionManager=_transactionManager;
@property(readonly, nonatomic) id <CHFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) id <CallHistoryDBClientHandleProtocol> dbHandle; // @synthesize dbHandle=_dbHandle;
- (id)archiveCallObject:(id)arg1;	// IMP=0x00000000000205b2
- (void)resetTimers;	// IMP=0x0000000000020575
- (double)timerOutgoing;	// IMP=0x0000000000020502
- (double)timerIncoming;	// IMP=0x000000000002048f
- (double)timerLifetime;	// IMP=0x000000000002041c
- (void)addUpdateTransactions:(id)arg1;	// IMP=0x00000000000201bb
- (void)updateAllObjects:(id)arg1;	// IMP=0x0000000000020119
- (void)updateObjects:(id)arg1;	// IMP=0x0000000000020077
- (void)updateObjectsWithCalls:(id)arg1 withTransactions:(_Bool)arg2;	// IMP=0x000000000001ffbf
- (void)deleteObjectsWithLimits:(id)arg1;	// IMP=0x000000000001fa63
- (void)deleteAllObjects;	// IMP=0x000000000001f651
- (void)deleteObjectsWithUniqueIds:(id)arg1 withTransaction:(_Bool)arg2;	// IMP=0x000000000001f263
- (id)fetchObjectsWithLimits:(id)arg1;	// IMP=0x000000000001f137
- (id)bundleIDToServiceProvider:(id)arg1;	// IMP=0x000000000001f0b1
- (id)predicateForLimits:(id)arg1;	// IMP=0x000000000001ee45
- (id)updatedPredicate:(id)arg1 withLimits:(id)arg2;	// IMP=0x000000000001ed47
- (id)predicateForCallKinds:(id)arg1;	// IMP=0x000000000001eb4d
- (id)predicateForCallKind:(id)arg1;	// IMP=0x000000000001e8a4
- (id)fetchObjectWithUniqueId:(id)arg1;	// IMP=0x000000000001e82a
- (id)fetchAllObjects;	// IMP=0x000000000001e7da
- (id)fetchCoalescedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limitsDictionary:(id)arg3 limit:(unsigned long long)arg4 offset:(unsigned long long)arg5 batchSize:(unsigned long long)arg6;	// IMP=0x000000000001e706
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limitsDictionary:(id)arg3;	// IMP=0x000000000001e665
- (id)fetchCallIdentifiersWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limitsDictionary:(id)arg3 limit:(unsigned long long)arg4 offset:(unsigned long long)arg5 batchSize:(unsigned long long)arg6;	// IMP=0x000000000001e591
- (id)fetchCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limitsDictionary:(id)arg3 limit:(unsigned long long)arg4 offset:(unsigned long long)arg5 batchSize:(unsigned long long)arg6;	// IMP=0x000000000001e4bd
- (unsigned long long)fetchCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limitsDictionary:(id)arg3;	// IMP=0x000000000001e41c
- (long long)deleteCallsWithPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001e357
- (long long)setRead:(_Bool)arg1 forCallsWithPredicate:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001e17e
- (void)insertRecordsWithoutTransactions:(id)arg1;	// IMP=0x000000000001e115
- (void)insertRecords:(id)arg1;	// IMP=0x000000000001ddcf
- (void)insert:(id)arg1 withTransaction:(_Bool)arg2;	// IMP=0x000000000001d989
- (void)initDBHandle;	// IMP=0x000000000001d91a
- (id)initWithTransactionManager:(id)arg1 dbHandle:(id)arg2;	// IMP=0x000000000001d850
- (id)init;	// IMP=0x000000000001d7a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


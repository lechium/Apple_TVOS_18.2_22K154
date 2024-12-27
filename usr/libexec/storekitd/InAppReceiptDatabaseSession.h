//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;

@interface InAppReceiptDatabaseSession : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003a613
@property(readonly) SQLiteConnection *connection; // @synthesize connection=_connection;
- (void)_enumerateSubscriptionStatusForBundleID:(id)arg1 alsoMatchingPredicate:(id)arg2 ignoreEmptyStatus:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000003a09f
- (id)_latestTransactionReceiptForUnarchivedRenewalInfo:(id)arg1 subscriptionGroupID:(id)arg2 bundleID:(id)arg3 outProductID:(id *)arg4;	// IMP=0x0010000000039d2c
- (id)_statusesForRenewalInfoBlob:(id)arg1 subscriptionGroupID:(id)arg2 bundleID:(id)arg3;	// IMP=0x00100000000399e3
- (id)_propertyForKey:(id)arg1 bundleID:(id)arg2;	// IMP=0x001000000003976f
- (id)_inAppPendingTransactionsPropertyForKey:(id)arg1 bundleID:(id)arg2;	// IMP=0x00100000000394fb
- (id)transactionHashesForBundleID:(id)arg1 totalCount:(unsigned long long *)arg2;	// IMP=0x00100000000391cb
- (id)statusHashesForBundleID:(id)arg1;	// IMP=0x0010000000038f61
- (id)pendingLegacyTransactionsLastUpdatedForBundleID:(id)arg1;	// IMP=0x0010000000038f42
- (id)pendingLegacyTransactionsAccountTokenForBundleID:(id)arg1;	// IMP=0x0010000000038f23
- (id)pendingLegacyTransactionsForBundleID:(id)arg1 logKey:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003877e
- (id)transactionForID:(id)arg1 bundleID:(id)arg2;	// IMP=0x00100000000384d2
- (void)enumerateSubscriptionStatusForBundleID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038424
- (id)subscriptionStatusForSubscriptionGroupID:(id)arg1 bundleID:(id)arg2;	// IMP=0x00100000000382b6
- (id)lastUpdatedForBundleID:(id)arg1;	// IMP=0x0010000000038297
- (_Bool)hasTransactionWithSubscriptionOfferType:(unsigned char)arg1 forSubscriptionGroupID:(id)arg2 bundleID:(id)arg3;	// IMP=0x0010000000037aab
- (_Bool)isTransactionFinishedForID:(id)arg1 bundleID:(id)arg2;	// IMP=0x0010000000037a5e
- (void)enumerateUnfinishedTransactionReceiptsForBundleID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000037749
- (void)enumerateReceiptsForSubscriptionsInGracePeriodForBundleID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000036dae
- (void)enumerateReceiptsForProductID:(id)arg1 bundleID:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000036a59
- (void)enumerateCurrentReceiptsForProductID:(id)arg1 bundleID:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000035f7d
- (id)currentRevisionForBundleID:(id)arg1;	// IMP=0x0010000000035f5e
- (id)appTransactionForBundleID:(id)arg1 bundleVersion:(id)arg2 accountToken:(id)arg3;	// IMP=0x0010000000035ba8
- (_Bool)cacheIncludesFinishedConsumablesForBundleID:(id)arg1;	// IMP=0x0010000000035b57
- (id)accountTokenForBundleID:(id)arg1;	// IMP=0x0010000000035b38
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000035acd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


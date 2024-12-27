//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreBookkeeper/NSObject-Protocol.h>

@class SBKStoreError, SBKTransaction, SBKTransactionController;

@protocol SBKTransactionControllerDelegate <NSObject>
- (void)transactionController:(SBKTransactionController *)arg1 transactionDidFinish:(SBKTransaction *)arg2;
- (void)transactionController:(SBKTransactionController *)arg1 transactionDidCancel:(SBKTransaction *)arg2 error:(SBKStoreError *)arg3;
- (_Bool)transactionController:(SBKTransactionController *)arg1 transactionDidFail:(SBKTransaction *)arg2 error:(SBKStoreError *)arg3;

@optional
- (_Bool)transactionController:(SBKTransactionController *)arg1 shouldScheduleTransaction:(SBKTransaction *)arg2;
@end


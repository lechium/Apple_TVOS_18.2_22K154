//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSDecimalNumber, NSString, PKPass, PKSearchQuery;

@protocol PKAppIntentCoordinator <NSObject>
- (void)presentAccountServiceSchedulePaymentWithUniqueID:(NSString *)arg1 billPayAmountType:(long long)arg2 billPayAmount:(NSDecimalNumber *)arg3 completion:(void (^)(_Bool))arg4;
- (void)presentSearchForPassWithUniqueID:(NSString *)arg1 withQuery:(PKSearchQuery *)arg2 completion:(void (^)(_Bool))arg3;
- (void)presentAddMoneyForPassWithUniqueID:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)sharePassWithUniqueID:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)handleDeletePassRequestWithPass:(PKPass *)arg1;
- (void)presentDeletePassWithUniqueID:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
@end


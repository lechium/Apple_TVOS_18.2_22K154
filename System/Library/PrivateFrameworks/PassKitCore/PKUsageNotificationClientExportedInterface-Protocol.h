//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@protocol PKUsageNotificationClientExportedInterface
- (void)usedPaymentPassWithTransactionIdentifier:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)usedPaymentPassWithUniqueIdentifier:(NSString *)arg1 transactionIdentifier:(NSString *)arg2 info:(NSDictionary *)arg3;
- (void)usedPassFromSource:(long long)arg1 withTypeIdentifier:(NSString *)arg2 info:(NSDictionary *)arg3;
@end


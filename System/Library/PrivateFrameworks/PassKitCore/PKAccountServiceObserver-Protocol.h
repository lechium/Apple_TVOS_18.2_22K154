//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSArray, NSDate, NSSet, NSString, PKAccount, PKAppleBalanceInStoreTopUpToken, PKAppleBalancePromotionConfiguration, PKPayLaterCardMagnitudes, PKPayLaterFinancingPlan;

@protocol PKAccountServiceObserver <NSObject>

@optional
- (void)didUpdateInStoreTopUpToken:(PKAppleBalanceInStoreTopUpToken *)arg1 forAccountIdentifier:(NSString *)arg2;
- (void)didRemoveAppleBalancePromotionWithUniqueIdentifier:(NSString *)arg1 forAccountIdentifier:(NSString *)arg2;
- (void)didUpdateAppleBalancePromotion:(PKAppleBalancePromotionConfiguration *)arg1 forAccountIdentifier:(NSString *)arg2;
- (void)creditRecoveryPaymentPlansChangedForAccountIdentifier:(NSString *)arg1;
- (void)didUpdateAccountEnhancedMerchants:(NSArray *)arg1 accountIdentifier:(NSString *)arg2 lastUpdate:(NSDate *)arg3;
- (void)didUpdateAccountPromotions:(NSArray *)arg1 accountIdentifier:(NSString *)arg2;
- (void)payLaterCardMagnitudesChanged:(PKPayLaterCardMagnitudes *)arg1 forAccountIdentifier:(NSString *)arg2;
- (void)accountFinancingPlanRemoved:(PKPayLaterFinancingPlan *)arg1 accountIdentifier:(NSString *)arg2;
- (void)accountFinancingPlanUpdated:(PKPayLaterFinancingPlan *)arg1 oldFinancingPlan:(PKPayLaterFinancingPlan *)arg2 accountIdentifier:(NSString *)arg3;
- (void)accountFinancingPlanAdded:(PKPayLaterFinancingPlan *)arg1 accountIdentifier:(NSString *)arg2;
- (void)didUpdatePaymentFundingSources:(NSArray *)arg1 accountIdentifier:(NSString *)arg2;
- (void)physicalCardsChanged:(NSSet *)arg1 forAccountIdentifier:(NSString *)arg2;
- (void)accountUsersChanged:(NSSet *)arg1 forAccountIdentifier:(NSString *)arg2;
- (void)scheduledPaymentsChangedForAccountIdentifier:(NSString *)arg1;
- (void)statementsChangedForAccountIdentifier:(NSString *)arg1;
- (void)accountRemoved:(PKAccount *)arg1;
- (void)accountChanged:(PKAccount *)arg1;
- (void)accountAdded:(PKAccount *)arg1;
@end


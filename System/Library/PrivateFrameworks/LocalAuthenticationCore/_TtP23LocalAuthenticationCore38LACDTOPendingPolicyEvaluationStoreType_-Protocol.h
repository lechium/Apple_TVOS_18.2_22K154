//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthenticationCore/NSObject-Protocol.h>

@class NSArray, NSString, _TtC23LocalAuthenticationCore36LACDTOMutablePendingPolicyEvaluation;

@protocol _TtP23LocalAuthenticationCore38LACDTOPendingPolicyEvaluationStoreType_ <NSObject>
- (void)removePendingEvaluationWith:(NSString *)arg1;
- (_TtC23LocalAuthenticationCore36LACDTOMutablePendingPolicyEvaluation *)pendingEvaluationWithIdentifier:(NSString *)arg1;
- (void)addPendingEvaluation:(_TtC23LocalAuthenticationCore36LACDTOMutablePendingPolicyEvaluation *)arg1;
- (void)persistEvaluations;
- (void)loadPersistedEvaluationsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@property(nonatomic, readonly) NSArray *pendingEvaluations;
@end


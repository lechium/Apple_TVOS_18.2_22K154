//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthenticationCore/LACDTOPolicyEvaluation-Protocol.h>

@class NSDictionary;
@protocol LACDTOEnvironment;

@protocol LACDTOPolicyEvaluationRequest <LACDTOPolicyEvaluation>
@property(readonly, nonatomic) NSDictionary *payload;
@property(readonly, nonatomic) _Bool isInteractiveRatchetEvaluation;
@property(readonly, nonatomic) id <LACDTOEnvironment> environment;
@property(readonly, nonatomic) NSDictionary *options;
@property(readonly, nonatomic) long long policy;
- (void)updatePayload:(NSDictionary *)arg1;
@end


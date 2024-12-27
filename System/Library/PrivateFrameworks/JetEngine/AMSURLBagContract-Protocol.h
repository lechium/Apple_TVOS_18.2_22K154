//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <JetEngine/NSObject-Protocol.h>

@class AMSBagValue;
@protocol AMSMescalBagContract, AMSMetricsBagContract;

@protocol AMSURLBagContract <NSObject>

@optional
@property(readonly, nonatomic) AMSBagValue *metricsURL;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"AMSBagValue",?,R,N

@property(readonly, nonatomic) id <AMSMetricsBagContract> metricsContract;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<AMSMetricsBagContract>",?,R,N

@property(readonly, nonatomic) AMSBagValue *trustedDomains;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"AMSBagValue",?,R,N

@property(readonly, nonatomic) AMSBagValue *TFOSamplingSessionDuration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"AMSBagValue",?,R,N

@property(readonly, nonatomic) AMSBagValue *TFOSamplingPercentage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"AMSBagValue",?,R,N

@property(readonly, nonatomic) AMSBagValue *TLSSamplingSessionDuration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"AMSBagValue",?,R,N

@property(readonly, nonatomic) AMSBagValue *TLSSamplingPercentage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"AMSBagValue",?,R,N

@property(readonly, nonatomic) AMSBagValue *storefrontSuffix;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"AMSBagValue",?,R,N

@property(readonly, nonatomic) id <AMSMescalBagContract> mescalContract;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<AMSMescalBagContract>",?,R,N

@property(readonly, nonatomic) AMSBagValue *guidSchemes;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"AMSBagValue",?,R,N

@property(readonly, nonatomic) AMSBagValue *guidRegexes;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"AMSBagValue",?,R,N

@property(readonly, nonatomic) AMSBagValue *apsAllowedProductTypes;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"AMSBagValue",?,R,N

@property(readonly, nonatomic) AMSBagValue *apsSamplingPercent;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"AMSBagValue",?,R,N

@property(readonly, nonatomic) AMSBagValue *apsEnabledPatterns;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"AMSBagValue",?,R,N

@end


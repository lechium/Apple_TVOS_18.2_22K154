//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetricsKit/AMSURLBagContract-Protocol.h>

@class AMSBagValue;

@protocol AMSMescalBagContract <AMSURLBagContract>
@property(readonly, nonatomic) AMSBagValue *mescalSetupURL;
@property(readonly, nonatomic) AMSBagValue *mescalCertificateURL;

@optional
@property(readonly, nonatomic) AMSBagValue *mescalSignSapResponses;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"AMSBagValue",?,R,N

@property(readonly, nonatomic) AMSBagValue *mescalSignSapRequests;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"AMSBagValue",?,R,N

@property(readonly, nonatomic) AMSBagValue *mescalSignedActions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"AMSBagValue",?,R,N

@property(readonly, nonatomic) AMSBagValue *mescalPrimingURL;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"AMSBagValue",?,R,N

@end


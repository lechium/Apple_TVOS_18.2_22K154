//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKBridgeSetupAssistantContext, PKPeerPaymentWebService;

@protocol PKSetupAssistantStep <NSObject>
+ (_Bool)bridgeSetupAssistantNeedsToRunWithContext:(PKBridgeSetupAssistantContext *)arg1 returningRequirements:(unsigned long long *)arg2;
+ (_Bool)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long *)arg1;
+ (_Bool)setupAssistantNeedsToRunReturningRequirements:(unsigned long long *)arg1;
+ (PKPeerPaymentWebService *)defaultWebServiceForContext:(long long)arg1;
- (void)preflightWithCompletion:(void (^)(_Bool))arg1;
@end


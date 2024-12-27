//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSObject-Protocol.h>

@class CNContact, NSError, NSString, PKAccountServicePaymentMethod, PKApplePayTrustSignature, PKAuthorizedPeerPaymentQuote, PKPayment, PKPaymentMethod, PKPaymentRequest, PKServiceProviderPurchase, PKShippingMethod;

@protocol PKPaymentAuthorizationHostProtocol <NSObject>
- (void)authorizationDidChangeCouponCode:(NSString *)arg1;
- (void)authorizationDidSelectPaymentMethod:(PKPaymentMethod *)arg1;
- (void)authorizationDidSelectShippingAddress:(CNContact *)arg1;
- (void)authorizationDidSelectShippingMethod:(PKShippingMethod *)arg1;
- (void)authorizationDidAuthorizePurchase:(PKServiceProviderPurchase *)arg1;
- (void)authorizationDidAuthorizePayment:(PKPayment *)arg1;
- (void)authorizationDidFinishWithError:(NSError *)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationWillStart;

@optional
- (void)authorizationDidRejectPaymentRequestPromise;
- (void)authorizationDidFulfillPaymentRequest:(PKPaymentRequest *)arg1 completion:(void (^)(_Bool))arg2;
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;
- (void)handleConnectionDidOpenWithCompletion:(void (^)(void))arg1;
- (void)authorizationDidPresent;
- (void)authorizationDidUpdateAccountServicePaymentMethod:(PKAccountServicePaymentMethod *)arg1;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(PKApplePayTrustSignature *)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(PKAuthorizedPeerPaymentQuote *)arg1;
- (void)authorizationDidAuthorizeContext;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PDPassLibraryExportedInterface-Protocol.h>

@class NSNumber, NSSet, NSString, PKPaymentRequest;

@protocol PDPassLibraryInAppExportedInterface <PDPassLibraryExportedInterface>
- (void)hasPassesWithSupportedNetworks:(NSSet *)arg1 merchantCapabilities:(unsigned long long)arg2 webDomain:(NSString *)arg3 issuerCountryCodes:(NSSet *)arg4 paymentRequestType:(NSNumber *)arg5 isMultiTokensRequest:(_Bool)arg6 completion:(void (^)(_Bool))arg7;
- (void)canPresentPaymentRequest:(PKPaymentRequest *)arg1 completion:(void (^)(long long, NSString *, NSError *))arg2;
- (void)hasInAppPrivateLabelPaymentPassesForWebDomain:(NSString *)arg1 issuerCountryCodes:(NSSet *)arg2 isMultiTokensRequest:(_Bool)arg3 withHandler:(void (^)(_Bool))arg4;
- (void)inAppPrivateLabelPaymentPassesForWebDomain:(NSString *)arg1 issuerCountryCodes:(NSSet *)arg2 isMultiTokensRequest:(_Bool)arg3 withHandler:(void (^)(NSSet *))arg4;
- (void)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:(NSString *)arg1 issuerCountryCodes:(NSSet *)arg2 isMultiTokensRequest:(_Bool)arg3 withHandler:(void (^)(_Bool))arg4;
- (void)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(NSString *)arg1 issuerCountryCodes:(NSSet *)arg2 isMultiTokensRequest:(_Bool)arg3 withHandler:(void (^)(NSSet *))arg4;
- (void)inAppPaymentPassesForNetworks:(NSSet *)arg1 capabilities:(unsigned long long)arg2 issuerCountryCodes:(NSSet *)arg3 paymentRequestType:(NSNumber *)arg4 isMultiTokensRequest:(_Bool)arg5 withHandler:(void (^)(NSSet *))arg6;
- (void)hasInAppPaymentPassesForNetworks:(NSSet *)arg1 capabilities:(unsigned long long)arg2 issuerCountryCodes:(NSSet *)arg3 paymentRequestType:(NSNumber *)arg4 isMultiTokensRequest:(_Bool)arg5 withHandler:(void (^)(_Bool))arg6;
@end


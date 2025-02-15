//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKAuthorization, AKAuthorizationCredentialStateRequest, AKAuthorizationRevokeUpgradeContext, AKAuthorizationUserResponse, AKCredentialRequestContext, NSDictionary, NSString, NSXPCListenerEndpoint;

@protocol AKAuthorizationDaemonProtocol
- (void)storeAuthorization:(AKAuthorization *)arg1 forProxiedRequest:(AKCredentialRequestContext *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)startDiscoveryWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)establishConnectionWithStateBroadcastHandlerEndpoint:(NSXPCListenerEndpoint *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)establishConnectionWithNotificationHandlerEndpoint:(NSXPCListenerEndpoint *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)continueFetchingIconForRequestContext:(AKCredentialRequestContext *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)fetchPrimaryApplicationInformationForWebServiceWithInfo:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)revokeUpgradeWithContext:(AKAuthorizationRevokeUpgradeContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)fetchAppleOwnedDomainSetWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (void)fetchNativeTakeoverURLSetWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (void)fetchAppleIDAuthorizationURLSetWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (void)getPresentationContextForRequestContext:(AKCredentialRequestContext *)arg1 completion:(void (^)(AKAuthorizationPresentationContext *, NSError *))arg2;
- (void)getCredentialStateForClientID:(NSString *)arg1 completion:(void (^)(long long, NSError *))arg2;
- (void)getCredentialStateForRequest:(AKAuthorizationCredentialStateRequest *)arg1 completion:(void (^)(long long, NSError *))arg2;
- (void)cancelAuthorizationWithContext:(AKCredentialRequestContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)continueAuthorizationWithContext:(AKCredentialRequestContext *)arg1 completion:(void (^)(AKAuthorization *, NSError *))arg2;
- (void)beginAuthorizationWithContext:(AKCredentialRequestContext *)arg1 completion:(void (^)(AKAuthorizationUserResponse *, NSError *))arg2;
- (void)performAuthorizationWithContext:(AKCredentialRequestContext *)arg1 withUserProvidedInformation:(AKAuthorizationUserResponse *)arg2 completion:(void (^)(AKAuthorization *, NSError *))arg3;
- (void)performAuthorization:(AKCredentialRequestContext *)arg1 completion:(void (^)(AKAuthorization *, NSError *))arg2;
@end


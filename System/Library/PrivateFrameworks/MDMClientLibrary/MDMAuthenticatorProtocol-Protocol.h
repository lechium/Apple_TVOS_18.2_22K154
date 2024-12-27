//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MDMClientLibrary/DMCHTTPAuthenticator-Protocol.h>
#import <MDMClientLibrary/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL;

@protocol MDMAuthenticatorProtocol <NSObject, DMCHTTPAuthenticator>
+ (NSString *)authenticationMethod;
- (NSURL *)prepareForReauthenticationWithAuthParams:(NSDictionary *)arg1 accountID:(NSString *)arg2 error:(id *)arg3;
- (_Bool)canRefreshToken;
- (_Bool)doesWebAuthentication;
- (_Bool)validAuthParams:(NSDictionary *)arg1;
- (id)initWithTokens:(NSDictionary *)arg1;
- (id)initWithRMAccountID:(NSString *)arg1;

@optional
- (void)refreshTokenWithAuthParams:(NSDictionary *)arg1 accountID:(NSString *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)fetchTokenWithAuthParams:(NSDictionary *)arg1 accountID:(NSString *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)authTokensWithCallbackURL:(NSURL *)arg1 authParams:(NSDictionary *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (NSURL *)webAuthenticationURLForAuthParams:(NSDictionary *)arg1 userIdentifier:(NSString *)arg2;
@end


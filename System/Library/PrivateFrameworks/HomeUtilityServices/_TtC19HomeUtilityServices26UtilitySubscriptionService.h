//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSDictionary, NSString, NSURLSession, _TtC19HomeUtilityServices20UtilityConfiguration, _TtC19HomeUtilityServices21TAFVerificationFactor, _TtC19HomeUtilityServices22UtilityServiceLocation;

@interface _TtC19HomeUtilityServices26UtilitySubscriptionService : NSObject
{
    MISSING_TYPE *sessionID;	// 8 = 0x8
    MISSING_TYPE *configuration;	// 24 = 0x18
}

+ (void)resendHistoricalDataWithAuthorizationToken:(NSString *)arg1 subscriptionID:(NSString *)arg2 utilityID:(NSString *)arg3 start:(NSDate *)arg4 end:(NSDate *)arg5:(NSURLSession *)arg6 completionHandler:(void (^)(_Bool, NSError *))arg7;	// IMP=0x00600000000441e0
+ (void)revokeSubscriptionWithAuthorizationToken:(NSString *)arg1 subscriptionID:(NSString *)arg2 utilityID:(NSString *)arg3:(NSURLSession *)arg4 completionHandler:(void (^)(_Bool, NSError *))arg5;	// IMP=0x0060000000043df0
+ (void)renewAuthorizationTokenWithUtilityID:(NSString *)arg1 authorizationToken:(NSString *)arg2 accessToken:(NSString *)arg3:(NSURLSession *)arg4 completionHandler:(void (^)(NSString *, NSError *))arg5;	// IMP=0x0060000000043990
+ (void)fetchSubscriptionDetailsWithAccessToken:(NSString *)arg1 subscriptionID:(NSString *)arg2 utilityID:(NSString *)arg3:(NSURLSession *)arg4 completionHandler:(void (^)(_TtC19HomeUtilityServices27UtilitySubscriptionResponse *, NSError *))arg5;	// IMP=0x00600000000435a0
+ (void)renewAccessTokenWithRefreshToken:(NSString *)arg1 utilityID:(NSString *)arg2:(NSURLSession *)arg3 completionHandler:(void (^)(_TtC19HomeUtilityServices27UtilitySubscriptionTokenSet *, NSError *))arg4;	// IMP=0x00600000000431f0
+ (void)revokeSubscriptionWithAccessToken:(NSString *)arg1 subscriptionID:(NSString *)arg2 utilityID:(NSString *)arg3:(NSURLSession *)arg4 completionHandler:(void (^)(_Bool, NSError *))arg5;	// IMP=0x0060000000089ea0
+ (void)resendHistoricalDataWithAccessToken:(NSString *)arg1 subscriptionID:(NSString *)arg2 utilityID:(NSString *)arg3 start:(NSDate *)arg4 end:(NSDate *)arg5:(NSURLSession *)arg6 completionHandler:(void (^)(_Bool, NSError *))arg7;	// IMP=0x0060000000089aa0
- (void).cxx_destruct;	// IMP=0x00000000000446d0
- (id)init;	// IMP=0x0000000000044670
- (void)createUtilitySubscriptionWithServiceLocationID:(NSString *)arg1 accessToken:(NSString *)arg2:(NSURLSession *)arg3 completionHandler:(void (^)(_TtC19HomeUtilityServices27UtilitySubscriptionResponse *, NSError *))arg4;	// IMP=0x0000000000042d00
- (void)fetchServiceLocations:(NSString *)arg1:(NSURLSession *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;	// IMP=0x0000000000042700
- (void)createAccessToken:(NSString *)arg1:(NSURLSession *)arg2 completionHandler:(void (^)(_TtC19HomeUtilityServices27UtilitySubscriptionTokenSet *, NSError *))arg3;	// IMP=0x0000000000042310
- (void)initiateOTPForAccountForFactor:(_TtC19HomeUtilityServices21TAFVerificationFactor *)arg1:(NSURLSession *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;	// IMP=0x00000000000419f0
- (void)authorizeAccountWithTAFWithFields:(NSDictionary *)arg1:(NSURLSession *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;	// IMP=0x00000000000413f0
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000040d90
@property(nonatomic, readonly) _TtC19HomeUtilityServices20UtilityConfiguration *configuration; // @synthesize configuration;
- (void)createUtilitySubscriptionWithServiceLocationID:(NSString *)arg1 accessToken:(NSString *)arg2 zoneName:(NSString *)arg3:(NSURLSession *)arg4 completionHandler:(void (^)(_TtC19HomeUtilityServices27UtilitySubscriptionResponse *, NSError *))arg5;	// IMP=0x00000000000897c0
- (void)createUtilitySubscriptionWithServiceLocationID:(NSString *)arg1 accessToken:(NSString *)arg2 siteID:(NSString *)arg3:(NSURLSession *)arg4 completionHandler:(void (^)(_TtC19HomeUtilityServices27UtilitySubscriptionResponse *, NSError *))arg5;	// IMP=0x00000000000893c0
- (void)verifyOTPForAccountWithFactor:(_TtC19HomeUtilityServices21TAFVerificationFactor *)arg1 oneTimePasscode:(NSString *)arg2:(NSURLSession *)arg3 completionHandler:(void (^)(NSString *, NSError *))arg4;	// IMP=0x0000000000089000
- (void)createUtilitySubscriptionWithServiceLocation:(_TtC19HomeUtilityServices22UtilityServiceLocation *)arg1 accessToken:(NSString *)arg2 siteID:(NSString *)arg3:(NSURLSession *)arg4 completionHandler:(void (^)(_TtC19HomeUtilityServices27UtilitySubscriptionResponse *, NSError *))arg5;	// IMP=0x0000000000088770

@end


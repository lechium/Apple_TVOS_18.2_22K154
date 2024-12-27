//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/NSObject-Protocol.h>

@class ACAccount, ACAccountStore, IDSGameCenterData, NSArray, NSNumber, NSString;

@protocol FTPasswordManager <NSObject>
- (void)updatePreviousUsername:(NSString *)arg1 toNewUsername:(NSString *)arg2;
- (void)performCleanUpWithCompletion:(void (^)(_Bool))arg1;
- (void)cleanUpAccountsBasedOnInUseUsernamesBlock:(NSArray * (^)(void))arg1 profileIDBlock:(NSArray * (^)(void))arg2 completionBlock:(void (^)(_Bool))arg3;
- (void)cleanUpAccountsWithUsername:(NSString *)arg1 orProfileID:(NSString *)arg2 basedOnInUseUsernames:(NSArray *)arg3 profileIDs:(NSArray *)arg4 completionBlock:(void (^)(_Bool))arg5;
- (NSString *)profileIDForACAccount:(ACAccount *)arg1;
- (IDSGameCenterData *)gameCenterPropertiesFromAccountWithUsername:(NSString *)arg1;
- (ACAccount *)acAccountWithProfileID:(NSString *)arg1 username:(NSString *)arg2 accountStore:(ACAccountStore *)arg3;
- (void)cancelRequestID:(NSString *)arg1 serviceIdentifier:(NSString *)arg2;
- (void)setAccountStatus:(NSNumber *)arg1 forProfileID:(NSString *)arg2 username:(NSString *)arg3 service:(NSString *)arg4;
- (void)setHandlesForProfileID:(NSString *)arg1 username:(NSString *)arg2 service:(NSString *)arg3 handles:(NSArray *)arg4;
- (_Bool)isAuthTokenReceiptTime:(double)arg1 withinGracePeriod:(double)arg2;
- (void)removeAuthTokenAllowingGracePeriodForProfileID:(NSString *)arg1 username:(NSString *)arg2;
- (void)setAuthTokenForProfileID:(NSString *)arg1 username:(NSString *)arg2 service:(NSString *)arg3 authToken:(NSString *)arg4 selfHandle:(NSString *)arg5 accountStatus:(NSNumber *)arg6 outRequestID:(id *)arg7 completionBlock:(void (^)(NSString *, NSString *, NSString *, _Bool))arg8;
- (void)setAuthTokenForProfileID:(NSString *)arg1 username:(NSString *)arg2 service:(NSString *)arg3 authToken:(NSString *)arg4 selfHandle:(NSString *)arg5 outRequestID:(id *)arg6 completionBlock:(void (^)(NSString *, NSString *, NSString *, _Bool))arg7;
- (void)setPasswordForProfileID:(NSString *)arg1 username:(NSString *)arg2 service:(NSString *)arg3 password:(NSString *)arg4 outRequestID:(id *)arg5 completionBlock:(void (^)(NSString *, NSString *, NSString *, _Bool))arg6;
- (void)requestAuthTokenForProfileID:(NSString *)arg1 username:(NSString *)arg2 service:(NSString *)arg3 badPassword:(_Bool)arg4 showForgotPassword:(_Bool)arg5 forceRenewal:(_Bool)arg6 failIfNotSilent:(_Bool)arg7 outRequestID:(id *)arg8 completionBlock:(void (^)(NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSDictionary *, NSNumber *, _Bool, _Bool, _Bool))arg9;
- (void)requestAuthTokenForProfileID:(NSString *)arg1 username:(NSString *)arg2 service:(NSString *)arg3 badPassword:(_Bool)arg4 showForgotPassword:(_Bool)arg5 failIfNotSilent:(_Bool)arg6 outRequestID:(id *)arg7 completionBlock:(void (^)(NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSDictionary *, NSNumber *, _Bool, _Bool, _Bool))arg8;
- (void)requestAuthTokenForProfileID:(NSString *)arg1 username:(NSString *)arg2 service:(NSString *)arg3 badPassword:(_Bool)arg4 showForgotPassword:(_Bool)arg5 outRequestID:(id *)arg6 completionBlock:(void (^)(NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSDictionary *, NSNumber *, _Bool, _Bool, _Bool))arg7;
- (void)requestPasswordForUsername:(NSString *)arg1 service:(NSString *)arg2 badPassword:(_Bool)arg3 showForgotPassword:(_Bool)arg4 shouldRememberPassword:(_Bool)arg5 outRequestID:(id *)arg6 completionBlock:(void (^)(NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSDictionary *, _Bool, _Bool, _Bool))arg7;
- (void)fetchAuthTokenForProfileID:(NSString *)arg1 username:(NSString *)arg2 service:(NSString *)arg3 outRequestID:(id *)arg4 completionBlock:(void (^)(NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSDictionary *, NSNumber *))arg5;
- (void)fetchPasswordForProfileID:(NSString *)arg1 username:(NSString *)arg2 service:(NSString *)arg3 outRequestID:(id *)arg4 completionBlock:(void (^)(NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSDictionary *, NSNumber *))arg5;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@protocol SDXPCAppleIDAuthInterface
- (void)statusInfoWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)requestWithInfo:(NSDictionary *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)personInfoWithEmailOrPhone:(NSString *)arg1 completion:(void (^)(SFAppleIDPersonInfo *, NSError *))arg2;
- (void)myAccountWithCompletion:(void (^)(SFAppleIDAccount *, NSError *))arg1;
- (void)accountForAppleID:(NSString *)arg1 withCompletion:(void (^)(SFAppleIDAccount *, NSError *))arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTXPCServiceSubscriptionContext, NSDictionary, NSString;

@protocol CTXPCServiceDeviceManagementInterface
- (void)transferPersonalWallet:(NSString *)arg1 to:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)renamePersonalWallet:(NSString *)arg1 to:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)listPersonalWallets:(void (^)(NSArray *, NSError *))arg1;
- (void)deletePersonalWallet:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)loadGSMASettings:(CTXPCServiceSubscriptionContext *)arg1 state:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)getGSMAUIControlSetting:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (void)getConfiguredApns:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)resetUIConfiguredApns:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getUIConfiguredApns:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)setUIConfiguredApns:(CTXPCServiceSubscriptionContext *)arg1 apns:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
@end


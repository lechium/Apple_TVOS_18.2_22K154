//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol PDDeviceRegistrationServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)performDeviceRegistrationReturningContextForReason:(NSString *)arg1 brokerURL:(NSURL *)arg2 actionType:(long long)arg3 completion:(void (^)(unsigned long long, PKPaymentWebServiceContext *, NSError *))arg4;
- (void)performRegistrationForRegion:(NSString *)arg1 withReason:(NSString *)arg2 completion:(void (^)(unsigned long long, PKPaymentWebServiceContext *, NSError *))arg3;
- (void)performRegistrationForMemberOfRegions:(NSArray *)arg1 withReason:(NSString *)arg2 completion:(void (^)(unsigned long long, PKPaymentWebServiceContext *, NSError *))arg3;
@end


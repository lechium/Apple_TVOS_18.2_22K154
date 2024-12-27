//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol OTAuthKitAdapterNotifier;

@protocol OTAuthKitAdapter
- (void)registerNotification:(id <OTAuthKitAdapterNotifier>)arg1;
- (void)fetchCurrentDeviceListByAltDSID:(NSString *)arg1 flowID:(NSString *)arg2 deviceSessionID:(NSString *)arg3 reply:(void (^)(NSSet *, NSSet *, NSSet *, NSSet *, NSString *, NSString *, NSString *, NSNumber *, NSError *))arg4;
- (NSString *)machineID:(NSString *)arg1 flowID:(NSString *)arg2 deviceSessionID:(NSString *)arg3 canSendMetrics:(_Bool)arg4 error:(id *)arg5;
- (_Bool)accountIsDemoAccountByAltDSID:(NSString *)arg1 error:(id *)arg2;
- (_Bool)accountIsCDPCapableByAltDSID:(NSString *)arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKHealthService, NSArray, NSError, NSString;

@protocol HKHealthServicesManagerClientInterface <NSObject>
- (void)clientRemote_deliverSessionCharacteristics:(NSArray *)arg1 forService:(NSString *)arg2 toClient:(unsigned long long)arg3 withError:(NSError *)arg4;
- (void)clientRemote_deliverSessionHealthServiceStatus:(long long)arg1 toClient:(unsigned long long)arg2 finished:(_Bool)arg3 withError:(NSError *)arg4;
- (void)clientRemote_deliverDiscoveryHealthService:(HKHealthService *)arg1 toClient:(unsigned long long)arg2 finished:(_Bool)arg3 withError:(NSError *)arg4;
- (void)clientRemote_deliverBluetoothStatus:(long long)arg1 withError:(NSError *)arg2;
@end


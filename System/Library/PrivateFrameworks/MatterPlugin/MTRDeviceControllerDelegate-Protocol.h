//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MatterPlugin/NSObject-Protocol.h>

@class MTRDeviceController, MTRMetrics, MTRProductIdentity, NSError, NSNumber;

@protocol MTRDeviceControllerDelegate <NSObject>

@optional
- (void)controller:(MTRDeviceController *)arg1 suspendedChangedTo:(_Bool)arg2;
- (void)controller:(MTRDeviceController *)arg1 readCommissioningInfo:(MTRProductIdentity *)arg2;
- (void)controller:(MTRDeviceController *)arg1 commissioningComplete:(NSError *)arg2 nodeID:(NSNumber *)arg3 metrics:(MTRMetrics *)arg4;
- (void)controller:(MTRDeviceController *)arg1 commissioningComplete:(NSError *)arg2 nodeID:(NSNumber *)arg3;
- (void)controller:(MTRDeviceController *)arg1 commissioningComplete:(NSError *)arg2;
- (void)controller:(MTRDeviceController *)arg1 commissioningSessionEstablishmentDone:(NSError *)arg2;
- (void)controller:(MTRDeviceController *)arg1 statusUpdate:(long long)arg2;
@end


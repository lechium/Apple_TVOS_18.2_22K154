//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDevice, IDSService, MISSING_TYPE, NSString;

@interface CLCompanionTransport : NSObject
{
    _Bool _isConnected;	// 8 = 0x8
    _Bool _isNearby;	// 9 = 0x9
    _Bool _isActive;	// 10 = 0xa
    IDSDevice *_pairedDevice;	// 16 = 0x10
    double _pairedDeviceLastSeenTimestamp;	// 24 = 0x18
    CDUnknownBlockType _receivedMessageHandler;	// 32 = 0x20
    CDUnknownBlockType _connectionUpdateHandler;	// 40 = 0x28
    CDUnknownBlockType _deviceNearbyHandler;	// 48 = 0x30
    double _pairedDeviceLastNearbyTimestamp;	// 56 = 0x38
    IDSService *_idsService;	// 64 = 0x40
}

+ (id)computeMD5:(id)arg1;	// IMP=0x00200000007eff42
@property(retain) IDSService *idsService; // @synthesize idsService=_idsService;
@property double pairedDeviceLastNearbyTimestamp; // @synthesize pairedDeviceLastNearbyTimestamp=_pairedDeviceLastNearbyTimestamp;
@property _Bool isActive; // @synthesize isActive=_isActive;
@property _Bool isNearby; // @synthesize isNearby=_isNearby;
@property(copy) CDUnknownBlockType deviceNearbyHandler; // @synthesize deviceNearbyHandler=_deviceNearbyHandler;
@property(copy) CDUnknownBlockType connectionUpdateHandler; // @synthesize connectionUpdateHandler=_connectionUpdateHandler;
@property(copy) CDUnknownBlockType receivedMessageHandler; // @synthesize receivedMessageHandler=_receivedMessageHandler;
@property double pairedDeviceLastSeenTimestamp; // @synthesize pairedDeviceLastSeenTimestamp=_pairedDeviceLastSeenTimestamp;
@property(retain) IDSDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
@property _Bool isConnected; // @synthesize isConnected=_isConnected;
- (void)handleWorkoutDistanceAnalytics:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007efeea
- (void)handleMobilityUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007efe92
- (void)handleColdStorageDataUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007efe3a
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x00100000007efc7f
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00100000007efa1d
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x00100000007efa17
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x00100000007efa05
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef7cc
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef611
- (void)handleCardioChangeUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef5b9
- (void)handleContextConfigurationUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef561
- (void)handleVO2MaxCloudKitDailyStats:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef509
- (void)handleCompanionPingDataForAbsoluteAltitude:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef4b1
- (void)handlePredictedWalkDistanceBout:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef459
- (void)handleFilteredPressure:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef401
- (void)handleAbsoluteAltitudeSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef3a9
- (void)handleAbsoluteAltitudeUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef351
- (void)handleRemoteAppLaunch:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef2f9
- (void)handleMotionStateUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef2a1
- (void)handleCompanionPingData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef249
- (void)handleMotionCalsUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef1f1
- (void)handleOdometerCoarseElevationData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef199
- (void)handleOdometerCoarseElevationUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef15d
- (void)handleOdometerCoarseElevationSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef121
- (void)handleStrideCalDataUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef0e5
- (void)handleStrideCalDataSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef08d
- (void)handleOdometerElevationData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007ef035
- (void)handleOdometerElevationUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007eeff9
- (void)handleOdometerElevationSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007eefbd
- (void)handleOdometerCyclingData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007eef65
- (void)handleOdometerCyclingUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007eef29
- (void)handleOdometerCyclingSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007eeef0
- (void)handleSafetyCompanionHeartbeat:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007eee98
- (void)handleMartyBicycleStop:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007eee5c
- (void)handleMartyBicycleCollect:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007eee04
- (void)handleMartyStop:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007eedc8
- (void)handleMartyCollect:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007eed70
- (void)handleKappaStop:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007eed34
- (void)handleKappaCollect:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000007eecdc
- (void)receivedMessage:(unsigned short)arg1 data:(id)arg2 identifierString:(id)arg3;	// IMP=0x00100000007ee7bd
- (MISSING_TYPE *)sendMessage:type:priority:fireAndForget:encrypt:bypassConnectionCheck:timeout:nonWaking:completionHandler: /* Error: Ran out of types for this method. */;	// IMP=0x00100000007ee081
- (void)updateIDSStatusAndNotify;	// IMP=0x00100000007edd86
- (void)updateIDSStatus;	// IMP=0x00100000007ed82f
- (void)dealloc;	// IMP=0x00100000007ed7d0
- (id)initWithSilo:(id)arg1 iDSService:(id)arg2;	// IMP=0x00100000007ed132

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


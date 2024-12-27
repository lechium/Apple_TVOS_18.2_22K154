//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriNetwork/NSObject-Protocol.h>

@class CTDataConnectionStatus, CTDataSettings, CTDataStatus, CTDataStatusBasic, CTServiceDescriptor, CTServiceDisconnectionStatus, CTSlicedRunningAppInfoContainer, CTTetheringStatus, CTTrafficDescriptorsContainer, CTXPCServiceSubscriptionContext, NSArray, NSNumber, NSString;

@protocol CoreTelephonyClientDataDelegate <NSObject>

@optional
- (void)nrSlicedRunningAppStateChanged:(CTSlicedRunningAppInfoContainer *)arg1;
- (void)nrSliceAppStateChanged:(NSString *)arg1 status:(_Bool)arg2 trafficDescriptors:(CTTrafficDescriptorsContainer *)arg3;
- (void)dataRoamingSettingsChanged:(CTServiceDescriptor *)arg1 status:(_Bool)arg2;
- (void)serviceDisconnection:(CTXPCServiceSubscriptionContext *)arg1 status:(CTServiceDisconnectionStatus *)arg2;
- (void)tetheringStatus:(CTTetheringStatus *)arg1 connectionType:(int)arg2;
- (void)tetheringStatus:(CTTetheringStatus *)arg1;
- (void)internetConnectionAvailability:(_Bool)arg1;
- (void)internetDataStatus:(CTDataStatus *)arg1;
- (void)internetDataStatusBasic:(CTDataStatusBasic *)arg1;
- (void)internetConnectionActivationError:(int)arg1;
- (void)internetConnectionStateChanged:(CTDataConnectionStatus *)arg1;
- (void)dataSettingsChanged:(CTDataSettings *)arg1;
- (void)regDataModeChanged:(CTXPCServiceSubscriptionContext *)arg1 dataMode:(int)arg2;
- (void)dataStatus:(CTXPCServiceSubscriptionContext *)arg1 dataStatusInfo:(CTDataStatus *)arg2;
- (void)connectionAvailability:(CTXPCServiceSubscriptionContext *)arg1 availableConnections:(NSArray *)arg2;
- (void)servingNetworkChanged:(CTXPCServiceSubscriptionContext *)arg1;
- (void)currentDataServiceDescriptorChanged:(CTServiceDescriptor *)arg1;
- (void)currentDataSimChanged:(CTXPCServiceSubscriptionContext *)arg1;
- (void)preferredDataServiceDescriptorChanged:(CTServiceDescriptor *)arg1;
- (void)preferredDataSimChanged:(CTXPCServiceSubscriptionContext *)arg1;
- (void)anbrBitrateRecommendation:(CTXPCServiceSubscriptionContext *)arg1 bitrate:(NSNumber *)arg2 direction:(int)arg3;
- (void)anbrActivationState:(CTXPCServiceSubscriptionContext *)arg1 enabled:(_Bool)arg2;
- (void)connectionActivationError:(CTXPCServiceSubscriptionContext *)arg1 connection:(int)arg2 error:(int)arg3;
- (void)connectionStateChanged:(CTXPCServiceSubscriptionContext *)arg1 connection:(int)arg2 dataConnectionStatusInfo:(CTDataConnectionStatus *)arg3;
@end


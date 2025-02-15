//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MRAVDistantEndpoint, MRAVOutputDevice, MRAVRoutingDiscoverySessionConfiguration, MRDeviceInfo, NSArray, NSData, NSError, NSString;

@protocol MRAVDistantExternalDeviceClientProtocol <NSObject>
- (void)discoveryOutputDevicesChanged:(NSArray *)arg1 forConfiguration:(MRAVRoutingDiscoverySessionConfiguration *)arg2;
- (void)hostedExternalDeviceDidRemoveOutputDevice:(MRAVOutputDevice *)arg1;
- (void)hostedExternalDeviceDidChangeOutputDevice:(MRAVOutputDevice *)arg1;
- (void)hostedExternalDeviceDidAddOutputDevice:(MRAVOutputDevice *)arg1;
- (void)hostedExternalDeviceIsMutedDidChange:(_Bool)arg1 forOutputDevice:(MRAVOutputDevice *)arg2;
- (void)hostedExternalDeviceVolumeDidChange:(float)arg1 forOutputDevice:(MRAVOutputDevice *)arg2;
- (void)hostedExternalDeviceVolumeCapabilitiesDidChange:(unsigned int)arg1 forOutputDevice:(MRAVOutputDevice *)arg2;
- (void)hostedExternalDeviceEndpointDidChange:(MRAVDistantEndpoint *)arg1;
- (void)hostedExternalDeviceDidReceiveCustomData:(NSData *)arg1 withName:(NSString *)arg2;
- (void)hostedExternalDeviceDeviceInfoDidChange:(MRDeviceInfo *)arg1;
- (void)hostedExternalDeviceConnectionStateDidChange:(unsigned int)arg1 withError:(NSError *)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDCameraRemoteStreamProtocol-Protocol.h>

@class HMDCameraNetworkConfig, IDSSession, NSNumber;

@protocol HMDCameraRemoteStreamSenderProtocol <HMDCameraRemoteStreamProtocol>
@property(readonly, nonatomic) NSNumber *mtu;
- (void)startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(HMDCameraNetworkConfig *)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(HMDCameraNetworkConfig *)arg5 cameraAudioSSRC:(unsigned int)arg6;
- (void)openRelaySession;

@optional
- (void)startPacketRelayWithIDSDeviceSession:(IDSSession *)arg1 cameraVideoSSRC:(unsigned int)arg2 cameraAudioSSRC:(unsigned int)arg3;
@end


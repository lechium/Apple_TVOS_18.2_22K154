//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDCameraRemoteStreamProtocol-Protocol.h>

@class HMDDevice, IDSSession;

@protocol HMDCameraRemoteStreamReceiverProtocol <HMDCameraRemoteStreamProtocol>
@property(readonly) IDSSession *session;
- (void)setUpRemoteConnectionWithDevice:(HMDDevice *)arg1;
@end


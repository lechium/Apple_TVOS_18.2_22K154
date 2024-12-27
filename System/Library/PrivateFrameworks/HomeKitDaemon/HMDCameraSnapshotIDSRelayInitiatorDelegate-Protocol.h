//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSnapshotIDSRelayInitiator, NSError;

@protocol HMDCameraSnapshotIDSRelayInitiatorDelegate <NSObject>
- (void)relayInitiatorDidStartDataSend:(HMDCameraSnapshotIDSRelayInitiator *)arg1;
- (void)relayInitiatorDidSendDataSuccessfully:(HMDCameraSnapshotIDSRelayInitiator *)arg1;
- (void)relayInitiator:(HMDCameraSnapshotIDSRelayInitiator *)arg1 didEndIDSSessionWithError:(NSError *)arg2;
- (void)relayInitiatorDidSendIDSInvitation:(HMDCameraSnapshotIDSRelayInitiator *)arg1;
- (void)relayInitiatorIDSSessionDidStart:(HMDCameraSnapshotIDSRelayInitiator *)arg1;
@end


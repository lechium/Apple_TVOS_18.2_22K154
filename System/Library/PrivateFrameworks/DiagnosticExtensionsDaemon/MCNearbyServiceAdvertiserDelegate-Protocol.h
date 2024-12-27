//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DiagnosticExtensionsDaemon/NSObject-Protocol.h>

@class MCNearbyServiceAdvertiser, MCPeerID, NSData, NSError;

@protocol MCNearbyServiceAdvertiserDelegate <NSObject>
- (void)advertiser:(MCNearbyServiceAdvertiser *)arg1 didReceiveInvitationFromPeer:(MCPeerID *)arg2 withContext:(NSData *)arg3 invitationHandler:(void (^)(_Bool, MCSession *))arg4;

@optional
- (void)advertiser:(MCNearbyServiceAdvertiser *)arg1 didNotStartAdvertisingPeer:(NSError *)arg2;
@end


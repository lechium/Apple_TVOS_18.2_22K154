//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HearingUtilities/NSObject-Protocol.h>

@class CBPairingAgent, CBPeer, NSError, NSNumber;

@protocol CBPairingAgentDelegate <NSObject>

@optional
- (void)pairingAgent:(CBPairingAgent *)arg1 peerDidRequestPairing:(CBPeer *)arg2 type:(long long)arg3 passkey:(NSNumber *)arg4;
- (void)pairingAgent:(CBPairingAgent *)arg1 peerDidUnpair:(CBPeer *)arg2;
- (void)pairingAgent:(CBPairingAgent *)arg1 peerDidFailToCompletePairing:(CBPeer *)arg2 error:(NSError *)arg3;
- (void)pairingAgent:(CBPairingAgent *)arg1 peerDidCompletePairing:(CBPeer *)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC15FindMyBluetoothP33_FB9F492088B4C388E3479FD29311B1A941DelegateTrampoline_CBPairingAgentDelegate : NSObject
{
    MISSING_TYPE *delegateQueue;	// 8 = 0x8
    MISSING_TYPE *pairingAgent;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004a770
- (id)init;	// IMP=0x000000000004a710
- (void)pairingAgent:(id)arg1 peerDidRequestPairing:(id)arg2 type:(long long)arg3 passkey:(id)arg4;	// IMP=0x000000000004a670
- (void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2;	// IMP=0x000000000004a310
- (void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3;	// IMP=0x000000000004a040
- (void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2;	// IMP=0x0000000000049d10

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMProxPDPAndALSPhoneManagerInternal : NSObject
{
    void *fLocationdConnection;	// 8 = 0x8
    CDUnknownBlockType fPDPHandler;	// 16 = 0x10
    CDUnknownBlockType fALSPhoneHandler;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *fPrivateQueue;	// 32 = 0x20
    _Bool fStartedPDPUpdates;	// 40 = 0x28
    _Bool fStartedALSUpdates;	// 41 = 0x29
}

- (void)_startALSPhoneUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000149b0c
- (void)_startPDPUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001492ca
- (void)dealloc;	// IMP=0x0000000000149288
- (id)init;	// IMP=0x0000000000149234

@end


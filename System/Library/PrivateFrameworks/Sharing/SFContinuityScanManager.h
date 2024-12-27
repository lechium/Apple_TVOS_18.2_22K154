//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SFXPCClient.h"

@class NSHashTable, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface SFContinuityScanManager : SFXPCClient
{
    NSMutableSet *_foundDevices;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    unsigned long long _scanTypes;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x001000000004c224
- (void).cxx_destruct;	// IMP=0x000000000004d602
@property unsigned long long scanTypes; // @synthesize scanTypes=_scanTypes;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain) NSMutableSet *foundDevices; // @synthesize foundDevices=_foundDevices;
- (_Bool)shouldEscapeXpcTryCatch;	// IMP=0x000000000004d58a
- (id)remoteObjectInterface;	// IMP=0x000000000004d56a
- (id)exportedInterface;	// IMP=0x000000000004d3ef
- (id)machServiceName;	// IMP=0x000000000004d3e2
- (void)pairedDevicesChanged:(id)arg1;	// IMP=0x000000000004d254
- (void)lostDeviceWithDevice:(id)arg1;	// IMP=0x000000000004cfe6
- (void)foundDeviceWithDevice:(id)arg1;	// IMP=0x000000000004cd78
- (void)receivedAdvertisement:(id)arg1;	// IMP=0x000000000004cb07
- (void)onqueue_connectionInterrupted;	// IMP=0x000000000004c959
- (void)onqueue_connectionEstablished;	// IMP=0x000000000004c8f2
- (void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000004c61e
- (void)scanForTypes:(unsigned long long)arg1;	// IMP=0x000000000004c495
- (void)_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;	// IMP=0x000000000004c483
- (void)removeObserver:(id)arg1;	// IMP=0x000000000004c3b3
- (void)addObserver:(id)arg1;	// IMP=0x000000000004c34f
- (id)init;	// IMP=0x000000000004c286

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


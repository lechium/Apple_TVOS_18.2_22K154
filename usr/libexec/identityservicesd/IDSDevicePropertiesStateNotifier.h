//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPairingManager, IDSUTunDeliveryController, NSMutableDictionary;

@interface IDSDevicePropertiesStateNotifier : NSObject
{
    NSMutableDictionary *_notifyDict;	// 8 = 0x8
    IDSUTunDeliveryController *_deliveryController;	// 16 = 0x10
    IDSPairingManager *_pairingManager;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x004000000049c1a2
- (void).cxx_destruct;	// IMP=0x002000000049cd59
@property(retain, nonatomic) IDSPairingManager *pairingManager; // @synthesize pairingManager=_pairingManager;
@property(retain, nonatomic) IDSUTunDeliveryController *deliveryController; // @synthesize deliveryController=_deliveryController;
@property(retain, nonatomic) NSMutableDictionary *notifyDict; // @synthesize notifyDict=_notifyDict;
- (void)setState:(unsigned long long)arg1 forProperty:(unsigned long long)arg2 deviceUniqueID:(id)arg3;	// IMP=0x001000000049c71c
- (void)updateStateForDeviceWithUniqueID:(id)arg1;	// IMP=0x001000000049c6a6
- (unsigned long long)_getCurrentState:(id)arg1;	// IMP=0x001000000049c51c
- (void)dealloc;	// IMP=0x001000000049c32b
- (id)initWithUTunDeliveryController:(id)arg1 pairingManager:(id)arg2;	// IMP=0x001000000049c278
- (id)init;	// IMP=0x001000000049c1f7

@end


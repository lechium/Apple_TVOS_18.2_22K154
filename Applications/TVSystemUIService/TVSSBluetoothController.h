//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSAttributedString, NSDictionary, NSNumber, NSString, TVSObserverSet, TVSSBluetoothControllerConfiguration, UIImage;
@protocol TVPSBluetoothDeviceManaging;

@interface TVSSBluetoothController : NSObject
{
    _Bool _isDiscoveringPairableDevices;	// 8 = 0x8
    NSDictionary *_pairedDeviceByIdentifier;	// 16 = 0x10
    NSDictionary *_pairableDeviceByIdentifier;	// 24 = 0x18
    TVSObserverSet *_pairedDeviceObservers;	// 32 = 0x20
    TVSObserverSet *_pairableDeviceObservers;	// 40 = 0x28
    TVSSBluetoothControllerConfiguration *_configuration;	// 48 = 0x30
    NSArray *_pairedDevices;	// 56 = 0x38
    NSArray *_pairableDevices;	// 64 = 0x40
    NSObject<TVPSBluetoothDeviceManaging> *_bluetoothManager;	// 72 = 0x48
}

+ (id)_deviceLookupDictionaryFromDevices:(id)arg1;	// IMP=0x002000000010f7f0
+ (id)_sortedDevices:(id)arg1;	// IMP=0x001000000010f670
+ (id)_deviceSortDescriptors;	// IMP=0x001000000010f5b0
- (void).cxx_destruct;	// IMP=0x002000000010fb10
@property(readonly, nonatomic) NSObject<TVPSBluetoothDeviceManaging> *bluetoothManager; // @synthesize bluetoothManager=_bluetoothManager;
@property(readonly, copy, nonatomic) NSArray *pairableDevices; // @synthesize pairableDevices=_pairableDevices;
@property(readonly, copy, nonatomic) NSArray *pairedDevices; // @synthesize pairedDevices=_pairedDevices;
@property(readonly, nonatomic) TVSSBluetoothControllerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_updatePairableDevicesAndNotify:(_Bool)arg1;	// IMP=0x001000000010f320
- (void)_updatePairedDevices;	// IMP=0x001000000010f130
- (void)_updateDiscoveringPairableDevices;	// IMP=0x001000000010ef20
- (void)bluetoothDeviceManager:(id)arg1 didUpdatePairedDevices:(id)arg2;	// IMP=0x001000000010ee60
- (void)bluetoothDeviceManager:(id)arg1 didUpdatePairableDevices:(id)arg2;	// IMP=0x001000000010eda0
- (void)unpairDeviceWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000010ec60
- (MISSING_TYPE *)disconnectDeviceWithIdentifier:withCompletion: /* Error: Ran out of types for this method. */;	// IMP=0x001000000010eb20
- (void)connectDeviceWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000010e9e0
- (id)deviceForIdentifier:(id)arg1;	// IMP=0x001000000010e910
- (void)removePairableDevicesObserver:(id)arg1;	// IMP=0x001000000010e680
- (void)addPairableDevicesObserver:(id)arg1;	// IMP=0x001000000010e3f0
- (void)removePairedDevicesObserver:(id)arg1;	// IMP=0x001000000010e170
- (void)addPairedDevicesObserver:(id)arg1;	// IMP=0x001000000010def0
@property(readonly, copy, nonatomic) NSArray *connectedPairedDevices;
- (void)dealloc;	// IMP=0x001000000010dde0
- (id)initWithConfiguration:(id)arg1;	// IMP=0x001000000010d9c0
- (id)initWithConfiguration:(id)arg1 bluetoothManagerProvider:(CDUnknownBlockType)arg2;	// IMP=0x001000000010d0a0
@property(nonatomic) _Bool contentIsSelected;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly, nonatomic) UIImage *contentImage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,R,N

@property(readonly, nonatomic) NSString *contentTitle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N


// Remaining properties
@property(readonly, nonatomic) NSAttributedString *contentAttrText1;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSAttributedString",?,R,N

@property(readonly, nonatomic) NSAttributedString *contentAttrText2;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSAttributedString",?,R,N

@property(readonly, nonatomic) NSAttributedString *contentAttrText3;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSAttributedString",?,R,N

@property(readonly, nonatomic) NSArray *contentChildIdentifiers;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@property(readonly, nonatomic) UIImage *contentImage1;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,R,N

@property(readonly, nonatomic) UIImage *contentImage2;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,R,N

@property(readonly, nonatomic) UIImage *contentImage3;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,R,N

@property(readonly, nonatomic) UIImage *contentImage4;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,R,N

@property(nonatomic) _Bool contentIsDisabled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(retain, nonatomic) NSNumber *contentPercentage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSNumber",?,&,N

@property(readonly, nonatomic) NSString *contentText1;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, nonatomic) NSString *contentText2;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, nonatomic) NSString *contentText3;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


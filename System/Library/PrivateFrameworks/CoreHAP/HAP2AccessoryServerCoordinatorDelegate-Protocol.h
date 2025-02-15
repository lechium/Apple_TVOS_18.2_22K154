//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAP2AccessoryServerDiscoveryAccessoryInfo, NSError;
@protocol HAP2AccessoryServerCoordinator, HAP2PairedAccessoryServer, HAP2UnpairedAccessoryServer;

@protocol HAP2AccessoryServerCoordinatorDelegate <NSObject>
- (void)coordinator:(id <HAP2AccessoryServerCoordinator>)arg1 didCreatePairedAccessoryServer:(id <HAP2PairedAccessoryServer>)arg2;
- (void)coordinator:(id <HAP2AccessoryServerCoordinator>)arg1 didCreateUnpairedAccessoryServer:(id <HAP2UnpairedAccessoryServer>)arg2;

@optional
- (void)coordinator:(id <HAP2AccessoryServerCoordinator>)arg1 didLoseAccessory:(HAP2AccessoryServerDiscoveryAccessoryInfo *)arg2 error:(NSError *)arg3;
- (void)coordinator:(id <HAP2AccessoryServerCoordinator>)arg1 didStopDiscoveringWithError:(NSError *)arg2;
- (void)coordinator:(id <HAP2AccessoryServerCoordinator>)arg1 didStartDiscoveringWithError:(NSError *)arg2;
@end


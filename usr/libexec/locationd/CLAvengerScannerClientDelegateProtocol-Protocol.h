//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CLAvengerScannerClientObjectDiscoveryData, CLAvengerScannerReconciledInformation, NSString;

@protocol CLAvengerScannerClientDelegateProtocol <NSObject>
- (NSString *)clientIdentifier;
- (void)onAvengerAdvertisement:(CLAvengerScannerClientObjectDiscoveryData *)arg1 reconciledInformation:(CLAvengerScannerReconciledInformation *)arg2;

@optional
- (void)onNotOptedInBOMScanEnded;
- (void)onUpdatedPowerState;
- (void)onAdvertisementBufferEmptied;
- (void)onAggressiveScanEnded;
- (void)onAggressiveScanStarted;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerPairingDriverMFiCertWorkItem
{
    NSError *_cancelError;	// 8 = 0x8
}

+ (id)checkCertificate;	// IMP=0x00600000000473be
- (void).cxx_destruct;	// IMP=0x0000000000047757
@property(retain, nonatomic) NSError *cancelError; // @synthesize cancelError=_cancelError;
- (void)cancelWithError:(id)arg1;	// IMP=0x0000000000047636
- (void)runForPairingDriver:(id)arg1;	// IMP=0x00000000000473d0

@end


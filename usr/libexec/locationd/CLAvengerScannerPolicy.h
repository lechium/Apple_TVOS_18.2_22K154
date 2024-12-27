//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CLAvengerScannerPolicyDelegate;

@interface CLAvengerScannerPolicy : NSObject
{
    id <CLAvengerScannerPolicyDelegate> _delegate;	// 8 = 0x8
    struct CLAvengerScannerPolicyContext _currentContext;	// 16 = 0x10
    long long _currentScanType;	// 88 = 0x58
}

+ (id)convertCLAvengerScannerPolicyScanTypeToString:(long long)arg1;	// IMP=0x004000000026ef7c
- (id).cxx_construct;	// IMP=0x002000000026efaa
@property(readonly, nonatomic) long long currentScanType; // @synthesize currentScanType=_currentScanType;
@property(readonly, nonatomic) struct CLAvengerScannerScanParameters currentScanParameters;
@property(nonatomic) unsigned long long totalAdvertisementBuffersAvailable;
@property(readonly, nonatomic) _Bool downgradedDuringCoexFriendlyAggressiveDiscoveryScan;
@property(nonatomic) _Bool bluetoothAudioActive;
@property(nonatomic) _Bool wifi2GHzCriticalState;
@property(nonatomic) _Bool associatedTo2GHzWiFi;
@property(nonatomic) _Bool optedIn;
- (_Bool)hasActiveBTFindingScan;	// IMP=0x001000000026ec50
- (void)stopHawkeyeLowEnergyScan;	// IMP=0x001000000026eb89
- (void)startHawkeyeLowEnergyScan;	// IMP=0x001000000026ea8c
- (void)stopWatchAdvertisementBufferScan;	// IMP=0x001000000026ea0f
- (void)startWatchAdvertisementBufferScan;	// IMP=0x001000000026e991
- (void)stopBTFindingScan;	// IMP=0x001000000026e8ca
- (void)startBTFindingScan;	// IMP=0x001000000026e7cd
- (_Bool)hasActiveAggressiveScan;	// IMP=0x001000000026e7b6
- (void)stopCoexFriendlyAggressiveScan;	// IMP=0x001000000026e6ab
- (void)startCoexFriendlyAggressiveScan;	// IMP=0x001000000026e5b8
- (void)stopAggressiveScan;	// IMP=0x001000000026e4bd
- (void)startAggressiveScan;	// IMP=0x001000000026e3c2
- (void)updateContext:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x001000000026e310
- (long long)resolveNewScanTypeWithNewContext:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x001000000026dfb9
- (long long)desiredHawkeyeLowEnergyScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x001000000026dfa3
- (long long)desiredWatchAdvertisementBufferScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x001000000026df7e
- (long long)desiredBTFindingDiscoveryScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x001000000026df4b
- (long long)desiredCoexFriendlyAggressiveDiscoveryScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x001000000026de64
- (long long)desiredAggressiveDiscoveryScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x001000000026de4e
- (long long)desiredDefaultScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x001000000026ddfd
- (id)initWithDelegate:(id)arg1 platformType:(long long)arg2 supportsPerTypeDuplicateFilter:(_Bool)arg3;	// IMP=0x001000000026dd60

@end


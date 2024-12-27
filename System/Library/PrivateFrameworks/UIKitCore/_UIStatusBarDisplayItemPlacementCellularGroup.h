//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, _UIStatusBarDisplayItemPlacement;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementCellularGroup
{
    _UIStatusBarDisplayItemPlacement *_signalStrengthPlacement;	// 8 = 0x8
    _UIStatusBarDisplayItemPlacement *_warningPlacement;	// 16 = 0x10
    _UIStatusBarDisplayItemPlacement *_typePlacement;	// 24 = 0x18
    _UIStatusBarDisplayItemPlacement *_namePlacement;	// 32 = 0x20
    _UIStatusBarDisplayItemPlacement *_callForwardingPlacement;	// 40 = 0x28
    _UIStatusBarDisplayItemPlacement *_badgePlacement;	// 48 = 0x30
    _UIStatusBarDisplayItemPlacement *_rawPlacement;	// 56 = 0x38
    _UIStatusBarDisplayItemPlacement *_dualSignalStrengthPlacement;	// 64 = 0x40
    _UIStatusBarDisplayItemPlacement *_dualNamePlacement;	// 72 = 0x48
    _UIStatusBarDisplayItemPlacement *_dualNameAndTypePlacement;	// 80 = 0x50
    NSArray *_placementsAffectedByAirplaneMode;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000011d05cd
@property(retain, nonatomic) NSArray *placementsAffectedByAirplaneMode; // @synthesize placementsAffectedByAirplaneMode=_placementsAffectedByAirplaneMode;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *dualNameAndTypePlacement; // @synthesize dualNameAndTypePlacement=_dualNameAndTypePlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *dualNamePlacement; // @synthesize dualNamePlacement=_dualNamePlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *dualSignalStrengthPlacement; // @synthesize dualSignalStrengthPlacement=_dualSignalStrengthPlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *rawPlacement; // @synthesize rawPlacement=_rawPlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *badgePlacement; // @synthesize badgePlacement=_badgePlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *callForwardingPlacement; // @synthesize callForwardingPlacement=_callForwardingPlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *namePlacement; // @synthesize namePlacement=_namePlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *typePlacement; // @synthesize typePlacement=_typePlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *warningPlacement; // @synthesize warningPlacement=_warningPlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *signalStrengthPlacement; // @synthesize signalStrengthPlacement=_signalStrengthPlacement;

@end


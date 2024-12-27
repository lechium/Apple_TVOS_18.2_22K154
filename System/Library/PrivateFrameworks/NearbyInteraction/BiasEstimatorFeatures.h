//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface BiasEstimatorFeatures : NSObject
{
    int _antennaMask;	// 8 = 0x8
    int _rxAntennaPacket1;	// 12 = 0xc
    int _rxAntennaPacket2;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
    double _uwbTime;	// 32 = 0x20
    double _tofPicSecond;	// 40 = 0x28
    double _rssiDbm;	// 48 = 0x30
    double _soiRssiDbm;	// 56 = 0x38
    double _toaNoiseRms;	// 64 = 0x40
    double _toaPpwinRms;	// 72 = 0x48
    double _toaPpwinPeak;	// 80 = 0x50
    double _rttInitiator;	// 88 = 0x58
    double _tatInitiator;	// 96 = 0x60
    double _rttResponder;	// 104 = 0x68
    double _tatResponder;	// 112 = 0x70
    NSArray *_cirPacket1;	// 120 = 0x78
    double _leadingEdgePacket1;	// 128 = 0x80
    double _firstPathIndexPacket1;	// 136 = 0x88
    NSArray *_cirPacket2;	// 144 = 0x90
    double _leadingEdgePacket2;	// 152 = 0x98
    double _firstPathIndexPacket2;	// 160 = 0xa0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000130a2
- (void).cxx_destruct;	// IMP=0x0000000000014823
@property(nonatomic) int rxAntennaPacket2; // @synthesize rxAntennaPacket2=_rxAntennaPacket2;
@property(nonatomic) double firstPathIndexPacket2; // @synthesize firstPathIndexPacket2=_firstPathIndexPacket2;
@property(nonatomic) double leadingEdgePacket2; // @synthesize leadingEdgePacket2=_leadingEdgePacket2;
@property(copy, nonatomic) NSArray *cirPacket2; // @synthesize cirPacket2=_cirPacket2;
@property(nonatomic) int rxAntennaPacket1; // @synthesize rxAntennaPacket1=_rxAntennaPacket1;
@property(nonatomic) double firstPathIndexPacket1; // @synthesize firstPathIndexPacket1=_firstPathIndexPacket1;
@property(nonatomic) double leadingEdgePacket1; // @synthesize leadingEdgePacket1=_leadingEdgePacket1;
@property(copy, nonatomic) NSArray *cirPacket1; // @synthesize cirPacket1=_cirPacket1;
@property(nonatomic) double tatResponder; // @synthesize tatResponder=_tatResponder;
@property(nonatomic) double rttResponder; // @synthesize rttResponder=_rttResponder;
@property(nonatomic) double tatInitiator; // @synthesize tatInitiator=_tatInitiator;
@property(nonatomic) double rttInitiator; // @synthesize rttInitiator=_rttInitiator;
@property(nonatomic) double toaPpwinPeak; // @synthesize toaPpwinPeak=_toaPpwinPeak;
@property(nonatomic) double toaPpwinRms; // @synthesize toaPpwinRms=_toaPpwinRms;
@property(nonatomic) double toaNoiseRms; // @synthesize toaNoiseRms=_toaNoiseRms;
@property(nonatomic) double soiRssiDbm; // @synthesize soiRssiDbm=_soiRssiDbm;
@property(nonatomic) double rssiDbm; // @synthesize rssiDbm=_rssiDbm;
@property(nonatomic) double tofPicSecond; // @synthesize tofPicSecond=_tofPicSecond;
@property(nonatomic) double uwbTime; // @synthesize uwbTime=_uwbTime;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int antennaMask; // @synthesize antennaMask=_antennaMask;
- (unsigned long long)hash;	// IMP=0x0000000000013f32
- (id)populateOrderedInputFeature;	// IMP=0x0000000000013ab6
- (id)description;	// IMP=0x0000000000013785
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000130aa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001305a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000012b2e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000128bf
- (id)initWithBiasEstimatorFeatures:(id)arg1;	// IMP=0x0000000000012537

@end


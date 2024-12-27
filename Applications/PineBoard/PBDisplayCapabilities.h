//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface PBDisplayCapabilities : NSObject
{
    unsigned short _resolution;	// 8 = 0x8
    unsigned short _mode;	// 10 = 0xa
    unsigned char _gamut;	// 12 = 0xc
    unsigned char _refresh;	// 13 = 0xd
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x0020000000170099
- (_Bool)isLikelyUpgradeFrom:(id)arg1;	// IMP=0x0010000000170091
- (_Bool)supportsDynamicRange:(long long)arg1;	// IMP=0x0010000000170062
@property(readonly, nonatomic) _Bool supports120Hz;
@property(readonly, nonatomic) _Bool supportsFilm;
@property(readonly, nonatomic) _Bool supportsNTSC;
@property(readonly, nonatomic) _Bool supportsPAL;
@property(readonly, nonatomic) _Bool supportsHD;
@property(readonly, nonatomic) _Bool supports4K;
@property(readonly, nonatomic) _Bool supportsHDR;
@property(readonly, nonatomic) _Bool supportsDolbyVision;
@property(readonly, nonatomic) CDStruct_c3b9c2ee highestDisplayResolution;
@property(readonly, nonatomic) long long bestDynamicRange;
@property(readonly, nonatomic) NSData *dataRepresentation;
- (id)debugDescription;	// IMP=0x001000000016fe37
- (id)initWithDataRepresentation:(id)arg1;	// IMP=0x001000000016fd88
- (id)initWithAvailableModes:(id)arg1 forDisplay:(id)arg2;	// IMP=0x001000000016f83d
@property(readonly, nonatomic) unsigned short modeCapability;
@property(readonly, nonatomic) unsigned char gamutCapability;
@property(readonly, nonatomic) unsigned char refreshCapability;
@property(readonly, nonatomic) unsigned short resolutionCapability;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCMFitnessTracking : PBCodable
{
    int _powerSource;	// 8 = 0x8
    _Bool _fitnessTrackingEnabled;	// 12 = 0xc
    struct {
        unsigned int powerSource:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool fitnessTrackingEnabled; // @synthesize fitnessTrackingEnabled=_fitnessTrackingEnabled;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000001010953
- (unsigned long long)hash;	// IMP=0x0010000001010916
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000101089d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000101082e
- (void)copyTo:(id)arg1;	// IMP=0x00100000010107fd
- (void)writeTo:(id)arg1;	// IMP=0x00100000010107a9
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000101079c
- (id)dictionaryRepresentation;	// IMP=0x001000000101049d
- (id)description;	// IMP=0x0010000001010426
- (int)StringAsPowerSource:(id)arg1;	// IMP=0x00100000010103a0
- (id)powerSourceAsString:(int)arg1;	// IMP=0x0010000001010367
@property(nonatomic) _Bool hasPowerSource;
@property(nonatomic) int powerSource; // @synthesize powerSource=_powerSource;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class _ICLLAutoPlaySource, _ICLLAvailability, _ICLLNoGenerationSource, _ICLLRadioSource;

__attribute__((visibility("hidden")))
@interface _ICLLPlaybackControlSettings : PBCodable
{
    _ICLLAutoPlaySource *_autoPlay;	// 8 = 0x8
    _ICLLAvailability *_availability;	// 16 = 0x10
    _ICLLNoGenerationSource *_noGeneration;	// 24 = 0x18
    _ICLLRadioSource *_radio;	// 32 = 0x20
    int _repeatMode;	// 40 = 0x28
    int _shuffleMode;	// 44 = 0x2c
    int _trackGenerationSource;	// 48 = 0x30
    struct {
        unsigned int repeatMode:1;
        unsigned int shuffleMode:1;
        unsigned int trackGenerationSource:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000000aa447
- (unsigned long long)hash;	// IMP=0x00000000000aa35e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000aa1c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000aa07b
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a9f94
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a9f87
- (id)dictionaryRepresentation;	// IMP=0x00000000000a9d09
- (id)description;	// IMP=0x00000000000a9c5a

@end


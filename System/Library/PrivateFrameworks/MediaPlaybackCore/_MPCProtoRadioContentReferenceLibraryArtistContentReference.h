//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCProtoRadioContentReferenceLibraryArtistContentReference : PBCodable
{
    long long _representativeItemCloudID;	// 8 = 0x8
    long long _storeAdamID;	// 16 = 0x10
    NSString *_artistName;	// 24 = 0x18
    CDStruct_c223d907 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000025ec64
- (unsigned long long)hash;	// IMP=0x000000000025ebf6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000025eb19
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025ea62
- (void)writeTo:(id)arg1;	// IMP=0x000000000025e9d2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000025e9c5
- (id)dictionaryRepresentation;	// IMP=0x000000000025e8a5
- (id)description;	// IMP=0x000000000025e7f6

@end


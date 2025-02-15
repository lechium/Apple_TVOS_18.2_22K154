//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NWPBBrowseDescriptor, NWPBParameters;

__attribute__((visibility("hidden")))
@interface NWPBStartBrowse : PBCodable
{
    NSString *_clientUUID;	// 8 = 0x8
    NWPBBrowseDescriptor *_descriptor;	// 16 = 0x10
    NWPBParameters *_parameters;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000962430
- (unsigned long long)hash;	// IMP=0x00000000009623c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009622e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000962210
- (void)writeTo:(id)arg1;	// IMP=0x0000000000962190
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000961cd0
- (id)dictionaryRepresentation;	// IMP=0x0000000000961bd0
- (id)description;	// IMP=0x0000000000961b20

@end


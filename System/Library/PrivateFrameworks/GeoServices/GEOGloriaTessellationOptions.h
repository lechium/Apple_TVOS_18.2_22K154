//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOGloriaTessellationOptions : PBCodable
{
    CDStruct_9f2792e4 _zoomLevels;	// 8 = 0x8
    int _type;	// 32 = 0x20
}

- (unsigned long long)hash;	// IMP=0x000000000114bb20
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000114ba8f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000114ba21
- (void)writeTo:(id)arg1;	// IMP=0x000000000114b9ae
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000114b66e
- (id)jsonRepresentation;	// IMP=0x000000000114b664
- (id)dictionaryRepresentation;	// IMP=0x000000000114b560
- (id)description;	// IMP=0x000000000114b4b1
- (void)dealloc;	// IMP=0x000000000114b395

@end


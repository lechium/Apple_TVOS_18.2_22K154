//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLRadioSeed : PBCodable
{
    NSString *_mediaId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004651d
- (unsigned long long)hash;	// IMP=0x0000000000046500
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000046470
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000463f8
- (void)writeTo:(id)arg1;	// IMP=0x00000000000463d4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000463c7
- (id)dictionaryRepresentation;	// IMP=0x000000000004636b
- (id)description;	// IMP=0x00000000000462bc

@end


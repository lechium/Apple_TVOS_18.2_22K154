//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class IDSProtoKeyTransparencyLoggableData, NSData, NSMutableArray, NSString;

@interface IDSProtoKeyTransparencyTrustedService : PBCodable
{
    NSData *_deviceSignature;	// 8 = 0x8
    int _keyIndex;	// 16 = 0x10
    IDSProtoKeyTransparencyLoggableData *_ktLoggableData;	// 24 = 0x18
    NSString *_serviceIdentifier;	// 32 = 0x20
    NSMutableArray *_uris;	// 40 = 0x28
    CDStruct_31fd730f _has;	// 48 = 0x30
}

+ (Class)urisType;	// IMP=0x0020000000372972
- (void).cxx_destruct;	// IMP=0x00200000003739f5
@property(retain, nonatomic) NSData *deviceSignature; // @synthesize deviceSignature=_deviceSignature;
@property(retain, nonatomic) IDSProtoKeyTransparencyLoggableData *ktLoggableData; // @synthesize ktLoggableData=_ktLoggableData;
@property(retain, nonatomic) NSMutableArray *uris; // @synthesize uris=_uris;
@property(retain, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000373770
- (unsigned long long)hash;	// IMP=0x00100000003736c2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000373588
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000037331f
- (void)copyTo:(id)arg1;	// IMP=0x00100000003731d8
- (void)writeTo:(id)arg1;	// IMP=0x0010000000373019
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000037300c
- (id)dictionaryRepresentation;	// IMP=0x0010000000372bbd
- (id)description;	// IMP=0x0010000000372b0e
- (int)StringAsKeyIndex:(id)arg1;	// IMP=0x0010000000372a5a
- (id)keyIndexAsString:(int)arg1;	// IMP=0x0010000000372a11
@property(nonatomic) _Bool hasKeyIndex;
@property(nonatomic) int keyIndex; // @synthesize keyIndex=_keyIndex;
@property(readonly, nonatomic) _Bool hasDeviceSignature;
@property(readonly, nonatomic) _Bool hasKtLoggableData;
- (id)urisAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000372955
- (unsigned long long)urisCount;	// IMP=0x0010000000372938
- (void)addUris:(id)arg1;	// IMP=0x00100000003728ce
- (void)clearUris;	// IMP=0x00100000003728b1
@property(readonly, nonatomic) _Bool hasServiceIdentifier;

@end


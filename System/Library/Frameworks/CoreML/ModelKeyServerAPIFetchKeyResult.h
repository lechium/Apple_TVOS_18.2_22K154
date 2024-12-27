//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ModelKeyServerAPIRawKey, ModelKeyServerAPISignedKey, NSString;

__attribute__((visibility("hidden")))
@interface ModelKeyServerAPIFetchKeyResult : PBCodable
{
    int _key;	// 8 = 0x8
    NSString *_keyId;	// 16 = 0x10
    NSString *_modelName;	// 24 = 0x18
    ModelKeyServerAPIRawKey *_rawKey;	// 32 = 0x20
    ModelKeyServerAPISignedKey *_signedKey;	// 40 = 0x28
    NSString *_teamId;	// 48 = 0x30
    struct {
        unsigned int key:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000fc82c
@property(retain, nonatomic) ModelKeyServerAPIRawKey *rawKey; // @synthesize rawKey=_rawKey;
@property(retain, nonatomic) ModelKeyServerAPISignedKey *signedKey; // @synthesize signedKey=_signedKey;
@property(retain, nonatomic) NSString *teamId; // @synthesize teamId=_teamId;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(retain, nonatomic) NSString *keyId; // @synthesize keyId=_keyId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000fc68c
- (unsigned long long)hash;	// IMP=0x00000000000fc5bf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fc451
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fc31d
- (void)copyTo:(id)arg1;	// IMP=0x00000000000fc23a
- (void)writeTo:(id)arg1;	// IMP=0x00000000000fc186
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000fc179
- (id)dictionaryRepresentation;	// IMP=0x00000000000fbfb8
- (id)description;	// IMP=0x00000000000fbf09
- (void)clearOneofValuesForKey;	// IMP=0x00000000000fbea9
- (int)StringAsKey:(id)arg1;	// IMP=0x00000000000fbe12
- (id)keyAsString:(int)arg1;	// IMP=0x00000000000fbdca
@property(nonatomic) _Bool hasKey;
@property(nonatomic) int key; // @synthesize key=_key;
@property(readonly, nonatomic) _Bool hasRawKey;
@property(readonly, nonatomic) _Bool hasSignedKey;
@property(readonly, nonatomic) _Bool hasTeamId;
@property(readonly, nonatomic) _Bool hasModelName;
@property(readonly, nonatomic) _Bool hasKeyId;

@end


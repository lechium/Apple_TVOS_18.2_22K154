//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface ModelKeyServerAPIRawKey : PBCodable
{
    NSData *_encryptionIv;	// 8 = 0x8
    NSData *_encryptionKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015aced
@property(retain, nonatomic) NSData *encryptionIv; // @synthesize encryptionIv=_encryptionIv;
@property(retain, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000015ac40
- (unsigned long long)hash;	// IMP=0x000000000015abf3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015ab3b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015aa9d
- (void)copyTo:(id)arg1;	// IMP=0x000000000015aa3a
- (void)writeTo:(id)arg1;	// IMP=0x000000000015a9dd
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015a9d0
- (id)dictionaryRepresentation;	// IMP=0x000000000015a94d
- (id)description;	// IMP=0x000000000015a89e
@property(readonly, nonatomic) _Bool hasEncryptionIv;
@property(readonly, nonatomic) _Bool hasEncryptionKey;

@end


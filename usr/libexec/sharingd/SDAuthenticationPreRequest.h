//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface SDAuthenticationPreRequest : PBRequest
{
    NSString *_sessionID;	// 8 = 0x8
    unsigned int _type;	// 16 = 0x10
    unsigned int _version;	// 20 = 0x14
    CDStruct_8a9ac606 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000014b665
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000014b5a0
- (unsigned long long)hash;	// IMP=0x001000000014b538
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000014b45c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000014b3a9
- (void)copyTo:(id)arg1;	// IMP=0x001000000014b329
- (void)writeTo:(id)arg1;	// IMP=0x001000000014b299
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000014b28c
- (id)dictionaryRepresentation;	// IMP=0x001000000014aefc
- (id)description;	// IMP=0x001000000014ae4d
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasVersion;

@end


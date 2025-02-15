//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPIdentifier, CKDPProtectionInfo, CKDPUserAlias, NSString;

@interface CKDPUser : PBCodable
{
    CKDPUserAlias *_alias;	// 8 = 0x8
    NSString *_firstName;	// 16 = 0x10
    CKDPIdentifier *_identifier;	// 24 = 0x18
    NSString *_lastName;	// 32 = 0x20
    CKDPProtectionInfo *_protectionInfo;	// 40 = 0x28
    _Bool _isInNetwork;	// 48 = 0x30
    struct {
        unsigned int isInNetwork:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000001ff680
@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) CKDPUserAlias *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) CKDPIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001ff4a2
- (unsigned long long)hash;	// IMP=0x00000000001ff3db
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ff265
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ff12b
- (void)copyTo:(id)arg1;	// IMP=0x00000000001ff048
- (void)writeTo:(id)arg1;	// IMP=0x00000000001fef6d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001fef60
- (id)dictionaryRepresentation;	// IMP=0x00000000001fea6a
- (id)description;	// IMP=0x00000000001fe9bb
@property(nonatomic) _Bool hasIsInNetwork;
@property(nonatomic) _Bool isInNetwork; // @synthesize isInNetwork=_isInNetwork;
@property(readonly, nonatomic) _Bool hasProtectionInfo;
@property(readonly, nonatomic) _Bool hasLastName;
@property(readonly, nonatomic) _Bool hasFirstName;
@property(readonly, nonatomic) _Bool hasAlias;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end


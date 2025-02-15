//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPWebAuthTokenRetrieveResponse : PBCodable
{
    NSString *_containerScopedUserId;	// 8 = 0x8
    NSString *_token;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001bb91c
@property(retain, nonatomic) NSString *containerScopedUserId; // @synthesize containerScopedUserId=_containerScopedUserId;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001bb86f
- (unsigned long long)hash;	// IMP=0x00000000001bb822
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001bb76a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001bb6cc
- (void)copyTo:(id)arg1;	// IMP=0x00000000001bb669
- (void)writeTo:(id)arg1;	// IMP=0x00000000001bb60c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001bb5ff
- (id)dictionaryRepresentation;	// IMP=0x00000000001bb412
- (id)description;	// IMP=0x00000000001bb363
@property(readonly, nonatomic) _Bool hasContainerScopedUserId;
@property(readonly, nonatomic) _Bool hasToken;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ICPBDGSFinishDelegationResponse, ICPBDGSStartDelegationResponse;

__attribute__((visibility("hidden")))
@interface ICPBDGSResponse : PBCodable
{
    ICPBDGSFinishDelegationResponse *_finishDelegationResponse;	// 8 = 0x8
    unsigned int _requestUniqueID;	// 16 = 0x10
    ICPBDGSStartDelegationResponse *_startDelegationResponse;	// 24 = 0x18
    struct {
        unsigned int requestUniqueID:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000146013
- (unsigned long long)hash;	// IMP=0x0000000000145f94
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000145eb1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000145dee
- (void)writeTo:(id)arg1;	// IMP=0x0000000000145d6b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000145d5e
- (id)dictionaryRepresentation;	// IMP=0x0000000000145c2d
- (id)description;	// IMP=0x0000000000145b7e

@end


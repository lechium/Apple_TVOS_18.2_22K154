//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CSDMessagingScreenShareContext : PBCodable
{
    int _originType;	// 8 = 0x8
    NSString *_screenShareUUID;	// 16 = 0x10
    int _type;	// 24 = 0x18
    struct {
        unsigned int originType:1;
        unsigned int type:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x002000000007111e
@property(retain, nonatomic) NSString *screenShareUUID; // @synthesize screenShareUUID=_screenShareUUID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000071079
- (unsigned long long)hash;	// IMP=0x0010000000071009
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000070f2e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000070e79
- (void)copyTo:(id)arg1;	// IMP=0x0010000000070df9
- (void)writeTo:(id)arg1;	// IMP=0x0010000000070d69
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000070d5c
- (id)dictionaryRepresentation;	// IMP=0x0010000000070994
- (id)description;	// IMP=0x00100000000708e5
- (int)StringAsOriginType:(id)arg1;	// IMP=0x0010000000070880
- (id)originTypeAsString:(int)arg1;	// IMP=0x001000000007082b
@property(nonatomic) _Bool hasOriginType;
@property(nonatomic) int originType; // @synthesize originType=_originType;
- (int)StringAsType:(id)arg1;	// IMP=0x0010000000070713
- (id)typeAsString:(int)arg1;	// IMP=0x00100000000706ca
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasScreenShareUUID;
- (id)incomingScreenShareRequestFromParticipant:(id)arg1 handleEligibilityBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x001000000014f336
- (id)initOutgoingRequestWithScreenSharingRequest:(id)arg1;	// IMP=0x001000000014f1b7

@end


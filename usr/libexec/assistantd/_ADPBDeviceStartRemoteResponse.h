//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface _ADPBDeviceStartRemoteResponse : PBCodable
{
    _Bool _success;	// 8 = 0x8
    struct {
        unsigned int success:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000fabc7
- (unsigned long long)hash;	// IMP=0x00100000000fab9c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000faafa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000faa96
- (void)copyTo:(id)arg1;	// IMP=0x00100000000faa70
- (void)writeTo:(id)arg1;	// IMP=0x00100000000faa44
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000fa88c
- (id)dictionaryRepresentation;	// IMP=0x00100000000fa7f1
- (id)description;	// IMP=0x00100000000fa742
@property(nonatomic) _Bool hasSuccess;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPSignedVersionedBlob;

@interface CKDPAdopterCapabilitiesSaveRequest : PBRequest
{
    CKDPSignedVersionedBlob *_signedSupportedAdopterCapabilities;	// 8 = 0x8
}

+ (id)options;	// IMP=0x00100000002d640a
- (void).cxx_destruct;	// IMP=0x00000000002d6965
@property(retain, nonatomic) CKDPSignedVersionedBlob *signedSupportedAdopterCapabilities; // @synthesize signedSupportedAdopterCapabilities=_signedSupportedAdopterCapabilities;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002d68e7
- (unsigned long long)hash;	// IMP=0x00000000002d68ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d683a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d67c2
- (void)copyTo:(id)arg1;	// IMP=0x00000000002d6798
- (Class)responseClass;	// IMP=0x00000000002d6787
- (unsigned int)requestTypeCode;	// IMP=0x00000000002d677c
- (void)writeTo:(id)arg1;	// IMP=0x00000000002d6758
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002d674b
- (id)dictionaryRepresentation;	// IMP=0x00000000002d651e
- (id)description;	// IMP=0x00000000002d646f
@property(readonly, nonatomic) _Bool hasSignedSupportedAdopterCapabilities;

@end


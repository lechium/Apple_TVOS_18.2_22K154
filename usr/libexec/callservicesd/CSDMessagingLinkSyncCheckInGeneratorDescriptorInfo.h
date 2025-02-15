//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CSDMessagingLinkSyncCheckInGeneratorDescriptorInfo : PBCodable
{
    unsigned long long _generateDescriptorVersionSum;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    struct {
        unsigned int generateDescriptorVersionSum:1;
        unsigned int version:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) unsigned long long generateDescriptorVersionSum; // @synthesize generateDescriptorVersionSum=_generateDescriptorVersionSum;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001c6598
- (unsigned long long)hash;	// IMP=0x00100000001c6554
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001c64a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001c6421
- (void)copyTo:(id)arg1;	// IMP=0x00100000001c63c5
- (void)writeTo:(id)arg1;	// IMP=0x00100000001c6352
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001c6345
- (id)dictionaryRepresentation;	// IMP=0x00100000001c6013
- (id)description;	// IMP=0x00100000001c5f64
@property(nonatomic) _Bool hasGenerateDescriptorVersionSum;
@property(nonatomic) _Bool hasVersion;

@end


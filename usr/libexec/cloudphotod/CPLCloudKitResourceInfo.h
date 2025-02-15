//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CPLCloudKitResourceInfoImageDimensions, NSString;

@interface CPLCloudKitResourceInfo : PBCodable
{
    unsigned long long _fileSize;	// 8 = 0x8
    NSString *_fileUTI;	// 16 = 0x10
    CPLCloudKitResourceInfoImageDimensions *_imageDimensions;	// 24 = 0x18
    NSString *_stableHash;	// 32 = 0x20
    struct {
        unsigned int fileSize:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000cb9f7
@property(retain, nonatomic) NSString *stableHash; // @synthesize stableHash=_stableHash;
@property(retain, nonatomic) NSString *fileUTI; // @synthesize fileUTI=_fileUTI;
@property(retain, nonatomic) CPLCloudKitResourceInfoImageDimensions *imageDimensions; // @synthesize imageDimensions=_imageDimensions;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000cb8bd
- (unsigned long long)hash;	// IMP=0x00100000000cb829
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000cb712
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000cb629
- (void)copyTo:(id)arg1;	// IMP=0x00100000000cb585
- (void)writeTo:(id)arg1;	// IMP=0x00100000000cb4e5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000cb4d8
- (id)dictionaryRepresentation;	// IMP=0x00100000000cb108
- (id)description;	// IMP=0x00100000000cb059
@property(readonly, nonatomic) _Bool hasStableHash;
@property(readonly, nonatomic) _Bool hasFileUTI;
@property(readonly, nonatomic) _Bool hasImageDimensions;
@property(nonatomic) _Bool hasFileSize;

@end


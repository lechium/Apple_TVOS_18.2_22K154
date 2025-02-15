//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface MADProtoAssetOCRAnalysis : PBCodable
{
    double _adjustmentVersion;	// 8 = 0x8
    double _assetAdjustmentTimestamp;	// 16 = 0x10
    int _algorithmVersion;	// 24 = 0x18
    NSString *_assetCloudIdentifier;	// 32 = 0x20
    NSData *_characterRecognitionData;	// 40 = 0x28
    NSData *_machineReadableCodeData;	// 48 = 0x30
}

+ (id)protoFromPhotosAsset:(id)arg1;	// IMP=0x001000000008e9a9
- (void).cxx_destruct;	// IMP=0x000000000002ae06
@property(retain, nonatomic) NSData *machineReadableCodeData; // @synthesize machineReadableCodeData=_machineReadableCodeData;
@property(retain, nonatomic) NSData *characterRecognitionData; // @synthesize characterRecognitionData=_characterRecognitionData;
@property(nonatomic) double adjustmentVersion; // @synthesize adjustmentVersion=_adjustmentVersion;
@property(nonatomic) int algorithmVersion; // @synthesize algorithmVersion=_algorithmVersion;
@property(nonatomic) double assetAdjustmentTimestamp; // @synthesize assetAdjustmentTimestamp=_assetAdjustmentTimestamp;
@property(retain, nonatomic) NSString *assetCloudIdentifier; // @synthesize assetCloudIdentifier=_assetCloudIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002ac7a
- (unsigned long long)hash;	// IMP=0x000000000002aa37
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002a913
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a81a
- (void)copyTo:(id)arg1;	// IMP=0x000000000002a76a
- (void)writeTo:(id)arg1;	// IMP=0x000000000002a6a9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002a69c
- (id)dictionaryRepresentation;	// IMP=0x000000000002a235
- (id)description;	// IMP=0x000000000002a186
@property(readonly, nonatomic) _Bool hasMachineReadableCodeData;
@property(readonly, nonatomic) _Bool hasCharacterRecognitionData;
- (void)persistToPhotosAsset:(id)arg1;	// IMP=0x000000000008ec3e

@end


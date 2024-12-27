//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDAssetZoneKey, NSMutableDictionary, NSMutableOrderedSet;

@interface CKDAssetZone : NSObject
{
    CKDAssetZoneKey *_assetZoneKey;	// 8 = 0x8
    NSMutableOrderedSet *_assetRecords;	// 16 = 0x10
    NSMutableDictionary *_assetRecordsByRecordID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000130749
@property(retain, nonatomic) NSMutableDictionary *assetRecordsByRecordID; // @synthesize assetRecordsByRecordID=_assetRecordsByRecordID;
@property(retain, nonatomic) NSMutableOrderedSet *assetRecords; // @synthesize assetRecords=_assetRecords;
@property(retain, nonatomic) CKDAssetZoneKey *assetZoneKey; // @synthesize assetZoneKey=_assetZoneKey;
- (id)description;	// IMP=0x00000000001306f0
- (id)CKPropertiesDescription;	// IMP=0x0000000000130628
- (void)addMMCSSectionItem:(id)arg1;	// IMP=0x00000000001303b5
- (void)addRereferencedMMCSPackageItem:(id)arg1;	// IMP=0x0000000000130160
- (void)addMMCSItem:(id)arg1;	// IMP=0x000000000012ff0b
- (id)initWithAssetZoneKey:(id)arg1;	// IMP=0x000000000012fe6b

@end


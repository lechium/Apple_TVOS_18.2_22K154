//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PHAsset;

__attribute__((visibility("hidden")))
@interface MADServicePhotosVideoAsset
{
    PHAsset *_photosAsset;	// 8 = 0x8
    NSArray *_resources;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000221ed2
- (id)animatedStickerScore;	// IMP=0x0000000000221eb5
- (id)scoresForLabels;	// IMP=0x0000000000221bc1
- (id)isSensitive;	// IMP=0x0000000000221a65
- (CDStruct_e83c9415)trimTimeRange;	// IMP=0x000000000022187c
- (CDStruct_1b6d18a9)stillTime;	// IMP=0x0000000000221817
- (id)url;	// IMP=0x0000000000220fef
- (id)resources;	// IMP=0x0000000000220f93
- (id)identifier;	// IMP=0x0000000000220f76
- (unsigned long long)assetType;	// IMP=0x0000000000220f6b
- (id)initWithPhotosAsset:(id)arg1 clientBundleID:(id)arg2 clientTeamID:(id)arg3;	// IMP=0x0000000000220ee9

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AXUpdateAssetTaskRestorationState
{
}

+ (id)restoreOrCreateStateFromStore:(id)arg1 assetType:(id)arg2;	// IMP=0x004000000000d93f
- (_Bool)hasCompletedDownloadingAssets;	// IMP=0x004000000000daaa
- (_Bool)hasCompletedPurgingAssets;	// IMP=0x001000000000da73
- (_Bool)hasCompletedRefreshingAssets;	// IMP=0x001000000000da3c
- (_Bool)isDownloadingAssets;	// IMP=0x001000000000d9f1
- (_Bool)isPurgingAssets;	// IMP=0x001000000000d9a6
- (_Bool)isRefreshingAssets;	// IMP=0x001000000000d95b

@end


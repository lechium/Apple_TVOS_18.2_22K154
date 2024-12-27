//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _LTDMAAssetService : NSObject
{
}

+ (void)purgeAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002623d
+ (void)downloadAsset:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000256cf
+ (void)downloadCatalogForAssetType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000252f6
+ (id)maDownloadOptionsFrom:(unsigned long long)arg1;	// IMP=0x0010000000025285
+ (id)_errorFromDownloadResult:(long long)arg1;	// IMP=0x001000000002506f
+ (id)queryAssetType:(id)arg1 filter:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000024cc7
+ (void)queryAssetType:(id)arg1 filter:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000246be
+ (long long)_returnTypeForFilter:(unsigned long long)arg1;	// IMP=0x00100000000246a4
+ (id)_errorFromQueryResult:(long long)arg1;	// IMP=0x0010000000024514
+ (_Bool)isInvalidPallasCatalog:(id)arg1;	// IMP=0x001000000002448f
+ (id)_queue;	// IMP=0x0010000000024438

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DCAssetFetcher : NSObject
{
}

+ (id)sharedFetcher;	// IMP=0x00400000000014b4
- (id)_validateAsset:(id)arg1 error:(id *)arg2;	// IMP=0x0040000000001fe6
- (void)_handleSuccessForQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001d33
- (void)_handleMissingMetadataWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000199c
- (id)_assetQuery;	// IMP=0x001000000000196c
- (void)_queryMetadataWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001792
- (void)_fetchAssetWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000016e1
- (void)initiateMetadataFetchIgnoringCachesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000015aa
- (void)fetchPublicKeyAssetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001539

@end


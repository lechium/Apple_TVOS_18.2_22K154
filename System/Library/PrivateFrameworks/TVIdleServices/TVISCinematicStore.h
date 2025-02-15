//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVISStore.h"

__attribute__((visibility("hidden")))
@interface TVISCinematicStore : TVISStore
{
}

+ (id)_fetchRequestForAssetsNotMatchingIdentifiers:(id)arg1;	// IMP=0x0080000000042c90
+ (id)_fetchRequestForAssetIdentifiersMatchingIdentifiers:(id)arg1;	// IMP=0x0080000000042b80
+ (id)_fetchRequestForAllAssetsInPreferredOrder;	// IMP=0x0080000000042a70
+ (id)_fetchRequestForAllAssetsInSequenceOrder;	// IMP=0x0080000000042960
- (id)_queryAllAssetsWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000423f0
- (void)migrateIfNeededWithPersistentContainer:(id)arg1;	// IMP=0x0000000000041f70
- (id)makePersistentContainer;	// IMP=0x0000000000041e70
- (id)storeLog;	// IMP=0x0000000000041e50
- (id)queryNextDownloadableAssets:(unsigned long long)arg1 excluding:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000041b20
- (id)queryAllAssetsWithError:(id *)arg1;	// IMP=0x0000000000041a90
- (void)updatePlayOrderWithIndexes:(id)arg1 costMatrix:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000040c20
- (void)updateWithManifest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003fdb0

@end


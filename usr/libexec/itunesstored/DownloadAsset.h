//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSMemoryEntity.h>

@interface DownloadAsset : SSMemoryEntity
{
}

+ (Class)databaseEntityClass;	// IMP=0x002000000013b6a3
- (id)description;	// IMP=0x001000000013b6e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000013b6b4
- (id)initWithURLRequestProperties:(id)arg1;	// IMP=0x001000000013b625
- (id)initWithExternalManifestDictionary:(id)arg1 validateVariants:(_Bool)arg2;	// IMP=0x001000000013af7b
- (id)initWithClientXPCAsset:(id)arg1;	// IMP=0x001000000013adca
- (id)copyJobAsset;	// IMP=0x00100000000ebfeb

@end


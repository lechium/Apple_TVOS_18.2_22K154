//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface PFFairPlayMigrationController : NSObject
{
    MISSING_TYPE *metadataLoader;	// 8 = 0x8
    MISSING_TYPE *secureKeyRequestStorage;	// 16 = 0x10
    MISSING_TYPE *invalidationManager;	// 24 = 0x18
    MISSING_TYPE *fairPlayEpisodeDataFetcher;	// 32 = 0x20
    MISSING_TYPE *legacyDownloadRenewalManager;	// 72 = 0x48
    MISSING_TYPE *internalQueue;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x00400000002f6ee0
- (void).cxx_destruct;	// IMP=0x00000000002feed0
- (void)rollbackIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002f8290
- (void)migrateIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002f75d0
- (id)init;	// IMP=0x00000000002f6f10

@end


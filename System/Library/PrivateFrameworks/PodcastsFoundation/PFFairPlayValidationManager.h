//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface PFFairPlayValidationManager : NSObject
{
    MISSING_TYPE *keyLoader;	// 8 = 0x8
    MISSING_TYPE *episodeFetcher;	// 16 = 0x10
    MISSING_TYPE *episodeRemovalManager;	// 56 = 0x38
    MISSING_TYPE *internalQueue;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_logPrefix;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000131fd0
- (id)init;	// IMP=0x0000000000131f60
- (void)validateDownloadedEpisodesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000131d00
- (id)initWithEpisodeRemovalManager:(id)arg1;	// IMP=0x000000000012f730

@end


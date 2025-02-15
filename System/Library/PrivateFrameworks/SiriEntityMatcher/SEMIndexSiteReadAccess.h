//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SEMIndexSiteCache, SEMSettings;

@interface SEMIndexSiteReadAccess : NSObject
{
    SEMIndexSiteCache *_indexSiteCache;	// 8 = 0x8
    SEMSettings *_settings;	// 16 = 0x10
}

+ (_Bool)_isFileNotFoundError:(id)arg1;	// IMP=0x00100000000363df
+ (id)defaultSharedInstance;	// IMP=0x00100000000360f9
- (void).cxx_destruct;	// IMP=0x0000000000036d3e
- (id)ftsDatabaseReadAccessWithIndexSiteType:(unsigned char)arg1;	// IMP=0x0000000000036922
- (id)accessDescription;	// IMP=0x0000000000036915
- (_Bool)setEntityPool:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003690d
- (_Bool)supportsIndexSiteType:(unsigned char)arg1;	// IMP=0x00000000000368ff
- (id)skitReadAccessWithIndexSiteType:(unsigned char)arg1;	// IMP=0x000000000003649b
- (void)reset;	// IMP=0x000000000003628d
- (id)initWithIndexSiteCache:(id)arg1 settings:(id)arg2;	// IMP=0x0000000000036222

@end


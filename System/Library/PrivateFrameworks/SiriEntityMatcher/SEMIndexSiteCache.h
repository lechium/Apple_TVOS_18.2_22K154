//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, SEMIndexSite;
@protocol OS_dispatch_queue;

@interface SEMIndexSiteCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    SEMIndexSite *_defaultIndexSite;	// 16 = 0x10
    _Bool _readOnly;	// 24 = 0x18
    NSURL *_managerDirectory;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000311c9
@property(readonly, nonatomic) NSURL *managerDirectory; // @synthesize managerDirectory=_managerDirectory;
- (void)indexSiteAvailableWithType:(unsigned char)arg1;	// IMP=0x0000000000030fd1
- (void)indexSiteUnavailableWithType:(unsigned char)arg1;	// IMP=0x0000000000030e9f
- (void)indexSiteUnavailableSoonWithType:(unsigned char)arg1;	// IMP=0x0000000000030c3d
- (void)enumerateIndexSitesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000309f0
- (void)clear;	// IMP=0x000000000003098a
- (id)_loadIndexSiteDirectoryWithName:(id)arg1 parentDirectory:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000030715
- (void)_evictCachedUserVaultIndexSite:(id)arg1;	// IMP=0x0000000000030707
- (void)_cachedUserVaultIndexSiteForCurrentPersonaIfExists:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030701
- (id)openUserVaultTransaction:(id *)arg1 forPersonaIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000306b4
- (id)cachedUserVaultIndexSiteForCurrentPersona:(id *)arg1;	// IMP=0x0000000000030667
- (id)cachedDefaultIndexSite:(id *)arg1;	// IMP=0x00000000000303fb
- (id)indexSiteWithType:(unsigned char)arg1 error:(id *)arg2;	// IMP=0x0000000000030249
- (id)initWithManagerDirectory:(id)arg1 readOnly:(_Bool)arg2;	// IMP=0x000000000003014b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


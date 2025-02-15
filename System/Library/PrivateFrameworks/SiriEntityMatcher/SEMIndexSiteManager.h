//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, SEMDictionaryLog, SEMIndexSiteCache, SEMSettings;
@protocol CCSetEnumerator, OS_dispatch_queue;

@interface SEMIndexSiteManager : NSObject
{
    NSURL *_managerDirectory;	// 8 = 0x8
    NSObject<CCSetEnumerator> *_setEnumerator;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    SEMDictionaryLog *_managerInfo;	// 32 = 0x20
    SEMIndexSiteCache *_indexSiteCache;	// 40 = 0x28
    SEMSettings *_settings;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003583b
- (_Bool)_performAnyDeferredOperationsAtIndexSiteType:(unsigned char)arg1 shouldDefer:(CDUnknownBlockType)arg2;	// IMP=0x00000000000356bc
- (_Bool)_rebuildAllStateWithSetEnumerator:(id)arg1;	// IMP=0x0000000000035636
- (_Bool)_performMaintenance:(CDUnknownBlockType)arg1;	// IMP=0x000000000003524e
- (_Bool)_didRefreshSettings:(CDUnknownBlockType)arg1 skipMaintenance:(_Bool *)arg2;	// IMP=0x000000000003480b
- (_Bool)_checkLastDateOfOperation:(unsigned char)arg1 isOverdue:(_Bool *)arg2 atSite:(id)arg3;	// IMP=0x0000000000034430
- (unsigned char)_checkForDeferredOperationAtIndexSite:(id)arg1;	// IMP=0x000000000003436b
- (_Bool)_performAnyDeferredOperationsAtIndexSite:(id)arg1 outOperationPerformed:(unsigned char *)arg2 shouldDefer:(CDUnknownBlockType)arg3;	// IMP=0x00000000000341b4
- (_Bool)_performOperation:(unsigned char)arg1 atIndexSite:(id)arg2 withDate:(id)arg3 shouldDefer:(CDUnknownBlockType)arg4;	// IMP=0x0000000000033efe
- (void)_recordOperationTriggered:(unsigned char)arg1 withDate:(id)arg2;	// IMP=0x0000000000033dd0
- (_Bool)_performOperation:(unsigned char)arg1 atIndexSite:(id)arg2 shouldDefer:(CDUnknownBlockType)arg3;	// IMP=0x0000000000033c5d
- (_Bool)_performOperationAtAllIndexSites:(unsigned char)arg1 shouldDefer:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033891
- (id)_discoverAllSetsForIndexSiteType:(unsigned char)arg1;	// IMP=0x0000000000032fe3
- (_Bool)_updateIndexSiteType:(unsigned char)arg1 updatedSets:(id)arg2 shouldDefer:(CDUnknownBlockType)arg3;	// IMP=0x0000000000032d4f
- (_Bool)_updateContainsSetsInUserVault:(id)arg1;	// IMP=0x0000000000032c02
- (_Bool)_didHandleUpdatedSets:(id)arg1 shouldDefer:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032976
- (_Bool)_enumerateAllIndexSiteWritersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000323eb
- (id)_cachedWriterForIndexSiteType:(unsigned char)arg1;	// IMP=0x0000000000032011
- (_Bool)_resetManagerDirectory;	// IMP=0x0000000000031d09
- (void)_loadOrCreateManagerInfo;	// IMP=0x0000000000031c01
- (_Bool)_loadManagerDirectoryAndAvailableIndexSites;	// IMP=0x00000000000319ef
- (_Bool)handleIndexSiteAvailableWithType:(unsigned char)arg1 shouldDefer:(CDUnknownBlockType)arg2;	// IMP=0x00000000000318e1
- (void)handleSysdiagnoseStarted;	// IMP=0x0000000000031879
- (_Bool)rebuildAllStateWithSetEnumerator:(id)arg1;	// IMP=0x0000000000031773
- (_Bool)clearAllState;	// IMP=0x0000000000031699
- (_Bool)performMaintenance:(CDUnknownBlockType)arg1;	// IMP=0x0000000000031551
- (_Bool)handleSettingsChange;	// IMP=0x0000000000031493
- (_Bool)handleUpdatedSets:(id)arg1;	// IMP=0x000000000003138b
- (id)initWithManagerDirectory:(id)arg1 indexSiteCache:(id)arg2 setEnumerator:(id)arg3 settings:(id)arg4;	// IMP=0x00000000000311fc

@end


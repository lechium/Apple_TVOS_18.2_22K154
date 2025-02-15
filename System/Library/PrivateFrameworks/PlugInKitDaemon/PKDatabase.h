//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString, PKDAnnotationStore, PKDPersonaCache;
@protocol PKApplicationWorkspaceProxy, PKDExternalProviders, PKDatabaseDelegate;

@interface PKDatabase : NSObject
{
    struct os_unfair_lock_s _cacheLock;	// 8 = 0x8
    id <PKApplicationWorkspaceProxy> _workspace;	// 16 = 0x10
    PKDAnnotationStore *_annotations;	// 24 = 0x18
    NSCache *_cache;	// 32 = 0x20
    unsigned long long _cacheHits;	// 40 = 0x28
    unsigned long long _cacheMisses;	// 48 = 0x30
    id _regionObserver;	// 56 = 0x38
    PKDPersonaCache *_personaCache;	// 64 = 0x40
    id <PKDatabaseDelegate> _delegate;	// 72 = 0x48
    id <PKDExternalProviders> _external;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000005300
@property(readonly, nonatomic) id <PKDExternalProviders> external; // @synthesize external=_external;
@property __weak id <PKDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKDPersonaCache *personaCache; // @synthesize personaCache=_personaCache;
@property(retain, nonatomic) id regionObserver; // @synthesize regionObserver=_regionObserver;
@property(nonatomic) unsigned long long cacheMisses; // @synthesize cacheMisses=_cacheMisses;
@property(nonatomic) unsigned long long cacheHits; // @synthesize cacheHits=_cacheHits;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(nonatomic) struct os_unfair_lock_s cacheLock; // @synthesize cacheLock=_cacheLock;
@property(retain, nonatomic) PKDAnnotationStore *annotations; // @synthesize annotations=_annotations;
@property(retain, nonatomic) id <PKApplicationWorkspaceProxy> workspace; // @synthesize workspace=_workspace;
- (void)pluginsDidUninstall:(id)arg1;	// IMP=0x00000000000049f0
- (void)pluginsDidInstall:(id)arg1;	// IMP=0x0000000000004630
- (void)_locked_autoElect:(id)arg1;	// IMP=0x00000000000044f0
- (void)notifyAnnotationChange;	// IMP=0x0000000000004480
- (id)setAnnotation:(id)arg1 forPlugIn:(id)arg2;	// IMP=0x00000000000043e0
- (id)annotationForIdentifier:(id)arg1;	// IMP=0x0000000000004340
- (id)annotationForPlugIn:(id)arg1;	// IMP=0x00000000000042a0
- (id)removePlugIn:(id)arg1;	// IMP=0x0000000000004120
- (id)addPlugIn:(id)arg1;	// IMP=0x0000000000003fa0
- (id)plugInsWithExtensionPointName:(id)arg1 platforms:(id)arg2;	// IMP=0x0000000000003c40
- (id)plugInsWithinApplication:(id)arg1;	// IMP=0x0000000000003940
- (id)findPlugInAtPath:(id)arg1;	// IMP=0x0000000000003810
- (id)findPlugInWithUUID:(id)arg1 discoveryUUID:(id)arg2 extensionPointCache:(id)arg3;	// IMP=0x0000000000003650
- (id)findPlugInWithUUID:(id)arg1;	// IMP=0x00000000000035c0
- (id)findPlugInsForQuery:(id)arg1 discoveryInstanceUUID:(id)arg2 allVersions:(_Bool)arg3;	// IMP=0x0000000000002c90
- (id)createPlugInForProxy:(id)arg1 uuid:(id)arg2 discoveryInstanceUUID:(id)arg3 extensionPointCache:(id)arg4;	// IMP=0x0000000000002a50
- (id)plugInForExtensionRecord:(id)arg1 discoveryInstanceUUID:(id)arg2 extensionPointCache:(id)arg3;	// IMP=0x00000000000028d0
- (id)plugInForProxy:(id)arg1 discoveryInstanceUUID:(id)arg2 extensionPointCache:(id)arg3;	// IMP=0x0000000000002780
- (id)cachedPlugInWithUUID:(id)arg1;	// IMP=0x0000000000002710
- (id)_locked_cachedPlugInWithUUID:(id)arg1;	// IMP=0x00000000000025e0
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x00000000000025d0
- (id)initWithDatabase:(id)arg1 externalProviders:(id)arg2;	// IMP=0x00000000000021d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


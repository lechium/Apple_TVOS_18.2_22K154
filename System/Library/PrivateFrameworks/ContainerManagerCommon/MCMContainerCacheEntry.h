//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMContainerPath, MCMFSNode, MCMUserIdentityCache, NSNumber, NSString, NSUUID;
@protocol MCMContainerCacheEntry_Internal, MCMContainerCacheUpdatable, MCMFileManagerResolvesPaths, MCMMetadata;

__attribute__((visibility("hidden")))
@interface MCMContainerCacheEntry : NSObject
{
    struct os_unfair_lock_s _metadataLock;	// 8 = 0x8
    _Bool _corrupt;	// 12 = 0xc
    _Bool _ignore;	// 13 = 0xd
    NSString *_identifier;	// 16 = 0x10
    MCMContainerPath *_containerPath;	// 24 = 0x18
    id <MCMMetadata> _metadata;	// 32 = 0x20
    NSNumber *_schemaVersion;	// 40 = 0x28
    NSUUID *_uuid;	// 48 = 0x30
    id <MCMContainerCacheEntry_Internal> _next;	// 56 = 0x38
    id <MCMContainerCacheUpdatable> _cache;	// 64 = 0x40
    MCMFSNode *_fsNode;	// 72 = 0x48
    MCMUserIdentityCache *_userIdentityCache;	// 80 = 0x50
    id <MCMFileManagerResolvesPaths> _fmForNode;	// 88 = 0x58
}

+ (id)_fileHandleForURL:(id)arg1 writeable:(_Bool)arg2;	// IMP=0x00100000000e55cf
+ (void)clearAttributesForFileHandle:(id)arg1;	// IMP=0x00100000000e5342
+ (void)clearAttributesForURL:(id)arg1;	// IMP=0x00100000000e52ce
+ (void)setBirthtime:(struct timespec)arg1 forFileHandle:(id)arg2;	// IMP=0x00100000000e5189
+ (void)setBirthtime:(struct timespec)arg1 forURL:(id)arg2;	// IMP=0x00100000000e50fe
+ (void)setUUID:(id)arg1 forFileHandle:(id)arg2;	// IMP=0x00100000000e5019
+ (void)setUUID:(id)arg1 forURL:(id)arg2;	// IMP=0x00100000000e4f74
+ (void)setSchemaVersion:(id)arg1 forFileHandle:(id)arg2;	// IMP=0x00100000000e4e8f
+ (void)setSchemaVersion:(id)arg1 forURL:(id)arg2;	// IMP=0x00100000000e4dea
+ (void)setIdentifier:(id)arg1 forFileHandle:(id)arg2;	// IMP=0x00100000000e4d05
+ (void)setIdentifier:(id)arg1 forURL:(id)arg2;	// IMP=0x00100000000e4c60
+ (struct timespec)birthtimeForFileHandle:(id)arg1;	// IMP=0x00100000000e4a6c
+ (struct timespec)birthtimeForURL:(id)arg1;	// IMP=0x00100000000e49ee
+ (id)UUIDForFileHandle:(id)arg1;	// IMP=0x00100000000e4904
+ (id)UUIDForURL:(id)arg1;	// IMP=0x00100000000e4880
+ (id)schemaVersionForFileHandle:(id)arg1;	// IMP=0x00100000000e4796
+ (id)schemaVersionForURL:(id)arg1;	// IMP=0x00100000000e4712
+ (id)identifierForFileHandle:(id)arg1;	// IMP=0x00100000000e4623
+ (id)identifierForURL:(id)arg1;	// IMP=0x00100000000e459f
- (void).cxx_destruct;	// IMP=0x00000000000e4207
@property(readonly, nonatomic) id <MCMFileManagerResolvesPaths> fmForNode; // @synthesize fmForNode=_fmForNode;
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
@property(retain, nonatomic) MCMFSNode *fsNode; // @synthesize fsNode=_fsNode;
@property(nonatomic) __weak id <MCMContainerCacheUpdatable> cache; // @synthesize cache=_cache;
@property(retain, nonatomic) id <MCMContainerCacheEntry_Internal> next; // @synthesize next=_next;
@property(nonatomic) _Bool ignore; // @synthesize ignore=_ignore;
@property(nonatomic) _Bool corrupt; // @synthesize corrupt=_corrupt;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSNumber *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(retain, nonatomic) MCMContainerPath *containerPath; // @synthesize containerPath=_containerPath;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_metadataFromContainerPath:(id)arg1 identifier:(id)arg2 uuid:(id)arg3 schemaVersion:(id)arg4 userIdentityCache:(id)arg5;	// IMP=0x00000000000e3d31
- (id)_findUserManagedAssetsDirectoryAtContainerRootURL:(id)arg1;	// IMP=0x00000000000e38cb
- (id)_identifierForContainerPath:(id)arg1;	// IMP=0x00000000000e3771
- (id)_fabricateMetadataForContainerPath:(id)arg1 identifier:(id)arg2 uuid:(id)arg3 schemaVersion:(id)arg4 userIdentityCache:(id)arg5;	// IMP=0x00000000000e2ee4
- (id)_readMetadataForIdentifier:(id)arg1 containerPath:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e2d24
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e2c1b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e2b8b
- (_Bool)isEqualToContainerCacheEntry:(id)arg1;	// IMP=0x00000000000e26fe
@property(readonly) unsigned long long hash;
- (id)fullDescription;	// IMP=0x00000000000e244f
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <MCMMetadata> metadata; // @synthesize metadata=_metadata;
- (struct timespec)birthtimeWithError:(id *)arg1;	// IMP=0x00000000000e2089
- (id)fsNodeWithError:(id *)arg1;	// IMP=0x00000000000e1f54
- (id)containerIdentity;	// IMP=0x00000000000e1cf0
- (id)metadataMinimal;	// IMP=0x00000000000e1bec
- (_Bool)verify;	// IMP=0x00000000000e0e59
- (id)metadataWithError:(id *)arg1;	// IMP=0x00000000000e0bb0
- (id)initFromContainerPath:(id)arg1 identifier:(id)arg2 uuid:(id)arg3 schemaVersion:(id)arg4 userIdentityCache:(id)arg5;	// IMP=0x00000000000e0ae2
- (id)initWithIdentifier:(id)arg1 containerPath:(id)arg2 schemaVersion:(id)arg3 uuid:(id)arg4 metadata:(id)arg5 userIdentityCache:(id)arg6;	// IMP=0x00000000000e092d
- (id)initWithMetadata:(id)arg1 userIdentityCache:(id)arg2;	// IMP=0x00000000000e07bb
- (void)setXattrsWithFileHandle:(id)arg1;	// IMP=0x00000000000e4481
- (void)setXattrs;	// IMP=0x00000000000e43af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end


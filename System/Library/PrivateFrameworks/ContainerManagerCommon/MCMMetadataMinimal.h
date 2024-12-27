//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMConcreteContainerIdentityForLibsystem, MCMContainerPath, MCMUserIdentity, MCMUserIdentityCache, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MCMMetadataMinimal : NSObject
{
    MCMContainerPath *_containerPath;	// 8 = 0x8
    NSNumber *_schemaVersion;	// 16 = 0x10
    MCMConcreteContainerIdentityForLibsystem *_containerIdentity;	// 24 = 0x18
    MCMUserIdentityCache *_userIdentityCache;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004c961
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
@property(readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
@property(readonly, nonatomic) NSNumber *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(readonly, nonatomic) MCMContainerPath *containerPath; // @synthesize containerPath=_containerPath;
- (_Bool)_persisted;	// IMP=0x000000000004c864
- (void)_clearPersistedStatus;	// IMP=0x000000000004c83d
- (_Bool)_initFromMetadataInDictionary:(id)arg1 containerPath:(id)arg2 userIdentity:(id)arg3 containerClass:(unsigned long long)arg4 fsNode:(id)arg5 fileURL:(id)arg6 userIdentityCache:(id)arg7 error:(id *)arg8;	// IMP=0x000000000004b1c6
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *shortDescription;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004afd9
- (id)metadataByChangingContainerIdentity:(id)arg1;	// IMP=0x000000000004af37
- (id)metadataByChangingSchemaVersion:(id)arg1;	// IMP=0x000000000004ae95
- (id)metadataByChangingUUID:(id)arg1;	// IMP=0x000000000004adaf
- (id)metadataByChangingContainerPath:(id)arg1;	// IMP=0x000000000004acc5
- (id)metadataBySettingTransient:(_Bool)arg1;	// IMP=0x000000000004abf7
@property(readonly, nonatomic) _Bool existed;
@property(readonly, nonatomic) unsigned int platform;
@property(readonly, nonatomic) MCMUserIdentity *userIdentity;
@property(readonly, nonatomic) _Bool transient;
@property(readonly, nonatomic) unsigned long long containerClass;
@property(readonly, nonatomic) NSUUID *uuid;
@property(readonly, nonatomic) NSString *identifier;
- (struct container_object_s *)createLibsystemContainerWithError:(id *)arg1;	// IMP=0x000000000004a959
- (id)initByReadingAndValidatingMetadataAtFileURL:(id)arg1 containerPath:(id)arg2 userIdentity:(id)arg3 containerClass:(unsigned long long)arg4 userIdentityCache:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000049d0f
- (id)initByReadingAndValidatingMetadataAtContainerPath:(id)arg1 userIdentity:(id)arg2 containerClass:(unsigned long long)arg3 userIdentityCache:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000049c35
- (id)initWithContainerIdentity:(id)arg1 containerPath:(id)arg2 schemaVersion:(id)arg3 userIdentityCache:(id)arg4;	// IMP=0x0000000000049b2d

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


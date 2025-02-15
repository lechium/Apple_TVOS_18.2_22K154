//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MIMCMContainer : NSObject
{
    _Bool _isTransient;	// 8 = 0x8
    _Bool _isNew;	// 9 = 0x9
    NSURL *_containerURL;	// 16 = 0x10
    unsigned long long _containerClass;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSString *_personaUniqueString;	// 40 = 0x28
    struct container_object_s *_mcmContainer;	// 48 = 0x30
}

+ (id)defaultDirectoriesForContainerType:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00600000000263e5
+ (_Bool)deleteContainers:(id)arg1 waitForDeletion:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0060000000025ff3
+ (id)transientContainerForIdentifier:(id)arg1 contentClass:(unsigned long long)arg2 forPersona:(id)arg3 create:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0060000000025f51
+ (id)containerForIdentifier:(id)arg1 contentClass:(unsigned long long)arg2 forPersona:(id)arg3 create:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0060000000025eb2
+ (id)containersForBundleIdentifier:(id)arg1 contentClass:(unsigned long long)arg2 forPersona:(id)arg3 create:(_Bool)arg4 fetchTransient:(_Bool)arg5 error:(id *)arg6;	// IMP=0x0060000000025daa
+ (id)containersForGroupIdentifier:(id)arg1 forPersona:(id)arg2 create:(_Bool)arg3 fetchTransient:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0060000000025cae
+ (id)containersForContentClass:(unsigned long long)arg1 forPersona:(id)arg2 fetchTransient:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0060000000025c2f
+ (id)_containerForIdentifier:(id)arg1 contentClass:(unsigned long long)arg2 forPersona:(id)arg3 transient:(_Bool)arg4 create:(_Bool)arg5 error:(id *)arg6;	// IMP=0x0060000000025829
+ (id)_allContainersForIdentifiers:(id)arg1 groupIdentifiers:(id)arg2 contentClass:(unsigned long long)arg3 forPersona:(id)arg4 transient:(_Bool)arg5 create:(_Bool)arg6 error:(id *)arg7;	// IMP=0x006000000002562d
+ (id)enumerateContainersWithClass:(unsigned long long)arg1 forPersona:(id)arg2 isTransient:(_Bool)arg3 identifiers:(id)arg4 groupIdentifiers:(id)arg5 usingBlock:(CDUnknownBlockType)arg6;	// IMP=0x0060000000025561
+ (id)_enumeratorWithContainerClass:(unsigned long long)arg1 forPersona:(id)arg2 isTransient:(_Bool)arg3 identifiers:(id)arg4 groupIdentifiers:(id)arg5 create:(_Bool)arg6 usingBlock:(CDUnknownBlockType)arg7;	// IMP=0x0060000000024d04
- (void).cxx_destruct;	// IMP=0x0000000000026593
@property(readonly, nonatomic) struct container_object_s *mcmContainer; // @synthesize mcmContainer=_mcmContainer;
@property(readonly, nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(nonatomic) _Bool isTransient; // @synthesize isTransient=_isTransient;
@property(readonly, nonatomic) NSString *personaUniqueString; // @synthesize personaUniqueString=_personaUniqueString;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long containerClass; // @synthesize containerClass=_containerClass;
@property(readonly, nonatomic) NSURL *containerURL; // @synthesize containerURL=_containerURL;
- (_Bool)recreateDefaultStructureWithError:(id *)arg1;	// IMP=0x0000000000024c5e
- (id)infoValueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000024b01
- (_Bool)setInfoValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000249db
- (_Bool)replaceExistingContainer:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000247c9
- (_Bool)purgeContentWithError:(id *)arg1;	// IMP=0x00000000000246f7
@property(readonly, nonatomic) unsigned long long diskUsage;
- (_Bool)regenerateDirectoryUUIDWithError:(id *)arg1;	// IMP=0x00000000000244e0
- (_Bool)reclaimDiskSpaceWithError:(id *)arg1;	// IMP=0x0000000000024365
- (_Bool)_refreshContainerMetadataWithError:(id *)arg1;	// IMP=0x000000000002419b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000240f4
- (id)description;	// IMP=0x0000000000023fa4
- (id)serializedContainerRepresentation;	// IMP=0x0000000000023f3d
- (void)dealloc;	// IMP=0x0000000000023f03
- (id)initWithSerializedContainer:(id)arg1 matchingWithOptions:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000239a8
- (id)initWithContainer:(struct container_object_s *)arg1 error:(id *)arg2;	// IMP=0x000000000002392a
- (_Bool)_doInitWithContainer:(struct container_object_s *)arg1 error:(id *)arg2;	// IMP=0x0000000000023734

@end


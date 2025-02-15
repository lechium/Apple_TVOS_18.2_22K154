//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

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

+ (id)defaultDirectoriesForContainerType:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0040000000004db1
+ (_Bool)deleteContainers:(id)arg1 waitForDeletion:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000000049bf
+ (id)transientContainerForIdentifier:(id)arg1 contentClass:(unsigned long long)arg2 forPersona:(id)arg3 create:(_Bool)arg4 error:(id *)arg5;	// IMP=0x001000000000491d
+ (id)containerForIdentifier:(id)arg1 contentClass:(unsigned long long)arg2 forPersona:(id)arg3 create:(_Bool)arg4 error:(id *)arg5;	// IMP=0x001000000000487e
+ (id)containersForBundleIdentifier:(id)arg1 contentClass:(unsigned long long)arg2 forPersona:(id)arg3 create:(_Bool)arg4 fetchTransient:(_Bool)arg5 error:(id *)arg6;	// IMP=0x0010000000004776
+ (id)containersForGroupIdentifier:(id)arg1 forPersona:(id)arg2 create:(_Bool)arg3 fetchTransient:(_Bool)arg4 error:(id *)arg5;	// IMP=0x001000000000467a
+ (id)containersForContentClass:(unsigned long long)arg1 forPersona:(id)arg2 fetchTransient:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000045fb
+ (id)_containerForIdentifier:(id)arg1 contentClass:(unsigned long long)arg2 forPersona:(id)arg3 transient:(_Bool)arg4 create:(_Bool)arg5 error:(id *)arg6;	// IMP=0x00100000000041f5
+ (id)_allContainersForIdentifiers:(id)arg1 groupIdentifiers:(id)arg2 contentClass:(unsigned long long)arg3 forPersona:(id)arg4 transient:(_Bool)arg5 create:(_Bool)arg6 error:(id *)arg7;	// IMP=0x0010000000003fe6
+ (id)enumerateContainersWithClass:(unsigned long long)arg1 forPersona:(id)arg2 isTransient:(_Bool)arg3 identifiers:(id)arg4 groupIdentifiers:(id)arg5 usingBlock:(CDUnknownBlockType)arg6;	// IMP=0x0010000000003f1a
+ (id)_enumeratorWithContainerClass:(unsigned long long)arg1 forPersona:(id)arg2 isTransient:(_Bool)arg3 identifiers:(id)arg4 groupIdentifiers:(id)arg5 create:(_Bool)arg6 usingBlock:(CDUnknownBlockType)arg7;	// IMP=0x0010000000003696
- (void).cxx_destruct;	// IMP=0x0020000000004f5f
@property(readonly, nonatomic) struct container_object_s *mcmContainer; // @synthesize mcmContainer=_mcmContainer;
@property(readonly, nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(nonatomic) _Bool isTransient; // @synthesize isTransient=_isTransient;
@property(readonly, nonatomic) NSString *personaUniqueString; // @synthesize personaUniqueString=_personaUniqueString;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long containerClass; // @synthesize containerClass=_containerClass;
@property(readonly, nonatomic) NSURL *containerURL; // @synthesize containerURL=_containerURL;
- (_Bool)recreateDefaultStructureWithError:(id *)arg1;	// IMP=0x00100000000035f0
- (id)infoValueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000003493
- (_Bool)setInfoValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000336d
- (_Bool)replaceExistingContainer:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000315b
- (_Bool)purgeContentWithError:(id *)arg1;	// IMP=0x0010000000003089
@property(readonly, nonatomic) unsigned long long diskUsage;
- (_Bool)regenerateDirectoryUUIDWithError:(id *)arg1;	// IMP=0x0010000000002e72
- (_Bool)reclaimDiskSpaceWithError:(id *)arg1;	// IMP=0x0010000000002cf7
- (_Bool)_refreshContainerMetadataWithError:(id *)arg1;	// IMP=0x0010000000002b2d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000002a86
- (id)description;	// IMP=0x0010000000002936
- (id)serializedContainerRepresentation;	// IMP=0x00100000000028cf
- (void)dealloc;	// IMP=0x0010000000002895
- (id)initWithSerializedContainer:(id)arg1 matchingWithOptions:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000000233a
- (id)initWithContainer:(struct container_object_s *)arg1 error:(id *)arg2;	// IMP=0x00100000000022bc
- (_Bool)_doInitWithContainer:(struct container_object_s *)arg1 error:(id *)arg2;	// IMP=0x00100000000020c6

@end


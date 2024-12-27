//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDEntityCodingDescription, NSArray, NSDictionary, NSManagedObjectModel, NSOrderedSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDManagedObjectCodingModel : NSObject
{
    NSManagedObjectModel *_model;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    HMDEntityCodingDescription *_root;	// 24 = 0x18
    NSDictionary *_descriptions;	// 32 = 0x20
    NSOrderedSet *_conditions;	// 40 = 0x28
    _Bool _hasAnyReferenceRelationships;	// 48 = 0x30
    NSString *_typeIDConfigKey;	// 56 = 0x38
    NSString *_keyAttributesConfigKey;	// 64 = 0x40
    NSString *_refContextConfigKey;	// 72 = 0x48
    NSString *_includeConfigKey;	// 80 = 0x50
    NSString *_codingKeyConfigKey;	// 88 = 0x58
    NSString *_transformerConfigKey;	// 96 = 0x60
    NSString *_inlineConfigKey;	// 104 = 0x68
    NSString *_conditionalConfigKey;	// 112 = 0x70
    SEL _contextualizeConditionsSelector;	// 120 = 0x78
    SEL _attributeValueForKeySelector;	// 128 = 0x80
}

+ (unsigned long long)defaultOptions;	// IMP=0x0040000000524d38
- (void).cxx_destruct;	// IMP=0x0000000000522756
- (_Bool)isValidCondition:(id)arg1;	// IMP=0x0000000000522731
- (id)subentityOfDescription:(id)arg1 withTypeID:(id)arg2;	// IMP=0x0000000000522672
- (id)descriptionForDestinationOfRelationship:(id)arg1;	// IMP=0x00000000005225ef
- (id)descriptionForRelationship:(id)arg1;	// IMP=0x000000000052253e
- (id)descriptionForAttribute:(id)arg1;	// IMP=0x000000000052248d
- (id)descriptionForManagedObject:(id)arg1;	// IMP=0x0000000000522409
- (id)descriptionForEntity:(id)arg1;	// IMP=0x00000000005223a6
@property(readonly) NSArray *allDescriptions;
@property(readonly) HMDEntityCodingDescription *rootDescription;
@property(readonly) NSManagedObjectModel *objectModel;
@property(readonly) _Bool hasOnlyParentChildRelationships;
- (id)initWithModel:(id)arg1 configNamespace:(id)arg2 rootEntity:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x0000000000520864
- (id)initWithModel:(id)arg1 configNamespace:(id)arg2 rootEntity:(id)arg3;	// IMP=0x0000000000520808
- (id)initWithModel:(id)arg1 configNamespace:(id)arg2 rootEntityName:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x0000000000520769
- (id)initWithModel:(id)arg1 configNamespace:(id)arg2 rootEntityName:(id)arg3;	// IMP=0x000000000052070d
- (id)insertOrUpdateRootObjectInContext:(id)arg1 fromReader:(id)arg2;	// IMP=0x0000000000908806
- (_Bool)updateRootObject:(id)arg1 fromReader:(id)arg2;	// IMP=0x00000000009083a0
- (id)decodeRootObjectFromReader:(id)arg1;	// IMP=0x00000000009081bd
- (_Bool)isRelevantChanges:(id)arg1 withRootObject:(id)arg2 conditions:(id)arg3 userContext:(id)arg4;	// IMP=0x0000000000907f19
- (_Bool)encodeRootObject:(id)arg1 withWriter:(id)arg2 changes:(id)arg3 conditions:(id)arg4 userContext:(id)arg5;	// IMP=0x0000000000907b19
- (_Bool)encodeRootObject:(id)arg1 withWriter:(id)arg2;	// IMP=0x0000000000907af0

@end


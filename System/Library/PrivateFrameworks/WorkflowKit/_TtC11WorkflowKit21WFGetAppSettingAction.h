//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFAction.h"

@class INAppDescriptor, MISSING_TYPE, NSArray, NSDictionary, WFActionParameterSummary, WFContentCollection;

@interface _TtC11WorkflowKit21WFGetAppSettingAction : WFAction
{
    MISSING_TYPE *entityByEntityIdentifier;	// 8 = 0x8
    MISSING_TYPE *fullyQualifiedActionIdentifier;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$__localizedNameForEntityIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000250b4b
- (id)init;	// IMP=0x0000000000250b31
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;	// IMP=0x0000000000250aa6
- (id)entityMetadataForIdentifier:(id)arg1;	// IMP=0x00000000002501dd
- (id)backingActionIdentifiers;	// IMP=0x0000000000250121
- (_Bool)isApprovedForPublicShortcutsDrawer;	// IMP=0x0000000000250020
- (_Bool)visibleForUse:(long long)arg1;	// IMP=0x000000000024fff0
@property(nonatomic, readonly) WFActionParameterSummary *parameterSummary;
- (id)localizedKeywordsWithContext:(id)arg1;	// IMP=0x000000000024fd87
- (id)localizedDescriptionSummaryWithContext:(id)arg1;	// IMP=0x000000000024f74a
- (id)localizedCategoryWithContext:(id)arg1;	// IMP=0x000000000024f4c0
- (id)localizedNameWithContext:(id)arg1;	// IMP=0x000000000024f2e1
- (id)localizedDescriptionResultWithContext:(id)arg1;	// IMP=0x000000000024eec0
- (id)localizedDefaultOutputNameWithContext:(id)arg1;	// IMP=0x000000000024ed47
- (void)configureParameter:(id)arg1;	// IMP=0x000000000024ebc5
@property(nonatomic, readonly) NSDictionary *outputDictionary;
@property(nonatomic, readonly) NSArray *parameterDefinitions;
- (void)runWithInput:(WFContentCollection *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x000000000024e485
- (void)wasAddedToWorkflowByUser:(id)arg1;	// IMP=0x000000000024d69e
@property(nonatomic, readonly) INAppDescriptor *displayableAppDescriptor;
@property(nonatomic, readonly) NSArray *disabledOnPlatforms;
- (id)copyWithSerializedParameters:(id)arg1;	// IMP=0x000000000024ce57
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 entityByEntityIdentifier:(id)arg3 serializedParameters:(id)arg4 fullyQualifiedActionIdentifier:(id)arg5;	// IMP=0x000000000024cccf

// Remaining properties
@property(nonatomic, readonly) _Bool approvedForPublicShortcutsDrawer;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray;

@interface _TtC11WorkflowKit29WFTargetedEntityUpdaterAction
{
    MISSING_TYPE *_entityMetadata;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_propertyByIdentifier;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$__localizedNameForParameterKey;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000006de0c
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2 metadataForParameterIdentifier:(id)arg3 definition:(id)arg4 serializedParameters:(id)arg5 appIntentDescriptor:(id)arg6 fullyQualifiedActionIdentifier:(id)arg7;	// IMP=0x000000000006dd06
- (_Bool)isApprovedForPublicShortcutsDrawer;	// IMP=0x000000000006dbb7
- (_Bool)visibleForUse:(long long)arg1;	// IMP=0x000000000006db87
- (id)localizedCategoryWithContext:(id)arg1;	// IMP=0x000000000006d465
- (id)localizedDefaultOutputNameWithContext:(id)arg1;	// IMP=0x000000000006d2b3
- (id)localizedDescriptionSummaryWithContext:(id)arg1;	// IMP=0x000000000006d160
- (id)localizedNameWithContext:(id)arg1;	// IMP=0x000000000006caa7
@property(nonatomic, readonly) NSArray *parameterDefinitions;
- (id)copyWithSerializedParameters:(id)arg1;	// IMP=0x000000000006bd69
- (id)initWithIdentifier:(id)arg1 actionMetadata:(id)arg2 entityMetadata:(id)arg3 metadataForParameterIdentifier:(id)arg4 definition:(id)arg5 serializedParameters:(id)arg6 appIntentDescriptor:(id)arg7 fullyQualifiedActionIdentifier:(id)arg8;	// IMP=0x000000000006ba80

// Remaining properties
@property(nonatomic, readonly) _Bool approvedForPublicShortcutsDrawer;

@end


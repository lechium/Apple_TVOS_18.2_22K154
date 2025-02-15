//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFAppIntentExecutionAction.h"

@class INAppDescriptor, MISSING_TYPE, NSArray, WFActionParameterSummary, WFContentCollection;

@interface _TtC11WorkflowKit22WFEntityUpdatingAction : WFAppIntentExecutionAction
{
    MISSING_TYPE *metadataForParameterIdentifier;	// 8 = 0x8
    MISSING_TYPE *tableTemplateState;	// 16 = 0x10
    MISSING_TYPE *preprocessedEntity;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_addButtonParameter;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_tableParameter;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_batchExecutor;	// 64 = 0x40
}

+ (id)entityParameterName;	// IMP=0x00100000002cfcb4
- (void).cxx_destruct;	// IMP=0x00000000002d4d26
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2 definition:(id)arg3 serializedParameters:(id)arg4 appIntentDescriptor:(id)arg5 fullyQualifiedActionIdentifier:(id)arg6;	// IMP=0x00000000002d4c87
- (id)parameterStateUpdateForPlusButtonForParameter:(id)arg1;	// IMP=0x00000000002d4b2d
- (_Bool)showsAddButtonForParameter:(id)arg1;	// IMP=0x00000000002d4ade
- (id)backingActionIdentifiers;	// IMP=0x00000000002d4830
- (void)executor:(id)arg1 needsDisambiguationWithRequest:(id)arg2;	// IMP=0x00000000002d477d
- (void)executor:(id)arg1 needsConfirmationWithRequest:(id)arg2;	// IMP=0x00000000002d45e9
- (void)executor:(id)arg1 needsValueWithRequest:(id)arg2;	// IMP=0x00000000002d457f
- (void)getValueForParameterData:(id)arg1 ofProcessedParameters:(id)arg2 fallingBackToDefaultValue:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002d44c6
- (void)finishRunningWithError:(id)arg1;	// IMP=0x00000000002d4116
- (void)runWithInput:(WFContentCollection *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x00000000002d3f61
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002d2570
- (id)parameterStateForKey:(id)arg1;	// IMP=0x00000000002d1aa5
- (id)visibleParametersWithProcessing:(_Bool)arg1;	// IMP=0x00000000002d174c
@property(nonatomic, readonly) WFActionParameterSummary *parameterSummary;
- (void)configureParameter:(id)arg1;	// IMP=0x00000000002d0b1d
- (id)serializedParameters;	// IMP=0x00000000002d0a2b
@property(nonatomic, readonly) unsigned long long parameterCollapsingBehavior;
- (id)localizedKeywordsWithContext:(id)arg1;	// IMP=0x00000000002d087f
- (id)localizedDefaultOutputNameWithContext:(id)arg1;	// IMP=0x00000000002d046d
@property(nonatomic, readonly) NSArray *disabledOnPlatforms;
@property(nonatomic, readonly) INAppDescriptor *displayableAppDescriptor;
- (id)copyWithSerializedParameters:(id)arg1;	// IMP=0x00000000002d0087
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2 metadataForParameterIdentifier:(id)arg3 definition:(id)arg4 serializedParameters:(id)arg5 appIntentDescriptor:(id)arg6 fullyQualifiedActionIdentifier:(id)arg7;	// IMP=0x00000000002cfdfc
@property(nonatomic, readonly) NSArray *availableSubjectValues;

@end


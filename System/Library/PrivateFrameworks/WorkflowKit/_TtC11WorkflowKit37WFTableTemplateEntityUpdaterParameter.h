//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFParameter.h"

@class MISSING_TYPE, NSSet, NSString;
@protocol WFPropertyListObject;

@interface _TtC11WorkflowKit37WFTableTemplateEntityUpdaterParameter : WFParameter
{
    MISSING_TYPE *delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001a57df
- (Class)singleStateClass;	// IMP=0x00000000001a5717
- (id)initWithDefinition:(id)arg1;	// IMP=0x00000000001a56e3
@property(nonatomic, readonly) NSString *importQuestionBehavior;
@property(nonatomic, readonly) id <WFPropertyListObject> defaultSerializedRepresentation;
@property(nonatomic, readonly) NSSet *defaultSupportedVariableTypes;
@property(nonatomic, readonly) _Bool allowsMultipleValues;

@end


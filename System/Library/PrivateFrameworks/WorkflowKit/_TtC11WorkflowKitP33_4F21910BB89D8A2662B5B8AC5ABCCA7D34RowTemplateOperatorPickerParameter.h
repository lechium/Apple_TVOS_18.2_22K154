//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFEnumerationParameter.h"

@class MISSING_TYPE, NSArray;

@interface _TtC11WorkflowKitP33_4F21910BB89D8A2662B5B8AC5ABCCA7D34RowTemplateOperatorPickerParameter : WFEnumerationParameter
{
    MISSING_TYPE *operators;	// 8 = 0x8
    MISSING_TYPE *showLegacyComparisonAsValid;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e798e
- (id)initWithDefinition:(id)arg1;	// IMP=0x00000000000e793f
- (_Bool)parameterStateIsValid:(id)arg1;	// IMP=0x00000000000e78cb
- (id)localizedLabelForPossibleState:(id)arg1;	// IMP=0x00000000000e7786
@property(nonatomic, readonly) NSArray *possibleStates;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CKObjectValidating;

@interface CKComparisonPredicateValidator
{
    id <CKObjectValidating> _modifierValidator;	// 8 = 0x8
    id <CKObjectValidating> _leftExpressionValidator;	// 16 = 0x10
    id <CKObjectValidating> _operatorValidator;	// 24 = 0x18
    id <CKObjectValidating> _optionsValidator;	// 32 = 0x20
    id <CKObjectValidating> _rightExpressionValidator;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000026242c
@property(retain, nonatomic) id <CKObjectValidating> rightExpressionValidator; // @synthesize rightExpressionValidator=_rightExpressionValidator;
@property(retain, nonatomic) id <CKObjectValidating> optionsValidator; // @synthesize optionsValidator=_optionsValidator;
@property(retain, nonatomic) id <CKObjectValidating> operatorValidator; // @synthesize operatorValidator=_operatorValidator;
@property(retain, nonatomic) id <CKObjectValidating> leftExpressionValidator; // @synthesize leftExpressionValidator=_leftExpressionValidator;
@property(retain, nonatomic) id <CKObjectValidating> modifierValidator; // @synthesize modifierValidator=_modifierValidator;
- (id)CKPropertiesDescription;	// IMP=0x0000000000262029
- (_Bool)validate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000261628

@end


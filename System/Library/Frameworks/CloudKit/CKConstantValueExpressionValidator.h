//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CKObjectValidating;

@interface CKConstantValueExpressionValidator
{
    id <CKObjectValidating> _validator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000263655
@property(retain, nonatomic) id <CKObjectValidating> validator; // @synthesize validator=_validator;
- (id)CKPropertiesDescription;	// IMP=0x00000000002635c4
- (_Bool)validate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000263230
- (id)initWithValidator:(id)arg1;	// IMP=0x00000000002631c6

@end


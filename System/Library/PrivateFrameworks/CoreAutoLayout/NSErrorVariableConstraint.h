//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSISVariable;

__attribute__((visibility("hidden")))
@interface NSErrorVariableConstraint
{
    NSISVariable *_errorVariable;	// 80 = 0x50
    double _errorValue;	// 88 = 0x58
}

- (int)nsis_orientationHintForVariable:(id)arg1;	// IMP=0x000000000002c56b
- (id)constrainedConstraint;	// IMP=0x000000000002c4d1
- (_Bool)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(_Bool *)arg2;	// IMP=0x000000000002c416
- (void)dealloc;	// IMP=0x000000000002c3c8
- (id)initWithVariable:(id)arg1 value:(double)arg2;	// IMP=0x000000000002c2ba

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSLayoutYAxisAnchor
{
}

- (_Bool)isCompatibleWithAnchor:(id)arg1;	// IMP=0x0000000000031c33
- (_Bool)validateOtherAttribute:(long long)arg1;	// IMP=0x0000000000031bfa
- (id)constraintLessThanOrEqualToSystemSpacingBelowAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000031bdc
- (id)constraintGreaterThanOrEqualToSystemSpacingBelowAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000031bc0
- (id)constraintEqualToSystemSpacingBelowAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000031ba7
- (id)offsetBy:(double)arg1;	// IMP=0x0000000000023bf0
- (id)offsetByDimension:(id)arg1;	// IMP=0x0000000000023bde
- (id)offsetByDimension:(id)arg1 times:(double)arg2 plus:(double)arg3;	// IMP=0x0000000000023bcc
- (id)distanceTo:(id)arg1;	// IMP=0x0000000000023bba
- (id)offsetTo:(id)arg1;	// IMP=0x0000000000023ba8
- (id)anchorByOffsettingWithConstant:(double)arg1;	// IMP=0x0000000000023b63
- (id)anchorByOffsettingWithDimension:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;	// IMP=0x0000000000023b0c
- (id)anchorByOffsettingWithDimension:(id)arg1;	// IMP=0x0000000000023aef
- (id)anchorWithOffsetToAnchor:(id)arg1;	// IMP=0x0000000000023ad0

@end


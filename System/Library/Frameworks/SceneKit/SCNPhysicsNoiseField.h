//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNPhysicsField.h"

__attribute__((visibility("hidden")))
@interface SCNPhysicsNoiseField : SCNPhysicsField
{
    double _smoothness;	// 128 = 0x80
    double _animationSpeed;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000550da
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000055000
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000054f78
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x0000000000054eae
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000000054dff
- (_Bool)supportsDirection;	// IMP=0x0000000000054df7
- (_Bool)supportsOffset;	// IMP=0x0000000000054def
@property(nonatomic) double animationSpeed;
@property(nonatomic) double smoothness;
- (struct c3dPhysicsField *)_createField;	// IMP=0x0000000000054bf9
- (id)init;	// IMP=0x0000000000054ba1

@end


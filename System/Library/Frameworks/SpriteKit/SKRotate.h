//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKRotate : SKAction
{
    struct SKCRotate *_mycaction;	// 8 = 0x8
}

+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;	// IMP=0x0060000000047f43
+ (id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;	// IMP=0x0060000000047eac
+ (id)rotateToY:(double)arg1 duration:(double)arg2;	// IMP=0x0060000000047e23
+ (id)rotateByY:(double)arg1 duration:(double)arg2;	// IMP=0x0060000000047d99
+ (id)rotateToX:(double)arg1 duration:(double)arg2;	// IMP=0x0060000000047d14
+ (id)rotateByX:(double)arg1 duration:(double)arg2;	// IMP=0x0060000000047c8f
+ (id)rotateToAngle:(double)arg1 duration:(double)arg2 shortestUnitArc:(_Bool)arg3;	// IMP=0x0060000000047c00
+ (id)rotateToAngle:(double)arg1 duration:(double)arg2;	// IMP=0x0060000000047b81
+ (id)rotateByAngle:(double)arg1 duration:(double)arg2;	// IMP=0x0060000000047afc
+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000046f3a
- (id)reversedAction;	// IMP=0x0000000000048082
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000047fda
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000047661
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004704e
- (id)init;	// IMP=0x0000000000046f42

@end


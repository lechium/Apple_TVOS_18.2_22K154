//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMeshGenerator : CIFilter
{
    NSNumber *inputWidth;	// 72 = 0x48
    CIColor *inputColor;	// 80 = 0x50
    NSArray *inputMesh;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x0060000000164464
@property(retain, nonatomic) NSArray *inputMesh; // @synthesize inputMesh;
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) NSNumber *inputWidth; // @synthesize inputWidth;
- (id)outputImage;	// IMP=0x0000000000164922
- (struct CGRect)extentOfMeshStart:(int)arg1 count:(int)arg2 halfWidth:(double)arg3;	// IMP=0x0000000000164756
- (id)_CIMesh32;	// IMP=0x0000000000164736
- (id)_CIMesh16;	// IMP=0x0000000000164716
- (id)_CIMesh8;	// IMP=0x00000000001646f6
- (id)_CIMesh4;	// IMP=0x00000000001646d6
- (id)_CIMesh2;	// IMP=0x00000000001646b6
- (id)_CIMesh1;	// IMP=0x0000000000164696

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CIImageWriter : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSString *inputFilename;	// 80 = 0x50
    NSNumber *inputShouldDumpInputValues;	// 88 = 0x58
    CIFilter *inputOriginalFilter;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x0000000000139586
@property(retain) CIFilter *inputOriginalFilter; // @synthesize inputOriginalFilter;
@property(retain) NSNumber *inputShouldDumpInputValues; // @synthesize inputShouldDumpInputValues;
@property(retain) NSString *inputFilename; // @synthesize inputFilename;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000013969f

@end


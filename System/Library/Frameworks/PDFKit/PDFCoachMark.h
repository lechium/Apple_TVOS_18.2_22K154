//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, PDFPageLayerEffect;

__attribute__((visibility("hidden")))
@interface PDFCoachMark : NSObject
{
    NSDate *creationTime;	// 8 = 0x8
    struct CGRect frame;	// 16 = 0x10
    PDFPageLayerEffect *layerEffect;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000051192
- (double)effectTimeLeft;	// IMP=0x0000000000051127
- (void)playEffect:(id)arg1;	// IMP=0x0000000000050b65
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000050ae6

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIVectorTextLayoutParameters;

__attribute__((visibility("hidden")))
@interface _UIVectorTextLayoutInfo : NSObject
{
    _UIVectorTextLayoutParameters *_parameters;	// 8 = 0x8
    struct __CTFrame *_frame;	// 16 = 0x10
    struct CGAffineTransform _coordinateAdjustment;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000016153cd
@property(nonatomic) struct __CTFrame *frame; // @synthesize frame=_frame;
@property(nonatomic) struct CGAffineTransform coordinateAdjustment; // @synthesize coordinateAdjustment=_coordinateAdjustment;
@property(retain, nonatomic) _UIVectorTextLayoutParameters *parameters; // @synthesize parameters=_parameters;
- (void)dealloc;	// IMP=0x0000000001615323
- (double)scale;	// IMP=0x00000000016152a8

@end


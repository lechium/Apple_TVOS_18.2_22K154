//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class _UIBackdropView;

__attribute__((visibility("hidden")))
@interface _UIBackdropViewLayer : CALayer
{
    _UIBackdropView *_backdropView;	// 8 = 0x8
}

@property(nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
- (void)dealloc;	// IMP=0x00000000002ed536
- (void)renderInContext:(struct CGContext *)arg1;	// IMP=0x00000000002ed48e

@end


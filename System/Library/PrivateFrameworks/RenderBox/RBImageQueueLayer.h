//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface RBImageQueueLayer : CALayer
{
    struct objc_ptr<RBImageQueueContents *> _queue;	// 8 = 0x8
}

+ (id)defaultValueForKey:(id)arg1;	// IMP=0x0060000000098dc0
- (id).cxx_construct;	// IMP=0x0000000000098f48
- (void).cxx_destruct;	// IMP=0x0000000000098f33
- (id)actionForKey:(id)arg1;	// IMP=0x0000000000098f2b
- (void)renderInContext:(struct CGContext *)arg1;	// IMP=0x0000000000098f25

@end


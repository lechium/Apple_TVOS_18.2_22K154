//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebRootSampleBufferBoundsChangeListener : NSObject
{
    struct Function<void ()> _callback;	// 8 = 0x8
    struct RetainPtr<CALayer> _rootLayer;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000250890
- (void).cxx_destruct;	// IMP=0x0000000000250840
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000250750
- (void)stop;	// IMP=0x0000000000250700
- (void)begin:(id)arg1;	// IMP=0x00000000002506a0
- (void)invalidate;	// IMP=0x0000000000250660
- (void)dealloc;	// IMP=0x0000000000250620
- (id)initWithCallback:(void *)arg1;	// IMP=0x00000000002505c0

@end


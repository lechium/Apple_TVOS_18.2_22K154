//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLBatchedDeviceMotionBufferWrapper : NSObject
{
    struct vector<CMSPU::Safety::DMSample, std::allocator<CMSPU::Safety::DMSample>> _buffer;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0020000000e81b4e
- (void).cxx_destruct;	// IMP=0x0010000000e81b32
- (const void *)buffer;	// IMP=0x0010000000e81b28
- (void)dealloc;	// IMP=0x0010000000e81af9
- (id)initWithMovedBuffer:(void *)arg1;	// IMP=0x0010000000e81aa7

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLBatchedAccelerometerBufferWrapper : NSObject
{
    struct vector<CMAccel800, std::allocator<CMAccel800>> _buffer;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00200000009e261c
- (void).cxx_destruct;	// IMP=0x00100000009e2600
- (const void *)buffer;	// IMP=0x00100000009e25f6
- (void)dealloc;	// IMP=0x00100000009e25c7
- (id)initWithMovedBuffer:(void *)arg1;	// IMP=0x00100000009e2575

@end


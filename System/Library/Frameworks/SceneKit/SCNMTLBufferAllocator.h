//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SCNFixedSizePage;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface SCNMTLBufferAllocator : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    unsigned long long _bufferSize;	// 16 = 0x10
    unsigned long long _elementSize;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSMutableArray *_pages;	// 40 = 0x28
    SCNFixedSizePage *_currentAllocatorPage;	// 48 = 0x30
    struct os_unfair_lock_s _allocatorLock;	// 56 = 0x38
}

@property(readonly, nonatomic) unsigned long long elementSize; // @synthesize elementSize=_elementSize;
@property(readonly, nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
- (id)newSubBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 renderContext:(id)arg3;	// IMP=0x000000000010cff8
- (id)_newSubBuffer;	// IMP=0x000000000010cdd0
- (void)dealloc;	// IMP=0x000000000010cd86
- (id)initWithDevice:(id)arg1 fixedSizeElement:(unsigned long long)arg2 buffersize:(unsigned long long)arg3 name:(id)arg4;	// IMP=0x000000000010ccc0

@end


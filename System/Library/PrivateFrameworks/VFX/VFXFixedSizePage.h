//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;
@protocol MTLBuffer;

@interface VFXFixedSizePage : NSObject
{
    id <MTLBuffer> _buffer;	// 8 = 0x8
    unsigned long long _elementSize;	// 16 = 0x10
    NSMutableIndexSet *_freeIndices;	// 24 = 0x18
}

@property(readonly, nonatomic) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
- (id)newSubBufferForAllocator:(id)arg1;	// IMP=0x0000000000214cc9
- (void)deallocateElementAtOffset:(unsigned long long)arg1;	// IMP=0x0000000000214c7c
- (unsigned long long)_allocateElement;	// IMP=0x0000000000214bc3
- (_Bool)hasFreeElementsLeft;	// IMP=0x0000000000214ba6
- (_Bool)isFull;	// IMP=0x0000000000214b89
- (void)dealloc;	// IMP=0x0000000000214b3f
- (id)initWithBuffer:(id)arg1 elementSize:(unsigned long long)arg2;	// IMP=0x0000000000214aa3

@end


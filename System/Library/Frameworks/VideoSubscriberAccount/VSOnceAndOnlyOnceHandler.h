//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VSOnceAndOnlyOnceHandler : NSObject
{
    _Atomic int _counter;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005ee80
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)invoke;	// IMP=0x000000000005ee1a
- (void)dealloc;	// IMP=0x000000000005edd3

@end


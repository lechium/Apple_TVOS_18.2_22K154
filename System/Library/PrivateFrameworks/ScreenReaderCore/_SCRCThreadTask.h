//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _SCRCThreadTask : NSObject
{
    id _target;	// 8 = 0x8
    SEL _selector;	// 16 = 0x10
    NSConditionLock *_waitLock;	// 24 = 0x18
    unsigned int _mask;	// 32 = 0x20
    NSMutableArray *_objectArray;	// 40 = 0x28
}

+ (id)newThreadTaskWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 firstObject:(id)arg5 moreObjects:(struct __va_list_tag [1])arg6;	// IMP=0x00600000000265f4
- (void).cxx_destruct;	// IMP=0x00000000000281dc
- (void)fire;	// IMP=0x0000000000026984
- (void)setWaitLock:(id)arg1;	// IMP=0x0000000000026926
- (void)dealloc;	// IMP=0x00000000000268da
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 firstObject:(id)arg5 moreObjects:(struct __va_list_tag [1])arg6;	// IMP=0x0000000000026687

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface USKNodeSubtreeIterator : NSObject
{
    struct UsdPrimRange _range;	// 8 = 0x8
    struct iterator _it;	// 64 = 0x40
}

- (id).cxx_construct;	// IMP=0x0000000000058c0c
- (void).cxx_destruct;	// IMP=0x0000000000058bcc
- (id)nextObject;	// IMP=0x0000000000058973
- (id)initWithPrim:(const void *)arg1 withPredicate:(struct Usd_PrimFlagsPredicate)arg2;	// IMP=0x00000000000588b4
- (id)initWithScene:(const void *)arg1 withPredicate:(struct Usd_PrimFlagsPredicate)arg2;	// IMP=0x00000000000587e9
- (id)initWithPrim:(const void *)arg1;	// IMP=0x0000000000058726
- (id)initWithScene:(const void *)arg1;	// IMP=0x0000000000058628
- (id)initWithSubtreeRange:(const void *)arg1;	// IMP=0x0000000000058465
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000058433

@end


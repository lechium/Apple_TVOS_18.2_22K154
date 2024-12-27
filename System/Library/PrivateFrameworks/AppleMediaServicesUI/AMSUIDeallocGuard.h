//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSUIDeallocGuard : NSObject
{
    _Bool _invalidated;	// 8 = 0x8
    struct os_unfair_lock_s _invalidationLock;	// 12 = 0xc
    CDUnknownBlockType _block;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000247ed
@property(readonly, nonatomic) struct os_unfair_lock_s invalidationLock; // @synthesize invalidationLock=_invalidationLock;
@property(readonly, nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)invalidate;	// IMP=0x000000000002479e
- (id)initWithDeallocGuardBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002471e
- (void)dealloc;	// IMP=0x0000000000024699

@end


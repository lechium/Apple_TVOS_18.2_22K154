//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ASDUnfairLock : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
}

- (void)unlock;	// IMP=0x000000000002244a
- (void)lock;	// IMP=0x000000000002243c
- (id)init;	// IMP=0x0000000000022401

@end


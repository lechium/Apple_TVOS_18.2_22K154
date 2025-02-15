//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface RBPowerAssertion : NSObject
{
    unsigned int _identifier;	// 8 = 0x8
    NSDate *_acquisitionDate;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_baseName;	// 32 = 0x20
    _Bool _invalidated;	// 40 = 0x28
    struct os_unfair_lock_s _lock;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000000086b3
- (id)description;	// IMP=0x000000000000860d
- (void)dealloc;	// IMP=0x0000000000008528
- (id)_preventIdleSleepIdentifiers;	// IMP=0x0000000000007ff2
- (int)_targetPid;	// IMP=0x0000000000007fea
- (id)init;	// IMP=0x0000000000007be4

@end


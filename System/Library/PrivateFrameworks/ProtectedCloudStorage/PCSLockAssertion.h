//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PCSLockManager;

__attribute__((visibility("hidden")))
@interface PCSLockAssertion : NSObject
{
    _Bool _held;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    PCSLockManager *_manager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000248a9
@property _Bool held; // @synthesize held=_held;
@property(retain) PCSLockManager *manager; // @synthesize manager=_manager;
@property(retain) NSString *name; // @synthesize name=_name;
- (void)dealloc;	// IMP=0x000000000002480a
- (void)dropAssertion;	// IMP=0x00000000000247b0
- (_Bool)holdAssertion;	// IMP=0x0000000000024749
- (id)initAssertion:(id)arg1 manager:(id)arg2;	// IMP=0x00000000000246b0

@end


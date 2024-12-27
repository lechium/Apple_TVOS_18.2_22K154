//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSAssertion, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface BLSHDefaultHandler : NSObject
{
    NSString *_key;	// 8 = 0x8
    NSArray *_attributes;	// 16 = 0x10
    BLSAssertion *_lock_assertion;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    _Bool _invalidated;	// 36 = 0x24
}

+ (id)handlerForKey:(id)arg1 attributes:(id)arg2;	// IMP=0x001000000005fdec
- (void).cxx_destruct;	// IMP=0x00000000000601b2
- (void)updateForNewValue:(_Bool)arg1;	// IMP=0x000000000006007c
- (void)invalidate;	// IMP=0x0000000000060030
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000005fefb
- (id)initWithKey:(id)arg1 attributes:(id)arg2;	// IMP=0x000000000005fe5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


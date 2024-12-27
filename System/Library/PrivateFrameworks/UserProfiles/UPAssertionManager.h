//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol BSInvalidatable, UPAssertionManagerSource;

__attribute__((visibility("hidden")))
@interface UPAssertionManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <UPAssertionManagerSource> _lock_source;	// 16 = 0x10
    NSMutableDictionary *_lock_compoundAssertions;	// 24 = 0x18
    id <BSInvalidatable> _stateCaptureHandle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000035ab5
- (void)_handleStateChange:(id)arg1 inDomain:(id)arg2;	// IMP=0x00000000000359c0
- (id)_lock_compoundAssertionForDomain:(id)arg1;	// IMP=0x00000000000357e4
- (id)_source;	// IMP=0x0000000000035728
- (void)setLog:(id)arg1 forDomain:(id)arg2;	// IMP=0x000000000003560f
- (id)acquireAssertionWithIdentifier:(id)arg1 forReason:(id)arg2 inDomain:(id)arg3;	// IMP=0x000000000003538f
- (id)stateDumpBuilder;	// IMP=0x000000000003526c
- (void)invalidate;	// IMP=0x00000000000351d9
- (void)dealloc;	// IMP=0x000000000003519b
- (id)init;	// IMP=0x0000000000035117
- (id)initWithSource:(id)arg1;	// IMP=0x0000000000034ed0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


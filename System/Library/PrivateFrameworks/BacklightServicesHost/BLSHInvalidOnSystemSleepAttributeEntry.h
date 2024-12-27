//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSAttribute, NSString;
@protocol BLSAssertionServiceResponding, BLSHAssertionAttributeHandlerService;

__attribute__((visibility("hidden")))
@interface BLSHInvalidOnSystemSleepAttributeEntry : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _lock_invalidated;	// 12 = 0xc
    BLSAttribute *_attribute;	// 16 = 0x10
    id <BLSAssertionServiceResponding> _assertion;	// 24 = 0x18
    id <BLSHAssertionAttributeHandlerService> _service;	// 32 = 0x20
}

+ (id)activateForAttribute:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3 attributeHandler:(id)arg4;	// IMP=0x001000000000d363
- (void).cxx_destruct;	// IMP=0x000000000000d8b4
@property(readonly, nonatomic) __weak id <BLSHAssertionAttributeHandlerService> service; // @synthesize service=_service;
@property(readonly, nonatomic) __weak id <BLSAssertionServiceResponding> assertion; // @synthesize assertion=_assertion;
@property(readonly, nonatomic) __weak BLSAttribute *attribute; // @synthesize attribute=_attribute;
- (void)systemSleepMonitor:(id)arg1 prepareForSleepWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d840
- (void)systemSleepMonitor:(id)arg1 sleepRequestedWithResult:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d7fd
- (void)invalidate;	// IMP=0x000000000000d742
- (_Bool)reactivateIfPossible;	// IMP=0x000000000000d73a
- (id)initForAttribute:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3;	// IMP=0x000000000000d3f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


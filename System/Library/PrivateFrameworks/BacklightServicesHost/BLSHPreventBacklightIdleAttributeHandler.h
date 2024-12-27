//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BLSHLocalCountingAssertionAttributeHandler.h"

@class BLSHBacklightIdleProvider;

__attribute__((visibility("hidden")))
@interface BLSHPreventBacklightIdleAttributeHandler : BLSHLocalCountingAssertionAttributeHandler
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _active[3];	// 12 = 0xc
    BLSHBacklightIdleProvider *_provider;	// 16 = 0x10
}

+ (Class)attributeBaseClass;	// IMP=0x006000000000c27e
+ (id)attributeClasses;	// IMP=0x006000000000c212
+ (id)registerHandlerForService:(id)arg1 provider:(id)arg2;	// IMP=0x006000000000c10a
- (void).cxx_destruct;	// IMP=0x000000000000c7dd
@property(readonly, nonatomic) __weak BLSHBacklightIdleProvider *provider; // @synthesize provider=_provider;
- (void)activate:(_Bool)arg1 withEntry:(id)arg2;	// IMP=0x000000000000c4a0
- (void)deactivateWithFinalEntry:(id)arg1;	// IMP=0x000000000000c489
- (void)activateWithFirstEntry:(id)arg1;	// IMP=0x000000000000c46f
- (id)countingTargetForEntry:(id)arg1;	// IMP=0x000000000000c434
- (long long)typeForEntry:(id)arg1;	// IMP=0x000000000000c28f
- (id)initForService:(id)arg1 provider:(id)arg2;	// IMP=0x000000000000c192

@end


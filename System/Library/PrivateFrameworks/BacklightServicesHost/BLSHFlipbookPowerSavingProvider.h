//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BacklightServicesHost/BLSHFlipbookPowerSavingProviding-Protocol.h>

@class NSString;
@protocol BLSHFlipbook;

__attribute__((visibility("hidden")))
@interface BLSHFlipbookPowerSavingProvider : NSObject <BLSHFlipbookPowerSavingProviding>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <BLSHFlipbook> _lock_flipbook;	// 16 = 0x10
    unsigned long long _lock_count;	// 24 = 0x18
    unsigned long long _lock_reasonsCount[8];	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002214e
- (id)lock_description;	// IMP=0x0000000000021f49
@property(readonly, copy) NSString *description;
- (void)decrementDisablePowerSavingUsageCountForReason:(unsigned long long)arg1;	// IMP=0x0000000000021d8a
- (void)incrementDisablePowerSavingUsageCountForReason:(unsigned long long)arg1;	// IMP=0x0000000000021c34
@property(readonly, nonatomic, getter=isFlipbookPowerSavingEnabled) _Bool flipbookPowerSavingEnabled;
@property(nonatomic) __weak id <BLSHFlipbook> flipbook;
- (id)init;	// IMP=0x0000000000021aeb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


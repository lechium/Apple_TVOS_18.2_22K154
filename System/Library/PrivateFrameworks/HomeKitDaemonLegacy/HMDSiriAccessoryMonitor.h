//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol HMDSiriAccessoryMonitorDelegate;

__attribute__((visibility("hidden")))
@interface HMDSiriAccessoryMonitor : NSObject
{
    id <HMDSiriAccessoryMonitorDelegate> _delegate;	// 8 = 0x8
    NSMapTable *_accessories;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001e6f87
@property(retain, nonatomic) NSMapTable *accessories; // @synthesize accessories=_accessories;
@property(readonly, nonatomic) __weak id <HMDSiriAccessoryMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)accessory:(id)arg1 setSupportsDragonSiri:(_Bool)arg2;	// IMP=0x00000000001e6e7e
- (void)setTargetableAccessory:(id)arg1 withControllers:(id)arg2;	// IMP=0x00000000001e6ad3
- (void)_removeAccessory:(id)arg1;	// IMP=0x00000000001e69cb
- (void)_addAccessory:(id)arg1 withTarget:(id)arg2;	// IMP=0x00000000001e68da
- (id)_accessoriesTargetingAccessory:(id)arg1;	// IMP=0x00000000001e667f
- (_Bool)hasAnyActiveTargetingAccessories;	// IMP=0x00000000001e6519
- (id)_getInfoForAccessory:(id)arg1;	// IMP=0x00000000001e649f
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000001e6411

@end


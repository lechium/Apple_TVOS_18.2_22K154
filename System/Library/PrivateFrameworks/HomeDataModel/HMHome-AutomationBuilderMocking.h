//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMHome.h>

@class MTRDeviceController;

@interface HMHome (AutomationBuilderMocking)
- (void)hdm_addEventTriggerFromBuilder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x003000000041857d
- (id)hdm_newEventTriggerBuilderWithName:(id)arg1 events:(id)arg2;	// IMP=0x0030000000418560
@property(readonly, nonatomic) MTRDeviceController *hdm_sharedMatterController;
- (id)hdm_createMatterController;	// IMP=0x0030000000418a0c
@end


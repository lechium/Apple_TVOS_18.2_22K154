//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCSonyDualShockControllerProfile : NSObject
{
}

+ (id)physicalDeviceGetHapticCapabilityGraph:(id)arg1;	// IMP=0x001000000008c6fd
+ (id)physicalDeviceGetHapticCapabilities:(id)arg1;	// IMP=0x001000000008c618
+ (void)physicalDevice:(id)arg1 getBatteryWithReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000008c3bb
+ (void)physicalDevice:(id)arg1 setSensorsActive:(_Bool)arg2;	// IMP=0x001000000008c36e
+ (void)physicalDevice:(id)arg1 getSensorsEnabledWithReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000008c13e
+ (_Bool)physicalDeviceSupportsMotion:(id)arg1;	// IMP=0x001000000008c136
+ (void)physicalDevice:(id)arg1 setLight:(id)arg2;	// IMP=0x001000000008c02e
+ (void)physicalDevice:(id)arg1 getLightWithReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000008bd8c
+ (id)logicalDevice:(id)arg1 makeControllerMotionWithIdentifier:(id)arg2;	// IMP=0x001000000008bd11
+ (id)logicalDevice:(id)arg1 makeControllerInputDescriptionWithIdentifier:(id)arg2 bindings:(id)arg3;	// IMP=0x001000000008a1a2
+ (id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2;	// IMP=0x001000000008a095
+ (id)logicalDeviceControllerProductCategory:(id)arg1;	// IMP=0x001000000008a081
+ (void)deviceManager:(id)arg1 prepareLogicalDevice:(id)arg2;	// IMP=0x001000000008a069
+ (void)deviceManager:(id)arg1 willPublishPhysicalDevice:(id)arg2;	// IMP=0x001000000008a051
+ (id)deviceManager;	// IMP=0x0010000000089f23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


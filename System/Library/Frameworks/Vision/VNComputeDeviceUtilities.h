//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNComputeDeviceUtilities : NSObject
{
}

+ (id)computeDeviceOfComputeDevices:(id)arg1 mostCompatibleWithComputeDevice:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00800000002145a2
+ (id)mostPerformantComputeDeviceOfComputeDevices:(id)arg1;	// IMP=0x0080000000214524
+ (long long)performanceScoreForComputeDevice:(id)arg1;	// IMP=0x008000000021450f
+ (id)metalDeviceForComputeDevice:(id)arg1;	// IMP=0x00800000002144ac
+ (id)computeDeviceForMetalDevice:(id)arg1;	// IMP=0x00800000002142d9
+ (_Bool)computeDevice:(id)arg1 isOneTypeOfTypes:(unsigned long long)arg2;	// IMP=0x008000000021429d
+ (id)computeDevicesOfTypes:(unsigned long long)arg1;	// IMP=0x0080000000214239
+ (id)computeDevices:(id)arg1 ofTypes:(unsigned long long)arg2;	// IMP=0x00800000002141d7
+ (id)computeDevicesPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x008000000021415a
+ (id)computeDevices:(id)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x008000000021407e
+ (unsigned long long)typeOfComputeDevice:(id)arg1;	// IMP=0x0080000000214069
+ (unsigned long long)computeDeviceTypesForMLComputeUnits:(long long)arg1;	// IMP=0x008000000021404f
+ (id)allGPUAndNeuralEngineComputeDevices;	// IMP=0x0080000000213ffd
+ (id)allCPUAndNeuralEngineComputeDevices;	// IMP=0x0080000000213fab
+ (id)allCPUAndGPUComputeDevices;	// IMP=0x0080000000213f59
+ (id)espressoV1ModelComputeDevices;	// IMP=0x0080000000213f07
+ (id)mostPerformantNeuralEngineComputeDevice;	// IMP=0x0080000000213ea8
+ (id)mostPerformantGPUComputeDevice;	// IMP=0x0080000000213e49
+ (id)mostPerformantCPUComputeDevice;	// IMP=0x0080000000213dea
+ (id)mostPerformantComputeDevice;	// IMP=0x0080000000213d9d
+ (id)allNeuralEngineComputeDevices;	// IMP=0x0080000000213d86
+ (id)allGPUComputeDevices;	// IMP=0x0080000000213d6f
+ (id)allCPUComputeDevices;	// IMP=0x0080000000213d58
+ (id)allComputeDevices;	// IMP=0x0080000000213d13
+ (_Bool)isNeuralEngineComputeDevice:(id)arg1;	// IMP=0x0080000000213cf9
+ (_Bool)isGPUComputeDevice:(id)arg1;	// IMP=0x0080000000213cdf
+ (_Bool)isCPUComputeDevice:(id)arg1;	// IMP=0x0080000000213cc5

@end


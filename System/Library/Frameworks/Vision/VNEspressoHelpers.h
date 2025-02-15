//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNEspressoHelpers : NSObject
{
}

+ (int)espressoStorageTypeForComputeDevice:(id)arg1;	// IMP=0x0080000000311b7a
+ (int)espressoEngineForComputeDevice:(id)arg1;	// IMP=0x0080000000311b48
+ (int)espressoDeviceIDForComputeDevice:(id)arg1;	// IMP=0x0080000000311ae5
+ (_Bool)feedForwardEspressoBufferForNetwork:(CDStruct_2bc666a5 *)arg1 fromBufferWithName:(id)arg2 toBufferWithName:(id)arg3 firstFrame:(_Bool)arg4 error:(id *)arg5;	// IMP=0x00800000003117f7
+ (unsigned long long)pixelValueSizeInBytesForBuffer:(const CDStruct_0a65202a *)arg1 error:(id *)arg2;	// IMP=0x0080000000311773
+ (_Bool)renderEspressoBufferImage:(const CDStruct_0a65202a *)arg1 intoCVPixelBuffer:(struct __CVBuffer *)arg2 error:(id *)arg3;	// IMP=0x00800000003116ae
+ (struct __CVBuffer *)createCVPixelBufferWithPixelFormat:(unsigned int)arg1 fromImageInEspressoBuffer:(const CDStruct_0a65202a *)arg2 error:(id *)arg3;	// IMP=0x00800000003115a1
+ (_Bool)createSingleNetworkPlanFromModelPath:(id)arg1 forComputeDevice:(id)arg2 lowPriorityMode:(_Bool)arg3 priority:(int)arg4 inputBlobNames:(id)arg5 outputBlobNames:(id)arg6 networkConfiguration:(id)arg7 explicitNetworkLayersStorageType:(int)arg8 memoryPoolId:(unsigned long long)arg9 espressoResources:(id *)arg10 error:(id *)arg11;	// IMP=0x0080000000310c4f
+ (_Bool)createSingleNetworkPlanFromModelPath:(id)arg1 forComputeDevice:(id)arg2 lowPriorityMode:(_Bool)arg3 priority:(int)arg4 inputBlobNames:(id)arg5 outputBlobNames:(id)arg6 networkConfiguration:(id)arg7 memoryPoolId:(unsigned long long)arg8 espressoResources:(id *)arg9 error:(id *)arg10;	// IMP=0x0080000000310b1a
+ (_Bool)getWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 ofBlobNamed:(id)arg3 forNetworkModelFileWithPath:(id)arg4 error:(id *)arg5;	// IMP=0x00800000003105ba
+ (id)weightsFilePathForEspressoNetworkModelFilePath:(id)arg1 error:(id *)arg2;	// IMP=0x008000000031042b
+ (id)pathForEspressoNetworkModelFileWithName:(id)arg1 error:(id *)arg2;	// IMP=0x00800000003103ff
+ (id)pathForEspressoResourceWithFilename:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000310326
+ (id)pathForEspressoResource:(id)arg1 ofType:(id)arg2 error:(id *)arg3;	// IMP=0x00800000003100d3
+ (id)_locateFrameworkBundleForResourceWithName:(id)arg1 resourceDirectory:(id *)arg2 error:(id *)arg3;	// IMP=0x008000000030fe43
+ (id)_alternatePathForEspressoResource:(id)arg1 ofType:(id)arg2 error:(id *)arg3;	// IMP=0x008000000030fc28
+ (id)JSONDataFromNetworkFilePath:(id)arg1 error:(id *)arg2;	// IMP=0x008000000030f8b9

@end


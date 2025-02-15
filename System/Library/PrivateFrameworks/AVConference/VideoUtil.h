//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VideoUtil : NSObject
{
}

+ (struct CGSize)computeResolutionForMainDisplayWithMaxScreenPixelCount:(unsigned long long)arg1;	// IMP=0x00800000001dc77d
+ (struct CGSize)compute16AlignedResolutionForNativeWidth:(unsigned int)arg1 nativeHeight:(unsigned int)arg2 maxScreenPixelCount:(unsigned long long)arg3 maxScreenEncodingSizeSupported:(unsigned long long)arg4;	// IMP=0x00800000001dc4d7
+ (struct CGSize)computeVisibleAspectRatioWithRemoteScreenAspectRatio:(struct CGSize)arg1 remoteExpectedAspectRatio:(struct CGSize)arg2 encodeWidth:(int)arg3 encodeHeight:(int)arg4;	// IMP=0x00800000001dc4c9
+ (unsigned int)videoCodecForPayload:(int)arg1;	// IMP=0x00800000001dc44d
+ (struct __CFString *)typeIdentifierForImageType:(int)arg1;	// IMP=0x00800000001dc3d2
+ (long long)compareVideoAspectRatioSizeA:(struct CGSize)arg1 toSizeB:(struct CGSize)arg2;	// IMP=0x00800000001dc38c
+ (int)setupBufferPool:(struct __CVPixelBufferPool **)arg1 width:(double)arg2 height:(double)arg3;	// IMP=0x00800000001dc384
+ (long long)videoResolutionForWidth:(int)arg1 height:(int)arg2;	// IMP=0x00800000001dc11f
+ (struct CGSize)getBestCaptureSizeForEncodingSize:(struct CGSize)arg1;	// IMP=0x00800000001dc119
+ (struct CGSize)sizeForVideoResolution:(long long)arg1;	// IMP=0x00800000001dc072
+ (id)convertPixelBuffer:(struct __CVBuffer *)arg1 toImageType:(int)arg2 withAssetIdentifier:(id)arg3 cameraStatusBits:(unsigned char)arg4 allowTimeMetaData:(_Bool)arg5;	// IMP=0x00800000001dbbcd

@end


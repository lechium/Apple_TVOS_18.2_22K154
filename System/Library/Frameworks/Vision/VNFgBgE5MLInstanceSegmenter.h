//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VNFgBgE5MLInstanceSegmenterConfiguration, VNFgBgE5MLProcess;

__attribute__((visibility("hidden")))
@interface VNFgBgE5MLInstanceSegmenter : NSObject
{
    VNFgBgE5MLInstanceSegmenterConfiguration *_configuration;	// 8 = 0x8
    VNFgBgE5MLProcess *_process;	// 16 = 0x10
}

+ (id)instanceSegmenterWithRevision:(long long)arg1 error:(id *)arg2;	// IMP=0x00600000001bb6ae
+ (id)instanceSegmenterWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00600000001bb56f
- (void).cxx_destruct;	// IMP=0x00000000001bb304
@property(readonly, nonatomic) VNFgBgE5MLProcess *process; // @synthesize process=_process;
@property(readonly, nonatomic) VNFgBgE5MLInstanceSegmenterConfiguration *configuration; // @synthesize configuration=_configuration;
- (struct ConnectedComponentResult)generateInstanceConnectedComponentsFromMLMultiArray:(id)arg1 maskThreshold:(float)arg2 queryID:(int)arg3 inverseColor:(_Bool)arg4;	// IMP=0x00000000001bb067
- (vector_3c4dda2d)computeVectorConnectedComponentSegmentation:(id)arg1 minimumMaskPixelCount:(unsigned long long)arg2 withQueryID:(int)arg3;	// IMP=0x00000000001bacb2
- (struct vImage_Buffer)generateMaskForInstanceFeatures:(id)arg1 maskImageType:(int *)arg2;	// IMP=0x00000000001ba928
- (void)modifyMask:(struct vImage_Buffer *)arg1 forLabel:(unsigned long long)arg2 fromConnectedComponents:(const void *)arg3 error:(id *)arg4;	// IMP=0x00000000001ba843
- (struct vImage_Buffer)generateMaskForLabel:(unsigned long long)arg1 fromConnectedComponents:(const void *)arg2 error:(id *)arg3;	// IMP=0x00000000001ba76e
- (struct ConnectedComponentResult)generateInstanceConnectedComponentsFromMask:(struct vImage_Buffer)arg1;	// IMP=0x00000000001ba67f
- (struct vImage_Buffer)generateMaskFromInstanceFeatures:(id)arg1 toCategory:(int)arg2 drawBox:(_Bool)arg3 maskImageType:(int *)arg4;	// IMP=0x00000000001b9ec4
- (vector_3c4dda2d)computeSegmentation:(id)arg1 withQueryID:(int)arg2;	// IMP=0x00000000001b9a9a
- (void)computeConfidenceInput:(id)arg1 confidence:(float *)arg2 withQueryID:(int)arg3 category:(int *)arg4 invalidCategory:(int)arg5;	// IMP=0x00000000001b98ee
- (struct CGRect)getDetection:(const void *)arg1 mapSize:(struct CGSize)arg2 isRotated:(_Bool)arg3;	// IMP=0x00000000001b97e7
- (id)composeInstanceFeatures:(id)arg1 miyoshiConfidence:(id)arg2 cocoConfidence:(id)arg3 predictionIoU:(id)arg4 stabilityScore:(id)arg5 decodeMatch:(id)arg6 isRotated:(_Bool)arg7 minimumMaskPixelCount:(unsigned long long)arg8 useInteractive:(_Bool)arg9;	// IMP=0x00000000001b8a87
- (struct ConnectedComponentResult)generateInstanceConnectedComponentsFromMask:(struct vImage_Buffer)arg1 fillGapsAreaRatio:(float)arg2;	// IMP=0x00000000001b8440
- (struct ConnectedComponentResult)generateInstanceConnectedComponentsFromMask:(struct vImage_Buffer)arg1 inverseColor:(_Bool)arg2;	// IMP=0x00000000001b833b
- (_Bool)isFullyIntersection:(struct CGRect)arg1 withRect2:(struct CGRect)arg2;	// IMP=0x00000000001b82af
- (id)_initWithConfiguration:(id)arg1 e5mlProcess:(id)arg2;	// IMP=0x00000000001b81f8

@end


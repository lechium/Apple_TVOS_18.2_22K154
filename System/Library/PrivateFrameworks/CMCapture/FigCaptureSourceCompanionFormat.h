//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FigCaptureSourceCompanionFormat : NSObject
{
    int _formatIndex;	// 8 = 0x8
    CDStruct_79c71658 _fesDimensions;	// 12 = 0xc
    CDStruct_79c71658 _fesInputCropDimensions;	// 20 = 0x14
    CDStruct_79c71658 _outputCropDimensionsWhenFesIsEnabled;	// 28 = 0x1c
    CDStruct_79c71658 _sensorCropDimensions;	// 36 = 0x24
    struct CGPoint _sensorCenterOffset;	// 48 = 0x30
    CDStruct_79c71658 _highQualitySensorDimensions;	// 64 = 0x40
    CDStruct_79c71658 _postGDCCropDimensions;	// 72 = 0x48
    CDStruct_79c71658 _geometricDistortionCorrectedNativeDimensions;	// 80 = 0x50
    _Bool _sifrEnabled;	// 88 = 0x58
    float _stereoVideoAEMaxGain;	// 92 = 0x5c
    CDStruct_79c71658 _sensorDimensions;	// 96 = 0x60
}

@property(readonly) float stereoVideoAEMaxGain; // @synthesize stereoVideoAEMaxGain=_stereoVideoAEMaxGain;
@property(readonly) CDStruct_79c71658 geometricDistortionCorrectedNativeDimensions; // @synthesize geometricDistortionCorrectedNativeDimensions=_geometricDistortionCorrectedNativeDimensions;
@property(readonly) CDStruct_79c71658 highQualitySensorDimensions; // @synthesize highQualitySensorDimensions=_highQualitySensorDimensions;
@property(readonly) _Bool sifrEnabled; // @synthesize sifrEnabled=_sifrEnabled;
@property(readonly) CDStruct_79c71658 postGDCCropDimensions; // @synthesize postGDCCropDimensions=_postGDCCropDimensions;
@property(readonly) struct CGPoint sensorCenterOffset; // @synthesize sensorCenterOffset=_sensorCenterOffset;
@property(readonly) CDStruct_79c71658 sensorCropDimensions; // @synthesize sensorCropDimensions=_sensorCropDimensions;
@property(readonly) CDStruct_79c71658 sensorDimensions; // @synthesize sensorDimensions=_sensorDimensions;
@property(readonly) CDStruct_79c71658 outputCropDimensionsWhenFesIsEnabled; // @synthesize outputCropDimensionsWhenFesIsEnabled=_outputCropDimensionsWhenFesIsEnabled;
@property(readonly) CDStruct_79c71658 fesInputCropDimensions; // @synthesize fesInputCropDimensions=_fesInputCropDimensions;
@property(readonly) CDStruct_79c71658 fesDimensions; // @synthesize fesDimensions=_fesDimensions;
@property(readonly) int formatIndex; // @synthesize formatIndex=_formatIndex;
- (id)description;	// IMP=0x000000000004726d
- (void)dealloc;	// IMP=0x000000000004723e
- (id)initWithCompanionFormatDictionary:(id)arg1;	// IMP=0x0000000000046ec7

@end


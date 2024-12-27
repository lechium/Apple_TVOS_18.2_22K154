//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString, PFMetadata;

@protocol PFMetadataImage
@property(readonly, nonatomic) long long cameraUsedForCapture;
@property(readonly, nonatomic) NSString *credit;
@property(readonly, nonatomic) NSNumber *generativeAIImageType;
@property(readonly, nonatomic) _Bool isAlchemist;
@property(readonly, nonatomic) _Bool containsSpatialCameraHEIFMetadata;
@property(readonly, nonatomic) _Bool isThreeImageStereoHEIC;
@property(readonly, nonatomic) NSData *imageSourceProxyData;
@property(readonly, nonatomic) NSNumber *srlCompensationValue;
@property(readonly, nonatomic) NSNumber *nrfSrlStatus;
@property(readonly, nonatomic) unsigned long long photosAppFeatureFlags;
@property(readonly, nonatomic) _Bool isProRAW;
@property(readonly, nonatomic) _Bool isFrontFacingCamera;
@property(readonly, nonatomic) NSNumber *semanticStylePreset;
@property(readonly, nonatomic) NSNumber *semanticStyleRenderingVersion;
@property(readonly, nonatomic) NSNumber *semanticStyleWarmthBias;
@property(readonly, nonatomic) NSNumber *semanticStyleToneBias;
@property(readonly, nonatomic) NSString *defaultProfileName;
@property(readonly, nonatomic) NSString *userComment;
@property(readonly, nonatomic) _Bool isScreenshot;
@property(readonly, nonatomic) _Bool isPhotoBooth;
@property(readonly, nonatomic) NSString *portraitInLandscapeCamera;
@property(readonly, nonatomic) unsigned long long photoCaptureFlags;
@property(readonly, nonatomic) unsigned long long photoProcessingFlags;
@property(readonly, nonatomic) _Bool isAnimatedImage;
@property(readonly, nonatomic) NSNumber *HEICSDelayTime;
@property(readonly, nonatomic) NSNumber *GIFDelayTime;
@property(readonly, nonatomic) NSString *profileName;
@property(readonly, nonatomic) _Bool isSDOF;
@property(readonly, nonatomic) NSNumber *hdrGainMapPercentageValue;
@property(readonly, nonatomic) _Bool hasISOGainMap;
@property(readonly, nonatomic) _Bool hasHDRGainMap;
@property(readonly, nonatomic) NSDictionary *hdrGainMap;
@property(readonly, nonatomic) NSNumber *hdrGain;
@property(readonly, nonatomic) NSString *photoProcessingIdentifier;
@property(readonly, nonatomic) NSString *imageCaptureRequestIdentifier;
@property(readonly, nonatomic) NSString *deferredPhotoProcessingIdentifier;
@property(readonly, nonatomic) NSString *groupingUuid;
@property(readonly, nonatomic) NSString *burstUuid;
@property(readonly, nonatomic) NSString *firmware;
@property(readonly, nonatomic) NSString *ownerName;
@property(readonly, nonatomic) NSString *cameraSerialNumber;
@property(readonly, nonatomic) NSNumber *lensMaximumMM;
@property(readonly, nonatomic) NSNumber *lensMinimumMM;
@property(readonly, nonatomic) NSString *lensModel;
@property(readonly, nonatomic) NSString *lensMake;
@property(readonly, nonatomic) struct CGColorSpace *cgColorSpace;
@property(readonly, nonatomic) NSNumber *brightness;
@property(readonly, nonatomic) NSNumber *fNumber;
@property(readonly, nonatomic) NSNumber *lightSource;
@property(readonly, nonatomic) NSNumber *whiteBalanceIndex;
@property(readonly, nonatomic) NSNumber *whiteBalance;
@property(readonly, nonatomic) NSNumber *exposureTime;
@property(readonly, nonatomic) NSNumber *meteringMode;
@property(readonly, nonatomic) NSNumber *iso;
@property(readonly, nonatomic) NSNumber *digitalZoomRatio;
@property(readonly, nonatomic) NSNumber *focalLengthIn35mm;
@property(readonly, nonatomic) NSNumber *focalLength;
@property(readonly, nonatomic) NSNumber *flashCompensation;
@property(readonly, nonatomic) NSNumber *flashValue;
@property(readonly, nonatomic) _Bool flashFired;
@property(readonly, nonatomic) NSNumber *exposureBias;
@property(readonly, nonatomic) NSNumber *focusDistance;
@property(readonly, nonatomic) NSNumber *focusMode;
@property(readonly, nonatomic) NSArray *focusPoints;
@property(readonly, nonatomic) _Bool hasDepthDataAndIsNotRenderedSDOF;
@property(readonly, nonatomic) _Bool isPortrait;
@property(readonly, nonatomic) _Bool isPanorama;
@property(readonly, nonatomic) long long customRendered;
@property(readonly, nonatomic) _Bool hasCustomRendered;
@property(readonly, nonatomic) _Bool isDeferredPhotoProxyExpectingDepth;
@property(readonly, nonatomic) _Bool isDeferredPhotoProxy;
@property(readonly, nonatomic) NSArray *keywords;
@property(readonly, nonatomic) NSDate *gpsDateTime;
@property(readonly, nonatomic) NSString *imageDirectionRef;
@property(readonly, nonatomic) NSNumber *imageDirection;
@property(readonly, nonatomic) NSNumber *gpsHPositioningError;
@property(readonly, nonatomic) NSString *speedRef;
@property(readonly, nonatomic) NSNumber *speed;
@property(readonly, nonatomic) NSNumber *altitude;
@property(readonly, nonatomic) struct CGImageMetadata *cgImageMetadata;
@property(readonly, nonatomic) _Bool sourceIsImageSourceProxy;
@property(readonly, nonatomic) struct CGImageSource *imageSource;
@property(readonly, nonatomic) NSData *imageData;
@property(readonly, nonatomic) NSDictionary *cgImageProperties;
- (PFMetadata *)metadataForImagePropertiesAtIndex:(unsigned long long)arg1;
- (void)enumerateRawThumbnailInfoWithBlock:(void (^)(double, double, unsigned long long, unsigned long long, unsigned int, _Bool *))arg1;
@end


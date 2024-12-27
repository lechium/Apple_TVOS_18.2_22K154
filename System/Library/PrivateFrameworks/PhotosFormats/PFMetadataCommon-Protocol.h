//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation, NSArray, NSDate, NSDictionary, NSNumber, NSString, NSTimeZone, NSURL, PFTimeZoneLookup, UTType;

@protocol PFMetadataCommon
@property(readonly, nonatomic) NSNumber *playbackVariation;
@property(readonly, nonatomic) _Bool isSpatialMedia;
@property(readonly, nonatomic) _Bool isSyndicationOriginated;
@property(readonly, nonatomic) NSDictionary *syndicationProperties;
@property(readonly, nonatomic) NSArray *keywords;
@property(readonly, nonatomic) NSString *artworkContentDescription;
@property(readonly, nonatomic) NSNumber *longitude;
@property(readonly, nonatomic) NSNumber *latitude;
@property(readonly, nonatomic) CLLocation *gpsLocation;
@property(readonly, nonatomic) NSString *renderOriginatingAssetIdentifier;
@property(readonly, nonatomic) NSString *originatingAssetIdentifier;
@property(readonly, nonatomic) NSString *livePhotoPairingIdentifier;
@property(readonly, nonatomic) _Bool isHDR_ExtendedRange;
@property(readonly, nonatomic) _Bool isHDR_TS22028_5;
@property(readonly, nonatomic) _Bool isHDR;
@property(readonly, nonatomic) _Bool isSpatialOverCapture;
@property(readonly, nonatomic) NSString *spatialOverCaptureIdentifier;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *captionAbstract;
@property(readonly, nonatomic) NSString *cameraModel;
@property(readonly, nonatomic) NSString *cameraMake;
@property(readonly, nonatomic) _Bool isMovie;
@property(readonly, nonatomic) _Bool isImage;
@property(readonly, nonatomic) NSNumber *timeZoneOffset;
@property(readonly, nonatomic) NSString *timeZoneName;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) NSString *creationDateString;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) long long creationDateSource;
@property(readonly, nonatomic) NSDate *utcCreationDate;
@property(readonly, nonatomic) NSDictionary *fileSystemProperties;
@property(readonly, nonatomic) long long orientation;
@property(readonly, nonatomic) struct CGSize orientedPixelSize;
@property(readonly, nonatomic) struct CGSize exifPixelSize;
@property(readonly, nonatomic) UTType *contentType;
@property(readonly, nonatomic) NSDate *fileModificationDate;
@property(readonly, nonatomic) NSDate *fileCreationDate;
@property(readonly, nonatomic) unsigned long long fileSize;
@property(readonly, nonatomic) NSString *originalFileName;
@property(readonly, nonatomic) NSURL *fileURL;
@property(readonly, nonatomic) PFTimeZoneLookup *timeZoneLookup;
@property(readonly, nonatomic) long long sourceType;
@end


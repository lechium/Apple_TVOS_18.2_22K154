//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSArray, NSString, PHAssetCollection, PHPhotoLibrary;
@protocol PGHighlightModelChangeRequest;

@protocol PGHighlightModel <NSObject>
+ (NSArray *)fetchParentDayGroupHighlightsForDayHighlights:(NSArray *)arg1;
@property(readonly, nonatomic) _Bool isUpToDate;
@property(readonly, nonatomic) PHAssetCollection *assetCollection;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic, getter=isRecent) _Bool recent;
@property(readonly, nonatomic) unsigned short sharingComposition;
@property(nonatomic) unsigned short enrichmentState;
@property(nonatomic) unsigned short type;
@property(readonly, nonatomic) unsigned short kind;
- (id <PGHighlightModelChangeRequest>)changeRequest;
- (double)nonDefaultCurationScorePercentageForPhotoLibrary:(PHPhotoLibrary *)arg1;
- (double)faceAnalysisProgressForPhotoLibrary:(PHPhotoLibrary *)arg1;
- (double)sceneAnalysisProgressForPhotoLibrary:(PHPhotoLibrary *)arg1;
@end


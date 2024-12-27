//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PXSyntheticAsset.h"

@class NSData, NSSet, NSString, PFVideoAdjustments;
@protocol PXDisplayAsset;

@interface PXSyntheticAsset (PXStoryResource)
@property(readonly, nonatomic) long long px_storyResourceFetchFaceCount;
@property(readonly, nonatomic) double px_storyResourceFetchCurationScore;
@property(readonly, nonatomic) NSSet *px_storyResourceFetchSceneClassifications;
@property(readonly, nonatomic) PFVideoAdjustments *px_storyResourceFetchVideoAdjustments;
@property(readonly, nonatomic) NSData *px_storyResourceFetchNormalizationData;
@property(readonly, nonatomic) struct CGRect px_storyResourceFetchBestPlaybackRect;
@property(readonly, nonatomic) CDStruct_3c1748cc px_storyResourceFetchBestPlaybackRange;
@property(readonly, nonatomic) id <PXDisplayAsset> px_storyResourceDisplayAsset;
@property(readonly, nonatomic) long long px_storyResourceKind;
@property(readonly, nonatomic) NSString *px_storyResourceIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


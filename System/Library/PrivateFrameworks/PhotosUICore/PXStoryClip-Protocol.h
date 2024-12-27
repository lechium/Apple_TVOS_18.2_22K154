//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PFStoryRecipeDisplayAssetNormalization;
@protocol PXStoryClip, PXStoryResource;

@protocol PXStoryClip <NSObject>
@property(readonly, nonatomic) unsigned long long hash;
@property(readonly, nonatomic) PFStoryRecipeDisplayAssetNormalization *colorNormalization;
@property(readonly, nonatomic) CDStruct_3c1748cc videoTimeRange;
@property(readonly, nonatomic) CDStruct_60782414 info;
@property(readonly, nonatomic) id <PXStoryResource> resource;
@property(readonly, nonatomic) long long identifier;
- (id <PXStoryClip>)copyWithInfo:(CDStruct_60782414)arg1;
- (_Bool)isVisuallyEqualToClip:(id <PXStoryClip>)arg1;
- (_Bool)isEqualToClip:(id <PXStoryClip>)arg1;
- (CDStruct_3c1748cc)playbackTimeRangeForClipDuration:(double)arg1;
@end


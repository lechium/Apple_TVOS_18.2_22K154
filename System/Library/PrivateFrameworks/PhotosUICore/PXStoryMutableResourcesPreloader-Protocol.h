//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXStoryResourcesPreloadingRequest;

@protocol PXStoryMutableResourcesPreloader
@property(nonatomic) long long currentSegmentIdentifier;
@property(nonatomic) CDStruct_198678f7 currentPlaybackTime;
- (void)cancelProcessingAllRequests;
- (void)startProcessingRequest:(PXStoryResourcesPreloadingRequest *)arg1;
@end


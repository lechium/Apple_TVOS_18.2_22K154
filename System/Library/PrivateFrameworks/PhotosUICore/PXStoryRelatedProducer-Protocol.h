//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSProgress, PXStoryConfiguration, PXStoryRelatedMusicCurationParameters;

@protocol PXStoryRelatedProducer
- (NSProgress *)requestConfigurationsRelatedToConfiguration:(PXStoryConfiguration *)arg1 withOptions:(unsigned long long)arg2 musicCurationParameters:(PXStoryRelatedMusicCurationParameters *)arg3 resultHandler:(void (^)(PXStoryProducerResult *))arg4;
@end


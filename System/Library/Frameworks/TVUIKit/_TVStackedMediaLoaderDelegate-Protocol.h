//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVUIKit/NSObject-Protocol.h>

@class AVPlayerLayer, _TVStackedMediaDocumentEntry, _TVStackedMediaLoader;

@protocol _TVStackedMediaLoaderDelegate <NSObject>
- (void)stackedMediaLoaderVideoToPreviewTransitionCompleted:(_TVStackedMediaLoader *)arg1;
- (void)stackedMediaLoaderReadyToTransitionVideoToPreview:(_TVStackedMediaLoader *)arg1;
- (void)stackedMediaLoaderPreviewToVideoTransitionCompleted:(_TVStackedMediaLoader *)arg1;
- (void)stackedMediaLoaderReadyToTransitionPreviewToVideo:(_TVStackedMediaLoader *)arg1;
- (void)stackedMediaLoader:(_TVStackedMediaLoader *)arg1 failedToLoadVideoForEntry:(_TVStackedMediaDocumentEntry *)arg2;
- (void)stackedMediaLoader:(_TVStackedMediaLoader *)arg1 readyWithPlayerLayer:(AVPlayerLayer *)arg2 forEntry:(_TVStackedMediaDocumentEntry *)arg3;
@end


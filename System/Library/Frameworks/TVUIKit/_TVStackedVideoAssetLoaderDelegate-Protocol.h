//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVUIKit/NSObject-Protocol.h>

@class AVPlayerLayer, NSError, _TVStackedMediaDocumentEntry, _TVStackedVideoAssetLoader;

@protocol _TVStackedVideoAssetLoaderDelegate <NSObject>
- (void)stackedVideoAssetLoader:(_TVStackedVideoAssetLoader *)arg1 completedWithSuccess:(_Bool)arg2 playerLayer:(AVPlayerLayer *)arg3 error:(NSError *)arg4 forEntry:(_TVStackedMediaDocumentEntry *)arg5;
@end


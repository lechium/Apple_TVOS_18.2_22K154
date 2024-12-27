//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/NSObject-Protocol.h>

@class NSObject, TVPRelatedContent, TVPRelatedContentLoader;
@protocol TVPMediaItem;

@protocol TVPRelatedContentLoaderDelegate <NSObject>
- (void)loadRelatedContentForMediaItem:(NSObject<TVPMediaItem> *)arg1 withCompletionHandler:(void (^)(TVPRelatedContent *))arg2;

@optional
- (_Bool)relatedContentLoader:(TVPRelatedContentLoader *)arg1 shouldShowRelatedContent:(TVPRelatedContent *)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>
#import <VideosUI/TVPMediaItemReporting-Protocol.h>

@class NSError, NSObject, NSString, NSURL, TVPResourceLoadingRequest, TVPSecureKeyRequest;
@protocol TVPMediaItem;

@protocol TVPMediaItem <NSObject, TVPMediaItemReporting>
- (void)performMediaItemMetadataTransactionWithBlock:(void (^)(void))arg1;
- (void)removeMediaItemMetadataForProperty:(NSString *)arg1;
- (void)setMediaItemMetadata:(id)arg1 forProperty:(NSString *)arg2;
- (id)mediaItemMetadataForProperty:(NSString *)arg1;
- (_Bool)hasTrait:(NSString *)arg1;
- (_Bool)isEqualToMediaItem:(NSObject<TVPMediaItem> *)arg1;
- (NSURL *)mediaItemURL;

@optional
- (void)processFinishedDownloadWithCompletion:(void (^)(NSError *))arg1;
- (_Bool)shouldRetryPlaybackForError:(NSError *)arg1;
- (NSError *)replacementErrorForPlaybackError:(NSError *)arg1;
- (void)cleanUpMediaItem;
- (_Bool)loadResourceForRequest:(TVPResourceLoadingRequest *)arg1;
- (void)loadStreamingKeyForRequest:(TVPSecureKeyRequest *)arg1;
- (void)prepareForPlaybackInitiationWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)prepareForLoadingWithCompletion:(void (^)(_Bool, NSError *))arg1;
@end


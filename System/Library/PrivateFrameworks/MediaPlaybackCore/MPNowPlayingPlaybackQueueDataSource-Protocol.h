//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPNowPlayingContentItem, MPNowPlayingInfoCenter, NSArray, NSDictionary, NSError, NSProgress, NSString;
@protocol MPNowPlayingInfoTransportableSessionRequest;

@protocol MPNowPlayingPlaybackQueueDataSource <NSObject>
- (MPNowPlayingContentItem *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 contentItemForID:(NSString *)arg2;
- (NSString *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 contentItemIDForOffset:(long long)arg2;

@optional
- (MPNowPlayingContentItem *)contentItemForOffset:(long long)arg1;
- (void)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 didEndMigrationWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 willBeginSessionMigrationWithIdentifier:(NSString *)arg2;
- (void)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 getTransportablePlaybackSessionRepresentationForRequest:(id <MPNowPlayingInfoTransportableSessionRequest>)arg2 completion:(void (^)(MPNowPlayingInfoTransportableSessionResponse *, NSError *))arg3;
- (void)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 getTransportablePlaybackSessionRepresentationWithCompletion:(void (^)(NSData *, NSError *))arg2;
- (NSString *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 childContentItemIDAtIndex:(long long)arg2 ofItem:(MPNowPlayingContentItem *)arg3;
- (NSArray *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 contentItemIDsFromOffset:(long long)arg2 toOffset:(long long)arg3 nowPlayingIndex:(long long *)arg4;
- (NSProgress *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 currentLanguageOptionsForContentItem:(MPNowPlayingContentItem *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (NSProgress *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 availableLanguageOptionsForContentItem:(MPNowPlayingContentItem *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (NSProgress *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 transcriptAlignmentsForContentItem:(MPNowPlayingContentItem *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (NSProgress *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 infoForContentItem:(MPNowPlayingContentItem *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (NSProgress *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 lyricsForContentItem:(MPNowPlayingContentItem *)arg2 completion:(void (^)(MPNowPlayingInfoLyricsItem *, NSError *))arg3;
- (NSProgress *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 remoteArtworkForContentItem:(MPNowPlayingContentItem *)arg2 format:(NSString *)arg3 size:(struct CGSize)arg4 completion:(void (^)(MPNowPlayingContentItemRemoteArtwork *, NSError *))arg5;
- (NSProgress *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 artworkForContentItem:(MPNowPlayingContentItem *)arg2 size:(struct CGSize)arg3 completion:(void (^)(UIImage *, NSError *))arg4;
- (NSDictionary *)playbackQueueAuxilaryNowPlayingInfoForNowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1;
- (NSDictionary *)playbackQueuePropertiesForNowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1;
- (NSString *)playbackQueueIdentifierForNowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1;
@end


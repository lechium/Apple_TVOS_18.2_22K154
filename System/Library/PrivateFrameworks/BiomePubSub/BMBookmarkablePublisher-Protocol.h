//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomePubSub/BPSPublisher-Protocol.h>

@class BMBookmarkNode, BPSPublisher, NSArray, NSError;
@protocol BMBookmark, BMBookmarkablePublisher;

@protocol BMBookmarkablePublisher <BPSPublisher>
+ (_Bool)isPipelineBookmarkable:(BPSPublisher *)arg1;
+ (NSArray *)bookmarkablePublishersFromPublishers:(NSArray *)arg1;
+ (BPSPublisher<BMBookmarkablePublisher> *)publisherWithPublisher:(BPSPublisher<BMBookmarkablePublisher> *)arg1 upstreams:(NSArray *)arg2 bookmarkState:(id <BMBookmark>)arg3;
@property(readonly, nonatomic) NSArray *bookmarkableUpstreams;
- (void)applyBookmarkNode:(BMBookmarkNode *)arg1;
- (NSError *)validateBookmarkNode:(BMBookmarkNode *)arg1;
- (BMBookmarkNode *)bookmarkNode;
- (void)applyBookmark:(id <BMBookmark>)arg1;
- (NSError *)validateBookmark:(id <BMBookmark>)arg1;
- (id <BMBookmark>)bookmark;
- (_Bool)canStoreInternalStateInBookmark;
- (_Bool)canStorePassThroughValueInBookmark;
- (BPSPublisher<BMBookmarkablePublisher> *)withBookmark:(id <BMBookmark>)arg1;
@end


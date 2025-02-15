//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/MPCQueueControllerBehavior-Protocol.h>

@class MPAVItem, MPSetPlaybackQueueCommandEvent, NSDictionary, NSEnumerator, NSString;
@protocol MPCQueueControllerBehaviorHost, MPCQueueControllerItemIdentifierComponents;

@protocol MPCQueueControllerBehaviorImplementation <MPCQueueControllerBehavior>
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) long long playbackPositionRestorationPolicy;
@property(readonly, nonatomic) __weak id <MPCQueueControllerBehaviorHost> host;
@property(readonly, copy, nonatomic) NSString *sessionID;
- (MPAVItem *)_itemForContentItemID:(NSString *)arg1;
- (void)currentItemDidChangeFromContentItemID:(NSString *)arg1 toContentItemID:(NSString *)arg2;
- (NSDictionary *)_stateDictionaryIncludingQueue:(_Bool)arg1;
- (NSEnumerator *)contentItemIDEnumeratorStartingAfterContentItemID:(NSString *)arg1 mode:(long long)arg2 options:(unsigned long long)arg3;
- (_Bool)canNextItemFromContentItemID:(NSString *)arg1 reason:(id *)arg2;
- (_Bool)canPreviousItemFromContentItemID:(NSString *)arg1 reason:(id *)arg2;
- (_Bool)canJumpToContentItemID:(NSString *)arg1 reason:(id *)arg2;
- (_Bool)itemExistsForContentItemID:(NSString *)arg1;
- (id <MPCQueueControllerItemIdentifierComponents>)componentsForContentItemID:(NSString *)arg1;
- (void)activeItemFlagsDidChange:(unsigned short)arg1;
- (NSString *)performLoadCommand:(MPSetPlaybackQueueCommandEvent *)arg1 completion:(void (^)(NSError *))arg2;
- (void)disconnectFromHost:(id <MPCQueueControllerBehaviorHost>)arg1;
- (void)connectToHost:(id <MPCQueueControllerBehaviorHost>)arg1;
- (id)initWithSessionID:(NSString *)arg1;

@optional
- (void)didDisconnectFromHost:(id <MPCQueueControllerBehaviorHost>)arg1;
- (void)didConnectToHost:(id <MPCQueueControllerBehaviorHost>)arg1;
@end


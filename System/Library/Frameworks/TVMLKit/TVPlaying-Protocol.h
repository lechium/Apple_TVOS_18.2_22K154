//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/NSObject-Protocol.h>

@class AVPlayer, NSArray, NSDate, NSDictionary, NSString, TVMediaItem, TVPlaylist;
@protocol TVPlayerBridging;

@protocol TVPlaying <NSObject>
@property(readonly, nonatomic) long long modifier;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) double duration;
@property(retain, nonatomic) NSDate *elapsedDate;
@property(nonatomic) double elapsedTime;
@property(retain, nonatomic) TVPlaylist *playlist;
@property(readonly, nonatomic) TVMediaItem *currentMediaItem;
@property(nonatomic) __weak id <TVPlayerBridging> bridge;
@property(readonly, nonatomic) AVPlayer *avPlayer;
- (void)stop;
- (void)play;
- (void)begin;

@optional
@property(nonatomic) _Bool preventsSleepDuringVideoPlayback;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly, nonatomic) _Bool currentMediaItemHasVideoContent;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) TVMediaItem *previousMediaItem;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"TVMediaItem",?,R,N

@property(readonly, nonatomic) TVMediaItem *nextMediaItem;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"TVMediaItem",?,R,N

@property(nonatomic) long long resumeMenuBehavior;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) _Bool showsResumeMenu;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic, getter=isMuted) _Bool muted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisMuted

@property(nonatomic) double scanRate;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(retain, nonatomic) NSDictionary *userInfo;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSDictionary",?,&,N

- (NSArray *)errorLogs;
- (NSArray *)accessLogs;
- (NSDate *)playbackDate;
- (void)reset;
- (void)stopObservingEvent:(NSString *)arg1;
- (void)startObservingEvent:(NSString *)arg1 extraInfo:(NSDictionary *)arg2;
- (void)changeToMediaItemAtIndex:(long long)arg1;
- (void)previous;
- (void)next;
- (void)pause;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPCPlaybackEngineEventStream, MPCPlaybackIntent, NSString;
@protocol MPCPlaybackEngineEventObserving;

@protocol MPCQueueControllerPlaybackEngine <NSObject>
@property(readonly, nonatomic) MPCPlaybackEngineEventStream *eventStream;
@property(readonly, copy, nonatomic) NSString *hostingSharedSessionID;
@property(readonly, copy, nonatomic) MPCPlaybackIntent *fallbackPlaybackIntent;
@property(readonly, copy, nonatomic) NSString *playerID;
@property(readonly, copy, nonatomic) NSString *engineID;
- (void)removeEngineObserver:(id <MPCPlaybackEngineEventObserving>)arg1;
- (void)addEngineObserver:(id <MPCPlaybackEngineEventObserving>)arg1;
@end


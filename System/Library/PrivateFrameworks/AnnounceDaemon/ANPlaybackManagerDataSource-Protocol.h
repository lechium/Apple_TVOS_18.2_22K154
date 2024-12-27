//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnounceDaemon/NSObject-Protocol.h>

@class ANPlaybackManager, NSArray;

@protocol ANPlaybackManagerDataSource <NSObject>
- (NSArray *)playbackManager:(ANPlaybackManager *)arg1 announcementsForIdentifiers:(NSArray *)arg2;
- (NSArray *)announcementsForPlaybackManager:(ANPlaybackManager *)arg1;
- (void)cleanUpOldAnnouncementsForPlaybackManager:(ANPlaybackManager *)arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameRecord, MISSING_TYPE, NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI18DashboardPresenter
{
    MISSING_TYPE *pageMetricsPresenter;	// 0 = 0x0
    MISSING_TYPE *launchContext;	// 8286 = 0x205e
    MISSING_TYPE *request;	// 0 = 0x0
    MISSING_TYPE *shouldUseLargeTitle;	// 3372706 = 0x3376a2
    MISSING_TYPE *gameRecord;	// 0 = 0x0
    MISSING_TYPE *primarySections;	// 0 = 0x0
    MISSING_TYPE *secondarySections;	// 0 = 0x0
    MISSING_TYPE *game;	// 0 = 0x0
    MISSING_TYPE *scrollToIndexPath;	// 2147484680 = 0x80000408
    MISSING_TYPE *didScrollToIndexPath;	// 6 = 0x6
    MISSING_TYPE *scrollToActivityInfo;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *onFriendRequestsCountChanged;	// 1818784869 = 0x6c687465
    MISSING_TYPE *sections;	// 0 = 0x0
    MISSING_TYPE *requiredData;	// 0 = 0x0
    MISSING_TYPE *requiredDataPresenter;	// 0 = 0x0
}

+ (void)presentLeaderboardsFrom:(id)arg1 request:(id)arg2 gameRecord:(id)arg3 leaderboard:(id)arg4 leaderboardSet:(id)arg5 animated:(_Bool)arg6;	// IMP=0x0060000000151bb3
+ (void)processLeaderboardRequestFrom:(id)arg1 request:(id)arg2 gameRecord:(id)arg3;	// IMP=0x00600000001517f3
- (void).cxx_destruct;	// IMP=0x00000000001534d7
- (id)initWithPlayerId:(id)arg1;	// IMP=0x00000000001533b4
- (void)loadMoreActivityFeedWithContinuationToken:(id)arg1;	// IMP=0x000000000015332c
- (void)presentPlayerProfileFrom:(id)arg1 request:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000153267
- (void)presentChallengesFrom:(id)arg1 gameRecord:(id)arg2 shouldShowPlayForChallenge:(_Bool)arg3;	// IMP=0x000000000015269b
- (void)presentAchievementsFrom:(id)arg1 request:(id)arg2 gameRecord:(id)arg3;	// IMP=0x0000000000152302
- (void)presentLeaderboardsFrom:(id)arg1 request:(id)arg2 gameBundleID:(id)arg3;	// IMP=0x0000000000151d8f
- (void)updateSnapshot;	// IMP=0x0000000000150102
- (void)fetchGameRecordAfterAuthenticationFor:(id)arg1;	// IMP=0x000000000015005b
- (void)fetchDashboardRequiredDataWithForce:(_Bool)arg1;	// IMP=0x0000000000150035
- (void)handleViewDidLoad;	// IMP=0x000000000014f8ae
@property(nonatomic) _Bool didScrollToIndexPath; // @synthesize didScrollToIndexPath;
@property(nonatomic, copy) NSIndexPath *scrollToIndexPath;
@property(nonatomic) _Bool displayInSplitView;
@property(nonatomic, retain) GKGameRecord *gameRecord; // @synthesize gameRecord;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic) _Bool shouldUseLargeTitle; // @synthesize shouldUseLargeTitle;

@end


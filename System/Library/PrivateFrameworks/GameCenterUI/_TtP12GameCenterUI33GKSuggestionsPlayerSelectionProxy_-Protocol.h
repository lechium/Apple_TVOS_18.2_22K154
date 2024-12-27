//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKPlayer, NSArray, NSIndexPath, NSString, _TtC12GameCenterUI22GKSuggestedPlayerGroup;

@protocol _TtP12GameCenterUI33GKSuggestionsPlayerSelectionProxy_
- (void)didAttemptSelectingAlreadySelectedPlayers:(NSArray *)arg1 inGroup:(_TtC12GameCenterUI22GKSuggestedPlayerGroup *)arg2;
- (void)donateGroupToPeopleSuggester:(_TtC12GameCenterUI22GKSuggestedPlayerGroup *)arg1;
- (_Bool)playerIsSelected:(GKPlayer *)arg1;
- (_Bool)playerIsSelectable:(GKPlayer *)arg1;
- (NSArray *)getSuggestedPlayerGroups;
- (void)didExceedAvailablePlayers;
- (void)didDeselectPlayers:(NSArray *)arg1 indexPath:(NSIndexPath *)arg2 dataSourceIdentifier:(NSString *)arg3 completion:(void (^)(void))arg4;
- (void)didDeselectPlayerGroup:(_TtC12GameCenterUI22GKSuggestedPlayerGroup *)arg1 indexPath:(NSIndexPath *)arg2 dataSourceIdentifier:(NSString *)arg3 completion:(void (^)(void))arg4;
- (void)didSelectPlayers:(NSArray *)arg1 indexPath:(NSIndexPath *)arg2 dataSourceIdentifier:(NSString *)arg3 completion:(void (^)(void))arg4;
- (void)didSelectPlayerGroup:(_TtC12GameCenterUI22GKSuggestedPlayerGroup *)arg1 indexPath:(NSIndexPath *)arg2 dataSourceIdentifier:(NSString *)arg3 completion:(void (^)(void))arg4;
- (long long)getMaxPlayerCount;
- (long long)getSelectedPlayerCount;
@end


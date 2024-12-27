//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMemoryAssetsPickerPresenter-Protocol.h>

@class NSSet, PXGViewControllerTransition, PXStoryErrorRepository;
@protocol NSObject, PXAudioAsset, PXAudioAssetFetchResult, PXDisplayAsset;

@protocol PXStoryViewActionPerformer <PXMemoryAssetsPickerPresenter>
- (void)performActionForChromeActionMenuItem:(long long)arg1 withValue:(long long)arg2 sender:(id)arg3;
- (id <NSObject>)musicFeedbackContextMenuDelegateWithAudioAssetProvidingBlock:(id <PXAudioAsset> (^)(void))arg1;
- (void)deleteMemory;
- (void)removeAssetsFromCuration:(NSSet *)arg1;
- (void)makeAssetKeyPhoto:(id <PXDisplayAsset>)arg1;
- (void)presentTitleEditor;
- (void)toggleMuteState;
- (void)toggleFavoriteState;
- (void)showVisualDiagnostics;
- (void)provideFeedback;
- (void)copyInternalURL;
- (void)fileRadarForErrorRepository:(PXStoryErrorRepository *)arg1;
- (void)fileRadar;
- (void)presentSharingViewWithSender:(id)arg1;
- (PXGViewControllerTransition *)dismissStoryViewControllerInteractively;
- (void)dismissStoryViewController;
- (void)deleteCurrentChapter;
- (void)presentChapterInsertor;
- (void)presentChapterEditor;
- (void)presentColorGradeEditor;
- (void)presentMusicEditor;
- (void)dismissAppleMusicPreview;
- (void)presentAppleMusicPreviewForSelectedSong:(id <PXAudioAsset>)arg1 curatedSongs:(id <PXAudioAssetFetchResult>)arg2;
- (void)presentBrowserGrid;
- (void)presentStyleSwitcher;

@optional
@property(readonly, nonatomic) _Bool needs79067616Workaround;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@end


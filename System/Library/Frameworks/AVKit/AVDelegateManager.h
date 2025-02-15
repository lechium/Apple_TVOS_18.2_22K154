//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerViewController;
@protocol AVPlayerViewControllerDelegate><AVPlayerViewControllerDelegatePrivate, AVPlayerViewControllerPlaybackDelegate><NSObject, AVScanningDelegate;

__attribute__((visibility("hidden")))
@interface AVDelegateManager : NSObject
{
    id <AVPlayerViewControllerDelegate><AVPlayerViewControllerDelegatePrivate> _delegate;	// 8 = 0x8
    id <AVPlayerViewControllerPlaybackDelegate><NSObject> _privateDelegate;	// 16 = 0x10
    id <AVScanningDelegate> _scanningDelegate;	// 24 = 0x18
    AVPlayerViewController *_playerViewController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001441b6
@property(readonly) __weak AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(nonatomic) __weak id <AVScanningDelegate> scanningDelegate; // @synthesize scanningDelegate=_scanningDelegate;
@property(nonatomic) __weak id <AVPlayerViewControllerPlaybackDelegate><NSObject> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property(nonatomic) __weak id <AVPlayerViewControllerDelegate><AVPlayerViewControllerDelegatePrivate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_hasStopScanning;	// IMP=0x00000000001440af
- (id)delegateIfRespondsTo:(SEL)arg1;	// IMP=0x000000000014403f
- (void)willTransitionToVisibilityOfTransportBar:(_Bool)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000143f6c
- (_Bool)shouldPresentContentProposal:(id)arg1;	// IMP=0x0000000000143e96
- (void)didRejectContentProposal:(id)arg1;	// IMP=0x0000000000143dca
@property(readonly, nonatomic) _Bool handlesRejectContentProposal;
- (void)didAcceptContentProposal:(id)arg1;	// IMP=0x0000000000143cb8
@property(readonly, nonatomic) _Bool supportsContentProposals;
- (void)didFinishSeek;	// IMP=0x0000000000143bb1
- (void)didFinishScanning;	// IMP=0x0000000000143af0
- (void)shouldScanAtRate:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001439f7
- (void)shouldPauseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000143908
- (void)shouldSeekToDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001437e9
- (void)shouldSeekToTime:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001436eb
- (void)shouldPlayFromTime:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001435ed
- (_Bool)shouldHandleScanningForPlayerItem:(id)arg1;	// IMP=0x0000000000143501
- (void)stopScanning;	// IMP=0x0000000000143455
- (long long)scanFromElapsedTime:(CDStruct_1b6d18a9)arg1 rate:(double)arg2 imageBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000143285
@property(readonly, nonatomic) _Bool hasCustomScanning;
- (id)previousChannelInterstitialViewController;	// IMP=0x0000000000143140
- (id)nextChannelInterstitialViewController;	// IMP=0x0000000000143079
@property(readonly, nonatomic) _Bool hasChannelSkipping;
- (void)skipToPreviousChannel:(CDUnknownBlockType)arg1;	// IMP=0x0000000000142f47
- (void)skipToNextChannel:(CDUnknownBlockType)arg1;	// IMP=0x0000000000142e5b
- (void)skipToPreviousItem;	// IMP=0x0000000000142d9a
- (void)skipToNextItem;	// IMP=0x0000000000142cd9
- (void)willShowContextualActions;	// IMP=0x0000000000142c14
- (void)willHideContextualActions;	// IMP=0x0000000000142b52
- (void)didSelectExternalSubtitleOptionLanguage:(id)arg1;	// IMP=0x0000000000142a86
- (void)didSelectMediaSelectionOption:(id)arg1 inMediaSelectionGroup:(id)arg2;	// IMP=0x000000000014286a
- (CDStruct_1b6d18a9)timeToSeekAfterUserNavigatedFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000142745
- (id)displayNameForMediaSelectionOption:(id)arg1;	// IMP=0x0000000000142661
- (void)willResumePlaybackAfterUserNavigatedFromDate:(id)arg1 toDate:(id)arg2;	// IMP=0x0000000000142575
- (void)willResumePlaybackAfterUserNavigatedFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000014242e
- (void)didPresentInterstitialGroup:(id)arg1;	// IMP=0x0000000000142362
- (void)willPresentInterstitialGroup:(id)arg1;	// IMP=0x0000000000142296
- (void)didEndDismissalTransition;	// IMP=0x00000000001421de
- (void)willBeginDismissalTransition;	// IMP=0x0000000000142126
- (_Bool)shouldDismiss;	// IMP=0x000000000014207a
@property(readonly, nonatomic, getter=isScanningSupportedByMainDelegate) _Bool scanningSupportedByMainDelegate;
- (id)initWithPlayerViewController:(id)arg1;	// IMP=0x0000000000141f23

@end


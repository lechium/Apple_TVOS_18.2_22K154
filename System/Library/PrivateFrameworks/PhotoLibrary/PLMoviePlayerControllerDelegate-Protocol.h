//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibrary/NSObject-Protocol.h>

@class NSDictionary, PLMoviePlayerController;

@protocol PLMoviePlayerControllerDelegate <NSObject>
- (void)moviePlayerHeadsetPreviousTrackPressed:(PLMoviePlayerController *)arg1;
- (void)moviePlayerHeadsetNextTrackPressed:(PLMoviePlayerController *)arg1;
- (void)moviePlayerHeadsetPlayPausePressed:(PLMoviePlayerController *)arg1;
- (NSDictionary *)moviePlayerRequestsPickedAirplayRoute:(PLMoviePlayerController *)arg1;
- (void)moviePlayerDidChangeExternalPlaybackType:(PLMoviePlayerController *)arg1;
- (_Bool)moviePlayerControllerShouldAllowExternalPlayback:(PLMoviePlayerController *)arg1;
- (_Bool)moviePlayerShouldNotifyOnPreparationError:(PLMoviePlayerController *)arg1;
- (void)moviePlayerEncounteredAuthenticationError:(PLMoviePlayerController *)arg1;
- (void)moviePlayerWasSuspendedDuringPlayback:(PLMoviePlayerController *)arg1;
- (void)moviePlayerUpdatedDestinationPlaceholder:(PLMoviePlayerController *)arg1;
- (void)moviePlayerDurationAvailable:(PLMoviePlayerController *)arg1;
- (void)moviePlayerPlaybackDidEnd:(PLMoviePlayerController *)arg1;
- (void)moviePlayerPlaybackRateDidChange:(PLMoviePlayerController *)arg1;
- (void)moviePlayerPlaybackStateDidChange:(PLMoviePlayerController *)arg1 fromPlaybackState:(unsigned long long)arg2;
- (void)moviePlayerBufferingStateDidChange:(PLMoviePlayerController *)arg1;
- (void)moviePlayerReadyToDisplay:(PLMoviePlayerController *)arg1;
- (void)moviePlayerReadyToPlay:(PLMoviePlayerController *)arg1;
- (_Bool)moviePlayerExitRequest:(PLMoviePlayerController *)arg1 exitReason:(int)arg2;
- (void)moviePlayerControllerWillResignAsActiveController:(PLMoviePlayerController *)arg1;
- (void)moviePlayerControllerDidBecomeActiveController:(PLMoviePlayerController *)arg1;
@end


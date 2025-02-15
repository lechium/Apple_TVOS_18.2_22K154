//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXEventRepresentation;

@protocol VOTEventFactoryCallbackProtocol
- (void)handleTurnOffSoundAndCurtainEvent:(AXEventRepresentation *)arg1;
- (void)handleUnsetForcedOrientationAndAnnounce:(_Bool)arg1;
- (void)handleSetForcedOrientation:(long long)arg1 shouldAnnounce:(_Bool)arg2;
- (void)handleReturnToSpringBoard;
- (void)handleSystemWideServerDied;
- (void)handleOrientationChanged;
- (void)handleProximityEvent:(AXEventRepresentation *)arg1;
- (void)handleRingerSwitchSwitched:(AXEventRepresentation *)arg1;
- (void)handlePlayPauseKeyPress:(AXEventRepresentation *)arg1;
- (void)handleLockButtonPress:(AXEventRepresentation *)arg1;
- (void)handleMenuButtonPress:(AXEventRepresentation *)arg1;
- (void)handleVolumeButtonPress:(AXEventRepresentation *)arg1;
- (void)handleAppleTVRemoteEvent:(AXEventRepresentation *)arg1 eventOrigin:(long long)arg2 isRTL:(_Bool)arg3;
- (void)handleKeyboardKeyEvent:(AXEventRepresentation *)arg1 eventOrigin:(long long)arg2;
@end


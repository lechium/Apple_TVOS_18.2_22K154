//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, PBSScheduledSleep, TVSSMenuModeBannerContext;
@protocol FBSDisplayLayoutElement><PBSDisplayLayoutElement;

@interface TVSSMutableMenuModeState
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0020000000088770
@property(retain, nonatomic) PBSScheduledSleep *currentScheduledSleep; // @dynamic currentScheduledSleep;
@property(nonatomic, getter=isDictating) _Bool dictating; // @dynamic dictating;
@property(nonatomic) long long siriPresentationVisibility; // @dynamic siriPresentationVisibility;
@property(copy, nonatomic) NSString *faceTimePlatterState; // @dynamic faceTimePlatterState;
@property(nonatomic, getter=isFaceTimeActive) _Bool faceTimeActive; // @dynamic faceTimeActive;
@property(nonatomic) long long playbackControlsState; // @dynamic playbackControlsState;
@property(nonatomic, getter=isMicInUse) _Bool micInUse; // @dynamic micInUse;
@property(nonatomic, getter=isCameraInUse) _Bool cameraInUse; // @dynamic cameraInUse;
@property(nonatomic, getter=isLocationInUse) _Bool locationInUse; // @dynamic locationInUse;
@property(retain, nonatomic) TVSSMenuModeBannerContext *bannerContext; // @dynamic bannerContext;
@property(nonatomic, getter=isPipActive) _Bool pipActive; // @dynamic pipActive;
@property(nonatomic, getter=isSplitViewVisible) _Bool splitViewVisible; // @dynamic splitViewVisible;
@property(nonatomic) _Bool hasUserAttention; // @dynamic hasUserAttention;
@property(retain, nonatomic) NSNumber *interactionRequestReason; // @dynamic interactionRequestReason;
@property(nonatomic) _Bool headboardRequestedVisibility; // @dynamic headboardRequestedVisibility;
@property(retain, nonatomic) id <FBSDisplayLayoutElement><PBSDisplayLayoutElement> keyboardFocusedElement; // @dynamic keyboardFocusedElement;
@property(retain, nonatomic) id <FBSDisplayLayoutElement><PBSDisplayLayoutElement> focusedApp; // @dynamic focusedApp;

@end


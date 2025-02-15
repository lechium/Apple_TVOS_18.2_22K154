//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSDisplayLayoutElement.h>

@class NSString;

@interface FBSDisplayLayoutElement (SMUSystemDisplayLayoutElement)
@property(readonly, nonatomic) _Bool smu_isBrightnessControlHUD;
@property(readonly, nonatomic) _Bool smu_isSystemNotification;
@property(readonly, nonatomic) _Bool smu_isVolumeHUD;
@property(readonly, nonatomic) _Bool smu_isControlCenter;
@property(readonly, nonatomic) _Bool smu_isSystemIndicator;
@property(readonly, nonatomic) _Bool smu_isSystemOverlay;
@property(readonly, nonatomic) _Bool smu_isPictureInPictureStashed;
@property(readonly, nonatomic) _Bool smu_isPictureInPicture;
- (id)extendedDescription;	// IMP=0x0020000000006ef3

// Remaining properties
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) long long level;
@property(readonly, nonatomic) struct CGRect referenceFrame;
@property(readonly) Class superclass;
@end


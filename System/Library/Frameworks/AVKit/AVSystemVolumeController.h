//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVSystemController, NSNumber, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVSystemVolumeController : NSObject
{
    NSObject<OS_dispatch_queue> *_systemControllerQueue;	// 8 = 0x8
    _Bool _observingSystemController;	// 16 = 0x10
    _Bool _changingVolume;	// 17 = 0x11
    _Bool _currentRouteHasVolumeControl;	// 18 = 0x12
    _Bool _volumeChangesThrottled;	// 19 = 0x13
    _Bool _fullyInitialized;	// 20 = 0x14
    float _volume;	// 24 = 0x18
    AVSystemController *_sharedSystemController;	// 32 = 0x20
    NSNumber *_targetVolumeInternal;	// 40 = 0x28
    NSNumber *_maximumTargetVolumeSinceChangingVolumeBegan;	// 48 = 0x30
    NSString *_volumeCategory;	// 56 = 0x38
    NSString *_uniqueIdentifier;	// 64 = 0x40
}

+ (id)volumeController;	// IMP=0x0010000000119881
- (void).cxx_destruct;	// IMP=0x0000000000119437
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic, getter=isFullyInitialized) _Bool fullyInitialized; // @synthesize fullyInitialized=_fullyInitialized;
@property(readonly, nonatomic) NSString *volumeCategory; // @synthesize volumeCategory=_volumeCategory;
@property(retain, nonatomic) NSNumber *maximumTargetVolumeSinceChangingVolumeBegan; // @synthesize maximumTargetVolumeSinceChangingVolumeBegan=_maximumTargetVolumeSinceChangingVolumeBegan;
@property(retain, nonatomic) NSNumber *targetVolumeInternal; // @synthesize targetVolumeInternal=_targetVolumeInternal;
@property(nonatomic) _Bool volumeChangesThrottled; // @synthesize volumeChangesThrottled=_volumeChangesThrottled;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool currentRouteHasVolumeControl; // @synthesize currentRouteHasVolumeControl=_currentRouteHasVolumeControl;
@property(nonatomic, getter=isChangingVolume) _Bool changingVolume; // @synthesize changingVolume=_changingVolume;
@property(retain, nonatomic) AVSystemController *sharedSystemController; // @synthesize sharedSystemController=_sharedSystemController;
- (void)_performOnMainThread:(CDUnknownBlockType)arg1;	// IMP=0x00000000001192a8
- (void)_applyProposedVolumeImmediately;	// IMP=0x00000000001190dd
- (void)_applyProposedVolumeIfNeeded;	// IMP=0x0000000000118db5
- (void)_handleCurrentRouteHasVolumeControlDidChangeNotification:(id)arg1;	// IMP=0x0000000000118cf0
- (void)_handleSystemVolumeDidChangeNotification:(id)arg1;	// IMP=0x0000000000118a76
- (void)_handleSystemControllerServerDiedNotification;	// IMP=0x0000000000118a37
- (void)_unobserveSystemControllerIfNeeded;	// IMP=0x0000000000118931
- (void)_observeSystemControllerIfNeeded;	// IMP=0x000000000011881a
- (void)_setupSystemController;	// IMP=0x0000000000118797
- (id)_requestSharedSystemController;	// IMP=0x000000000011877e
- (void)_postNotificationForNameIfFullyInitialized:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000000001186d8
- (id)currentSystemController;	// IMP=0x00000000001185d2
- (void)setVolume:(float)arg1 shouldShowHUD:(_Bool)arg2;	// IMP=0x00000000001184c2
- (void)dealloc;	// IMP=0x0000000000118484
- (id)init;	// IMP=0x00000000001183f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


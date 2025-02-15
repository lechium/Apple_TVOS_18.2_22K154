//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class BMHomeKitClientAccessoryControlStream, BMHomeKitClientActionSetStream, BMHomeKitClientMediaAccessoryControlStream, NSNotificationCenter, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDBiomeEventManager : HMFObject
{
    BMHomeKitClientActionSetStream *_actionSetStream;	// 8 = 0x8
    BMHomeKitClientMediaAccessoryControlStream *_mediaAccessoryStream;	// 16 = 0x10
    BMHomeKitClientAccessoryControlStream *_hapAccessoryStream;	// 24 = 0x18
    CDUnknownBlockType _prunableStreamFactory;	// 32 = 0x20
    NSNotificationCenter *_notificationCenter;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000005af640
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) CDUnknownBlockType prunableStreamFactory; // @synthesize prunableStreamFactory=_prunableStreamFactory;
@property(readonly) BMHomeKitClientAccessoryControlStream *hapAccessoryStream; // @synthesize hapAccessoryStream=_hapAccessoryStream;
@property(readonly) BMHomeKitClientMediaAccessoryControlStream *mediaAccessoryStream; // @synthesize mediaAccessoryStream=_mediaAccessoryStream;
@property(readonly) BMHomeKitClientActionSetStream *actionSetStream; // @synthesize actionSetStream=_actionSetStream;
- (void)_submitMediaAccessoryEvent:(id)arg1;	// IMP=0x00000000005af506
- (void)submitMediaAccessoryEvent:(id)arg1;	// IMP=0x00000000005af44e
- (void)_submitAccessoryEvent:(id)arg1;	// IMP=0x00000000005af398
- (void)submitAccessoryEvent:(id)arg1;	// IMP=0x00000000005af2e0
- (void)_submitActionSetEvent:(id)arg1;	// IMP=0x00000000005af22a
- (void)submitActionSetEvent:(id)arg1;	// IMP=0x00000000005af172
- (void)deleteAllEvents;	// IMP=0x00000000005af0ba
- (void)fetchMostRecentEventWithCharacteristicType:(id)arg1 serviceType:(id)arg2 homeSPIClientIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000005aef35
- (void)_handleActionSetEmptiedNotification:(id)arg1;	// IMP=0x00000000005aec15
- (void)_handleServiceRemovedNotification:(id)arg1;	// IMP=0x00000000005ae7cd
- (void)_handleAccessoryRemovedNotification:(id)arg1;	// IMP=0x00000000005ae46c
- (void)_handleHomeRemovedNotification:(id)arg1;	// IMP=0x00000000005ae26e
- (id)init;	// IMP=0x00000000005ae11b
- (id)initWithNotificationCenter:(id)arg1 actionSetStream:(id)arg2 mediaAccessoryStream:(id)arg3 accessoryStream:(id)arg4 prunableStreamFactory:(CDUnknownBlockType)arg5 workQueue:(id)arg6;	// IMP=0x00000000005adeb9

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSString;
@protocol HMDCameraBulletinBoard, HMDFileManager, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraClipUserNotificationCenter : HMFObject
{
    NSString *_logIdentifier;	// 8 = 0x8
    id <HMDCameraBulletinBoard> _bulletinBoard;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    id <HMDFileManager> _fileManager;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000d3d27c
- (void).cxx_destruct;	// IMP=0x0000000000d3cfa5
@property(readonly) id <HMDFileManager> fileManager; // @synthesize fileManager=_fileManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) id <HMDCameraBulletinBoard> bulletinBoard; // @synthesize bulletinBoard=_bulletinBoard;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (id)_firstAvailableHeroFrameURLForSignificantEvents:(id)arg1 cameraProfile:(id)arg2;	// IMP=0x0000000000d3ccd2
- (id)_writeHeroFrameData:(id)arg1;	// IMP=0x0000000000d3c8cc
- (void)_insertClipSignificantEventBulletin:(id)arg1;	// IMP=0x0000000000d3c702
- (void)removeCachedHeroFrameImages;	// IMP=0x0000000000d3c5c2
- (void)removeEventNotificationsForCameraProfile:(id)arg1;	// IMP=0x0000000000d3c45e
- (void)removeEventNotificationForClipWithUUID:(id)arg1;	// IMP=0x0000000000d3c2dc
- (void)postNotificationForBulletin:(id)arg1 significantEvent:(id)arg2;	// IMP=0x0000000000d3c054
- (id)bulletinForClipSignificantEvent:(id)arg1 cameraProfile:(id)arg2;	// IMP=0x0000000000d3baad
- (id)initWithBulletinBoard:(id)arg1 workQueue:(id)arg2 logIdentifier:(id)arg3 fileManager:(id)arg4;	// IMP=0x0000000000d3b9b0
- (id)initWithBulletinBoard:(id)arg1 workQueue:(id)arg2 logIdentifier:(id)arg3;	// IMP=0x0000000000d3b911

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAudioAnalysisEventBulletinNotificationRegistration, HMDBulletinNotificationRegistrationSource;

__attribute__((visibility("hidden")))
@interface HMDAudioAnalysisEventBulletinNotificationRegistrationRemote : HMFObject
{
    HMDAudioAnalysisEventBulletinNotificationRegistration *_registration;	// 8 = 0x8
    HMDBulletinNotificationRegistrationSource *_source;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000009873bd
@property(readonly, copy) HMDBulletinNotificationRegistrationSource *source; // @synthesize source=_source;
@property(readonly, copy) HMDAudioAnalysisEventBulletinNotificationRegistration *registration; // @synthesize registration=_registration;
- (id)attributeDescriptions;	// IMP=0x0000000000987273
- (id)initWithAudioAnalysisEventBulletinNotificationRegistration:(id)arg1 source:(id)arg2;	// IMP=0x00000000009871d1

@end


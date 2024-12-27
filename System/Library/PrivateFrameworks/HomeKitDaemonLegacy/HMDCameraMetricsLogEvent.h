//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMHomeLogEvent.h>

@class HMDAccessory, HMDCameraSessionID;

__attribute__((visibility("hidden")))
@interface HMDCameraMetricsLogEvent : HMMHomeLogEvent
{
    _Bool _isLocal;	// 8 = 0x8
    HMDCameraSessionID *_sessionID;	// 16 = 0x10
    HMDAccessory *_accessory;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000075cdd5
@property(readonly) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) HMDCameraSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(_Bool)arg3;	// IMP=0x000000000075cc9c

@end


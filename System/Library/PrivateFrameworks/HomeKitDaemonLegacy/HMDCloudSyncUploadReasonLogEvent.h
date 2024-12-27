//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCloudSyncUploadReasonLogEvent : HMMLogEvent
{
    long long _legacyPushCount;	// 8 = 0x8
    long long _homeZonePushCount;	// 16 = 0x10
    long long _homeManagerPushCount;	// 24 = 0x18
    NSString *_saveReason;	// 32 = 0x20
}

+ (id)uploadReason:(id)arg1 acceptedHomeManagerZonePush:(_Bool)arg2;	// IMP=0x006000000054dfdc
+ (id)uploadReason:(id)arg1 acceptedHomeZonePush:(_Bool)arg2;	// IMP=0x006000000054df75
+ (id)uploadReason:(id)arg1 acceptedLegacyPush:(_Bool)arg2;	// IMP=0x006000000054df0e
- (void).cxx_destruct;	// IMP=0x000000000054defb
@property(readonly, nonatomic) NSString *saveReason; // @synthesize saveReason=_saveReason;
@property(readonly) long long homeManagerPushCount; // @synthesize homeManagerPushCount=_homeManagerPushCount;
@property(readonly) long long homeZonePushCount; // @synthesize homeZonePushCount=_homeZonePushCount;
@property(readonly) long long legacyPushCount; // @synthesize legacyPushCount=_legacyPushCount;
- (id)initWithUploadReason:(id)arg1 legacyPushCount:(long long)arg2 homeZonePushCount:(long long)arg3 homeManagerPushCount:(long long)arg4;	// IMP=0x000000000054de12

@end


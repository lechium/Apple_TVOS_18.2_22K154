//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

__attribute__((visibility("hidden")))
@interface HMDSoftwareUpdateStartedEvent : HMMLogEvent
{
    _Bool _automaticUpdateEnabled;	// 8 = 0x8
}

+ (id)eventUpdateStartedWithAutomaticUpdateEnabled:(_Bool)arg1;	// IMP=0x0060000000786ecd
@property(nonatomic, getter=isAutomaticUpdateEnabled) _Bool automaticUpdateEnabled; // @synthesize automaticUpdateEnabled=_automaticUpdateEnabled;

@end


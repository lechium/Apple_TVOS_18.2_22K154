//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

__attribute__((visibility("hidden")))
@interface HMDSoftwareUpdateAutomaticUpdateToggledEvent : HMMLogEvent
{
    _Bool _enabled;	// 8 = 0x8
}

+ (id)eventWithAutomaticUpdateEnabled:(_Bool)arg1;	// IMP=0x0060000000a5109b
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;

@end


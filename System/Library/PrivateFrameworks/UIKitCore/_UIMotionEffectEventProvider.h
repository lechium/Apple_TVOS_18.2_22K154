//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _UIMotionEffectEventConsumer;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEventProvider : NSObject
{
    id <_UIMotionEffectEventConsumer> _consumer;	// 8 = 0x8
}

@property id <_UIMotionEffectEventConsumer> consumer; // @synthesize consumer=_consumer;
- (double)slowUpdateIntervalForLogs;	// IMP=0x0000000000f961d6
- (double)fastUpdateIntervalForLogs;	// IMP=0x0000000000f961c8
- (_Bool)wantsSynchronizedUpdates;	// IMP=0x0000000000f961c0
- (_Bool)shouldLogEvents;	// IMP=0x0000000000f961b8
- (id)currentEvent;	// IMP=0x0000000000f961b0
- (void)setSlowUpdatesEnabled:(_Bool)arg1;	// IMP=0x0000000000f961aa
- (void)stopGeneratingEvents;	// IMP=0x0000000000f961a4
- (void)startGeneratingEvents;	// IMP=0x0000000000f9619e

@end


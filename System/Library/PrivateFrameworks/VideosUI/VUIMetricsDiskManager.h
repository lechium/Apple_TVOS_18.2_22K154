//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface VUIMetricsDiskManager : NSObject
{
    MISSING_TYPE *sessionDefaults;	// 8 = 0x8
    MISSING_TYPE *eventDefaults;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00100000004b3bfa
- (void).cxx_destruct;	// IMP=0x00000000004b3d6a
- (id)init;	// IMP=0x00000000004b3d37
- (id)initWithSessionSuiteName:(id)arg1 eventSuiteName:(id)arg2;	// IMP=0x00000000004b3cb8
- (void)clearAllData;	// IMP=0x00000000004b542c
- (id)allEvents;	// IMP=0x00000000004b522e
- (id)allSessions;	// IMP=0x00000000004b4ef3
- (id)sessionForEvent:(id)arg1;	// IMP=0x00000000004b4b7b
- (id)eventsForSession:(id)arg1;	// IMP=0x00000000004b4a2a
- (void)writeEvent:(id)arg1;	// IMP=0x00000000004b4488
- (void)writeSession:(id)arg1;	// IMP=0x00000000004b4379

@end


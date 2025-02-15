//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIEvent.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIWheelEvent : UIEvent
{
    long long _recentScrollDistance;	// 32 = 0x20
    NSMutableArray *_recentScrollEvents;	// 40 = 0x28
    long long lastSubtype;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000113e5b7
- (double)_wheelVelocity;	// IMP=0x000000000113e562
- (_Bool)_canHaveVelocity;	// IMP=0x000000000113e542
- (void)_sendEventToResponder:(id)arg1;	// IMP=0x000000000113e527
- (long long)subtype;	// IMP=0x000000000113e4d4
- (long long)type;	// IMP=0x000000000113e4c9
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000000113e186

@end


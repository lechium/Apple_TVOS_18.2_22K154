//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIEvent.h"

__attribute__((visibility("hidden")))
@interface UIMoveEvent : UIEvent
{
    long long _moveDirection;	// 8 = 0x8
    unsigned long long _focusHeading;	// 16 = 0x10
}

@property(nonatomic, setter=_setFocusHeading:) unsigned long long _focusHeading; // @synthesize _focusHeading;
@property(nonatomic, setter=_setMoveDirection:) long long _moveDirection; // @synthesize _moveDirection;
- (void)_sendEventToResponder:(id)arg1;	// IMP=0x0000000001130d39
- (long long)type;	// IMP=0x0000000001130d2e

@end


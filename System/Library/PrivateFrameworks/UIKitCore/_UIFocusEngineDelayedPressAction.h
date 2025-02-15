//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIFocusEventRecognizer;

__attribute__((visibility("hidden")))
@interface _UIFocusEngineDelayedPressAction : NSObject
{
    _UIFocusEventRecognizer *_sender;	// 8 = 0x8
    long long _pressType;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
}

+ (void)sendDelayedPressWithType:(long long)arg1 timestamp:(double)arg2 sender:(id)arg3;	// IMP=0x00600000009561f9
- (void).cxx_destruct;	// IMP=0x0000000000956633
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long pressType; // @synthesize pressType=_pressType;
@property(readonly, nonatomic) __weak _UIFocusEventRecognizer *sender; // @synthesize sender=_sender;
- (void)_sendPressEvent;	// IMP=0x00000000009562eb
- (id)_initWithPressType:(long long)arg1 timestamp:(double)arg2 sender:(id)arg3;	// IMP=0x00000000009560ff

@end


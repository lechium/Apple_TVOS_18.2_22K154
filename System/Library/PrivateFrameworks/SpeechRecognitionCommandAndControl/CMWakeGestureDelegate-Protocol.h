//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpeechRecognitionCommandAndControl/NSObject-Protocol.h>

@class CMWakeGestureEvent, CMWakeGestureManager;

@protocol CMWakeGestureDelegate <NSObject>

@optional
- (void)wakeGestureManager:(CMWakeGestureManager *)arg1 didUpdateWakeGestureEvent:(CMWakeGestureEvent *)arg2;
- (void)wakeGestureManager:(CMWakeGestureManager *)arg1 didUpdateWakeGesture:(long long)arg2 orientation:(int)arg3 detectedAt:(unsigned long long)arg4;
- (void)wakeGestureManager:(CMWakeGestureManager *)arg1 didUpdateWakeGesture:(long long)arg2 orientation:(int)arg3;
- (void)wakeGestureManager:(CMWakeGestureManager *)arg1 didUpdateWakeGesture:(long long)arg2 type:(long long)arg3 detectedAt:(unsigned long long)arg4;
- (void)wakeGestureManager:(CMWakeGestureManager *)arg1 didUpdateWakeGesture:(long long)arg2 detectedAt:(unsigned long long)arg3;
- (void)wakeGestureManager:(CMWakeGestureManager *)arg1 didUpdateWakeGesture:(long long)arg2;
@end


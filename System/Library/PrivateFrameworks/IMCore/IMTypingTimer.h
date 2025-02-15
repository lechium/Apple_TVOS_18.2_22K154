//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMHandle, NSDate, NSTimer;
@protocol IMTypingTimerDelegate;

@interface IMTypingTimer : NSObject
{
    id <IMTypingTimerDelegate> _delegate;	// 8 = 0x8
    IMHandle *_handle;	// 16 = 0x10
    NSDate *_beginDate;	// 24 = 0x18
    double _timeoutInterval;	// 32 = 0x20
    NSTimer *_timer;	// 40 = 0x28
}

+ (_Bool)shouldAdjustTimeoutIntervalForBeginDate;	// IMP=0x0060000000084847
- (void).cxx_destruct;	// IMP=0x0000000000084d68
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(readonly, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(readonly, copy, nonatomic) IMHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) __weak id <IMTypingTimerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)invalidate;	// IMP=0x0000000000084c69
- (void)triggerTimeout;	// IMP=0x0000000000084b44
- (void)timerCallback;	// IMP=0x0000000000084a21
- (id)initWithHandle:(id)arg1 beginDate:(id)arg2 timeoutInterval:(double)arg3 delegate:(id)arg4;	// IMP=0x000000000008484f

@end


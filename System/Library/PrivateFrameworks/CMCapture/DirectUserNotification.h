//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CMCaptureUserNotification.h"

__attribute__((visibility("hidden")))
@interface DirectUserNotification : CMCaptureUserNotification
{
    struct __CFUserNotification *_notification;	// 8 = 0x8
}

- (id)cancel;	// IMP=0x000000000004f360
- (id)updateWithTimeout:(double)arg1 flags:(unsigned long long)arg2 dictionary:(id)arg3;	// IMP=0x000000000004f26c
- (void)asyncResponse:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000004f1c7
- (unsigned long long)receiveResponseWithTimeout:(double)arg1 error:(id *)arg2;	// IMP=0x000000000004f0bb
- (void)dealloc;	// IMP=0x000000000004f075
- (id)initNotificationWithTimeout:(double)arg1 flags:(unsigned long long)arg2 dictionary:(id)arg3 error:(id *)arg4;	// IMP=0x000000000004ef04

@end


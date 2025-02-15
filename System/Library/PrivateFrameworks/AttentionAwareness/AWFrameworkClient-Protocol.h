//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AttentionAwareness/NSObject-Protocol.h>

@class AWAttentionEvent;

@protocol AWFrameworkClient <NSObject>
- (void)notifyStreamingEvent:(AWAttentionEvent *)arg1;
- (void)notifyPollEventType:(unsigned long long)arg1 event:(AWAttentionEvent *)arg2;
- (void)notifyEvent:(AWAttentionEvent *)arg1;
- (void)notify:(unsigned long long)arg1;
@end


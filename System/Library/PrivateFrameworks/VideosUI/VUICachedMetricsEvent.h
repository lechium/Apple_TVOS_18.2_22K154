//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUICachedMetricsEvent : NSObject
{
    NSString *_eventType;	// 8 = 0x8
    NSDictionary *_eventData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001b5e3f
@property(copy, nonatomic) NSDictionary *eventData; // @synthesize eventData=_eventData;
@property(copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (id)initWithEventType:(id)arg1 eventData:(id)arg2;	// IMP=0x00000000001b5d54

@end


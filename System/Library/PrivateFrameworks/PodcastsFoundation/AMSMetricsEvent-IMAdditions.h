//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSString;

@interface AMSMetricsEvent (IMAdditions)
+ (id)im_defaultTopicForEvents;	// IMP=0x002000000004f31d
+ (id)im_eventWithTopic:(id)arg1 eventType:(id)arg2;	// IMP=0x002000000004f290
+ (id)im_eventWithDefaultTopicAndEventType:(id)arg1;	// IMP=0x002000000004f22a
+ (id)im_pageEventWithDefaultTopic;	// IMP=0x002000000004f211
+ (id)im_clickEventWithDefaultTopic;	// IMP=0x002000000004f1f8
+ (id)im_eventWithDefaultTopic;	// IMP=0x002000000004f101
- (void)im_setProperty:(id)arg1 forBodyKey:(id)arg2;	// IMP=0x0010000000010aa5
- (void)im_addPropertiesWithDictionary:(id)arg1;	// IMP=0x0010000000010a56
- (id)shortDescription;	// IMP=0x001000000004f494
@property(retain, nonatomic, setter=im_setToken:) NSString *im_token;
@property(retain, nonatomic, setter=im_setContentIdentifier:) id im_contentIdentifier;
@property(retain, nonatomic, setter=im_setName:) NSString *im_name;
@end


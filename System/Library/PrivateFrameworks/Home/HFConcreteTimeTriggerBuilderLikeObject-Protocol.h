//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSObject-Protocol.h>

@class HFEventBuilder, NSArray, NSString, NSTimeZone;
@protocol HFConcreteTimeTriggerBuilderLikeObject, HFTimeEventBuilder;

@protocol HFConcreteTimeTriggerBuilderLikeObject <NSObject>
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(copy, nonatomic) NSArray *recurrences;
@property(retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;
@property(readonly, nonatomic) __weak NSString *name;
- (void)copyCurrentStateFromTriggerBuilder:(id <HFConcreteTimeTriggerBuilderLikeObject>)arg1;
- (void)triggerEnabledStateDidChange:(_Bool)arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAnalyticsAttributeEventData, HMDAnalyticsCalendarEventData, HMDAnalyticsCharacteristicEventData, HMDAnalyticsCharacteristicThresholdEventData, HMDAnalyticsDurationEventData, HMDAnalyticsLocationEventData, HMDAnalyticsPresenceEventData, HMDAnalyticsSignificantTimeEventData;

__attribute__((visibility("hidden")))
@interface HMDAnalyticsTriggerEventData : HMFObject
{
    _Bool _endEvent;	// 8 = 0x8
    HMDAnalyticsCalendarEventData *_calendarEvent;	// 16 = 0x10
    HMDAnalyticsCharacteristicEventData *_charEvent;	// 24 = 0x18
    HMDAnalyticsAttributeEventData *_attributeEvent;	// 32 = 0x20
    HMDAnalyticsCharacteristicThresholdEventData *_charThresholdEvent;	// 40 = 0x28
    HMDAnalyticsDurationEventData *_durationEvent;	// 48 = 0x30
    HMDAnalyticsLocationEventData *_locationEvent;	// 56 = 0x38
    HMDAnalyticsPresenceEventData *_presenceEvent;	// 64 = 0x40
    HMDAnalyticsSignificantTimeEventData *_significantTimeEvent;	// 72 = 0x48
    HMDAnalyticsCharacteristicThresholdEventData *_thresholdEvent;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000084de9d
@property(nonatomic) _Bool endEvent; // @synthesize endEvent=_endEvent;
@property(retain, nonatomic) HMDAnalyticsCharacteristicThresholdEventData *thresholdEvent; // @synthesize thresholdEvent=_thresholdEvent;
@property(retain, nonatomic) HMDAnalyticsSignificantTimeEventData *significantTimeEvent; // @synthesize significantTimeEvent=_significantTimeEvent;
@property(retain, nonatomic) HMDAnalyticsPresenceEventData *presenceEvent; // @synthesize presenceEvent=_presenceEvent;
@property(retain, nonatomic) HMDAnalyticsLocationEventData *locationEvent; // @synthesize locationEvent=_locationEvent;
@property(retain, nonatomic) HMDAnalyticsDurationEventData *durationEvent; // @synthesize durationEvent=_durationEvent;
@property(retain, nonatomic) HMDAnalyticsCharacteristicThresholdEventData *charThresholdEvent; // @synthesize charThresholdEvent=_charThresholdEvent;
@property(retain, nonatomic) HMDAnalyticsAttributeEventData *attributeEvent; // @synthesize attributeEvent=_attributeEvent;
@property(retain, nonatomic) HMDAnalyticsCharacteristicEventData *charEvent; // @synthesize charEvent=_charEvent;
@property(retain, nonatomic) HMDAnalyticsCalendarEventData *calendarEvent; // @synthesize calendarEvent=_calendarEvent;

@end


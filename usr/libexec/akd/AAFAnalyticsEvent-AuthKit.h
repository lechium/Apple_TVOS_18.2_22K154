//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AAAFoundation/AAFAnalyticsEvent.h>

@interface AAFAnalyticsEvent (AuthKit)
+ (id)ak_analyticsEventWithContext:(id)arg1 client:(id)arg2 eventName:(id)arg3 error:(id)arg4;	// IMP=0x001000000006dd0a
+ (id)ak_analyticsEventWithContext:(id)arg1 eventName:(id)arg2 error:(id)arg3;	// IMP=0x001000000006dba8
+ (id)ak_analyticsEventWithEventName:(id)arg1 account:(id)arg2 error:(id)arg3;	// IMP=0x001000000006da10
+ (id)ak_analyticsEventWithEventName:(id)arg1 error:(id)arg2;	// IMP=0x001000000006d94b
- (void)ak_updateWithAuthenticationResults:(id)arg1 authContext:(id)arg2 error:(id)arg3;	// IMP=0x002000000006ddbc
- (void)ak_updateTelemetryIdWithAccount:(id)arg1;	// IMP=0x001000000006dacd
@end


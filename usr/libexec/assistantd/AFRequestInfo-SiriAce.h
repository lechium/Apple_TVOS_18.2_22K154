//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFRequestInfo.h>

@interface AFRequestInfo (SiriAce)
+ (id)_createAnnounceIncomingCallRequest:(id)arg1;	// IMP=0x00200000003249ad
+ (id)_announceIncomingCallRequestInfoFromRequest:(id)arg1;	// IMP=0x00100000003248bd
+ (id)_createAnnounceInHomeRequestFromSKIAnnouncePayload:(id)arg1;	// IMP=0x00100000003247e1
+ (id)_createAnnounceWorkoutReminderRequestFromSKIAnnouncePayload:(id)arg1 announceNotificationRequest:(id)arg2;	// IMP=0x001000000032472d
+ (id)_createAnnounceWorkoutVoiceFeedbackRequestFromSKIAnnouncePayload:(id)arg1 skiAnnouncePayload:(id)arg2;	// IMP=0x0010000000324657
+ (id)_updateStartLocalRequest:(id)arg1 withNewAnnouncePayload:(id)arg2 forAnnouncementType:(long long)arg3;	// IMP=0x001000000032450c
+ (id)_announceNotificationRequestInfoFromNotificationRequest:(id)arg1 previousRequest:(id)arg2 synchronousBurstIndex:(unsigned long long)arg3 isMediaPlaying:(_Bool)arg4;	// IMP=0x0010000000323f99
+ (id)requestInfoFromAnnouncementRequest:(id)arg1 previousRequest:(id)arg2 synchronousBurstIndex:(unsigned long long)arg3 isMediaPlaying:(_Bool)arg4;	// IMP=0x0010000000323deb
- (void)_ad_setHandoffPayload:(id)arg1;	// IMP=0x00100000002568e1
- (id)_ad_speechRequestOptionsWithClientConfiguration:(id)arg1;	// IMP=0x001000000025662e
- (id)_ad_localRequestCommandWithRequestHelper:(id)arg1;	// IMP=0x001000000025656e
- (id)_ad_requestCommandWithRequestHelper:(id)arg1;	// IMP=0x001000000025647e
@end


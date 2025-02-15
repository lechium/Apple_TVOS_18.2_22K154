//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SABaseCommand.h>

@interface SABaseCommand (DeviceRouting)
+ (_Bool)ad_shouldClassLogToMetrics;	// IMP=0x00200000003758cd
- (id)ad_executionDeviceForDeviceContextTuples:(id)arg1 executionContext:(id)arg2 proximityMap:(id)arg3 sharedUserID:(id)arg4 localDeviceIsFollower:(_Bool)arg5;	// IMP=0x00200000000de760
- (_Bool)ad_requiresProximityInformationForDeviceContextTuples:(id)arg1;	// IMP=0x00100000000de758
- (_Bool)ad_requiresDeviceContext;	// IMP=0x00100000000de750
- (long long)resultCallbackCode;	// IMP=0x0010000000243c0a
- (_Bool)ad_shouldBeHandledByClientAsResponseToCommand:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0010000000243c37
- (_Bool)ad_shouldIgnoreCallbacksOnReply;	// IMP=0x0010000000243c2f
- (_Bool)ad_sendReplyEvenIfCallbacksExist;	// IMP=0x0010000000243c27
- (_Bool)ad_hasCallbacks;	// IMP=0x0010000000243c1f
- (id)ad_callbacks;	// IMP=0x0010000000243c17
- (_Bool)_adui_presentsUIResponseInTranscript;	// IMP=0x0010000000284d56
- (void)_adui_handleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000284c76
- (_Bool)_adui_shouldBeHandledByAssistantd;	// IMP=0x0010000000284c6e
- (long long)ad_getNetworkActivityTracingLabel;	// IMP=0x00100000003754a1
- (_Bool)ad_requiresResponse;	// IMP=0x0010000000375499
- (id)ad_deferredMetricsContext;	// IMP=0x00100000003753e5
- (_Bool)ad_shouldLogToMetrics;	// IMP=0x00100000003753cb
- (_Bool)ad_willHaveReply;	// IMP=0x00100000003753c3
@property(retain, nonatomic, setter=ad_setParentRequest:) SABaseCommand *ad_parentRequest;
@end


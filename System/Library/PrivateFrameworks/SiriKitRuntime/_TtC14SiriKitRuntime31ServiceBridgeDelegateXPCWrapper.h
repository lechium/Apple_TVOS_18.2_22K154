//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC14SiriKitRuntime31ServiceBridgeDelegateXPCWrapper : _TtCs12_SwiftObject
{
    MISSING_TYPE *wrapped;	// 16 = 0x10
}

- (void)postToMessageBusWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002dbba0
- (void)submitExternalActivationRequestWithRequestInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002db7a0
- (void)fetchRecentDialogsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002db3d0
- (void)closeServerRequestForExecutionRequestId:(id)arg1;	// IMP=0x00000000002db040
- (void)retriggerOriginalRequestWithExecutionRequestId:(id)arg1 forUserId:(id)arg2 givenCurrentExecutionRequestId:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000002dac10
- (void)fetchSpeechInfoWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002da7c0
- (void)fetchContextsFor:(id)arg1 includesNearByDevices:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002da4f0
- (void)prepareForAudioHandoffFailedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002da110
- (void)prepareForAudioHandoffWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002d9e90
- (void)fallbackToInfoDomainResultsForResultCandidateId:(id)arg1;	// IMP=0x00000000002d9c00
- (void)fallbackToServerForResultCandidateId:(id)arg1;	// IMP=0x00000000002d99a0
- (void)flowPluginWillExecuteWithFlowPluginInfo:(id)arg1;	// IMP=0x00000000002d96a0
- (void)closeWithExecutionOutput:(id)arg1 needsUserInput:(_Bool)arg2;	// IMP=0x00000000002d9340
- (void)closeWithExecutionOutput:(id)arg1 errorString:(id)arg2;	// IMP=0x00000000002d8fb0
- (void)closeWithExecutionOutput:(id)arg1;	// IMP=0x00000000002d8d60
- (void)submitWithExecutionOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d8ad0

@end


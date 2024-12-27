//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAttSiriSpeechRecognitionNode, CSAttSiriTCUGenerator, CSConnectionListener, NSString;

@interface CSAttSiriBridgeMessageHandler : NSObject
{
    _Bool _supportTCU;	// 8 = 0x8
    CSAttSiriSpeechRecognitionNode *_speechRecognitionNode;	// 16 = 0x10
    CSAttSiriTCUGenerator *_tcuGenerator;	// 24 = 0x18
    CSConnectionListener *_localSRBridgeListener;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000010d04b
@property(retain, nonatomic) CSConnectionListener *localSRBridgeListener; // @synthesize localSRBridgeListener=_localSRBridgeListener;
@property(nonatomic) _Bool supportTCU; // @synthesize supportTCU=_supportTCU;
@property(retain, nonatomic) CSAttSiriTCUGenerator *tcuGenerator; // @synthesize tcuGenerator=_tcuGenerator;
@property(retain, nonatomic) CSAttSiriSpeechRecognitionNode *speechRecognitionNode; // @synthesize speechRecognitionNode=_speechRecognitionNode;
- (void)assetUpdatedRequired;	// IMP=0x001000000010cf26
- (void)attSiriNode:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x001000000010cf20
- (void)attSiriNode:(id)arg1 didDetectEndpointEventAtTime:(double)arg2 eventType:(long long)arg3 withMetrics:(id)arg4 useEndpointerSignal:(_Bool)arg5;	// IMP=0x001000000010ccfa
- (void)attSiriNode:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 usesAutomaticEndPointing:(_Bool)arg4;	// IMP=0x001000000010ccf4
- (void)didGenerateContinuityEnd:(id)arg1;	// IMP=0x001000000010cbc2
- (void)didGenerateMultiUserTRPCandidatePackage:(id)arg1;	// IMP=0x001000000010ca90
- (void)didGenerateTRPDetector:(id)arg1;	// IMP=0x001000000010c95e
- (void)didGenerateTRPCandidatePackage:(id)arg1;	// IMP=0x001000000010c82c
- (void)didCompleteRecognitionTaskWithStatistics:(id)arg1 requestId:(id)arg2 endpointMode:(long long)arg3 error:(id)arg4;	// IMP=0x001000000010c675
- (void)didReceivePartialResultPackageWithRequestId:(id)arg1 language:(id)arg2 package:(id)arg3 metadata:(id)arg4;	// IMP=0x001000000010c476
- (void)didReceivePartialResultWithRequestId:(id)arg1 language:(id)arg2 tokens:(id)arg3 metadata:(id)arg4;	// IMP=0x001000000010c277
- (void)didReceivePartialResultWithRequestId:(id)arg1 language:(id)arg2 tokens:(id)arg3;	// IMP=0x001000000010c0d7
- (void)didReceiveFinalResultWithRequestId:(id)arg1 multiUserSpeechPackage:(id)arg2 taskName:(id)arg3;	// IMP=0x001000000010beb4
- (void)didReceiveFinalResultWithRequestId:(id)arg1 speechPackage:(id)arg2 metadata:(id)arg3 taskName:(id)arg4;	// IMP=0x001000000010bcd4
- (void)didReceiveFinalResultWithRequestId:(id)arg1 speechPackage:(id)arg2 taskName:(id)arg3;	// IMP=0x001000000010bb45
- (void)didReceiveFinalResultCandidateWithRequestId:(id)arg1 speechPackage:(id)arg2;	// IMP=0x001000000010b9db
- (void)didReceiveVoiceCommandCandidateWithRequestId:(id)arg1 speechPackage:(id)arg2 metadata:(id)arg3;	// IMP=0x001000000010b846
- (void)didReceiveResultCandidateWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 multiUserSpeechPackage:(id)arg3 topUserSpeechPackage:(id)arg4 duration:(double)arg5 taskName:(id)arg6;	// IMP=0x001000000010b5e8
- (void)didReceiveResultCandidateWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 speechPackage:(id)arg3 duration:(double)arg4 metadata:(id)arg5 taskName:(id)arg6;	// IMP=0x001000000010b404
- (void)didReceiveResultCandidateWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 inputOrigin:(id)arg3 speechPackage:(id)arg4 duration:(double)arg5 taskName:(id)arg6;	// IMP=0x001000000010b179
- (oneway void)trpCandidateReadyForExecutionForRequestId:(id)arg1 withTrpId:(id)arg2;	// IMP=0x000000000010b08f
- (oneway void)sendSpeechCorrectionInfo:(id)arg1 interactionIdentifier:(id)arg2;	// IMP=0x001000000010afa5
- (oneway void)updateVoiceCommandContextWithRequestId:(id)arg1 prefixText:(id)arg2 postfixText:(id)arg3 selectedText:(id)arg4 disambiguationActive:(id)arg5 cursorInVisibleText:(id)arg6 favorCommandSuppression:(id)arg7 abortCommandSuppression:(id)arg8 undoEvent:(id)arg9;	// IMP=0x001000000010adff
- (oneway void)resumeLocalRecognitionWithRequestId:(id)arg1 prefixText:(id)arg2 postfixText:(id)arg3 selectedText:(id)arg4;	// IMP=0x001000000010aced
- (oneway void)pauseLocalSpeechRecognitionForRequestId:(id)arg1;	// IMP=0x001000000010ac2f
- (oneway void)disableLocalSpeechRecognitionForRequestId:(id)arg1;	// IMP=0x001000000010ab71
- (oneway void)stopSpeechRecognitionWithReason:(unsigned long long)arg1 requestId:(id)arg2;	// IMP=0x001000000010ab5b
- (oneway void)startSpeechRecognitionResultsWithSettings:(id)arg1;	// IMP=0x001000000010ab45
- (oneway void)preheatLocalSpeechRecognitionWithLanguage:(id)arg1 source:(unsigned long long)arg2;	// IMP=0x001000000010aa6d
- (oneway void)updateTCUState:(id)arg1;	// IMP=0x001000000010a9af
- (oneway void)connectToServiceIfNeeded;	// IMP=0x001000000010a9a9
- (id)initWithSpeechRecognitionNode:(id)arg1 tcuGenerator:(id)arg2 supportTCU:(_Bool)arg3;	// IMP=0x001000000010a906

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


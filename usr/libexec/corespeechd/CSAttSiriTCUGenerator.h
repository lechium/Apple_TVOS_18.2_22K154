//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAttSiriEndpointerNode, CSAttSiriTCUCache, CSAttSiriUresNode, CSEndpointDelayReporter, CSEndpointerMetrics, CSIntuitiveConvRequestHandler, CSTCUPruner, CSTrpTcuMapper, NSHashTable, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSUUID;
@protocol CSAttSiriTCUGeneratorDelegate, OS_dispatch_queue;

@interface CSAttSiriTCUGenerator : NSObject
{
    _Bool _requestInProcess;	// 8 = 0x8
    _Bool _trpCandidateDelivered;	// 9 = 0x9
    _Bool _trpDetectSelected;	// 10 = 0xa
    _Bool _trpDetectDelivered;	// 11 = 0xb
    _Bool _shouldRefreshScores;	// 12 = 0xc
    _Bool _shouldEnforceLastEagerRCSelection;	// 13 = 0xd
    _Bool _isSDSDAftmOperational;	// 14 = 0xe
    _Bool _useEndpointerSignal;	// 15 = 0xf
    _Bool _isMultiUserRequest;	// 16 = 0x10
    CSIntuitiveConvRequestHandler *_requestHandler;	// 24 = 0x18
    id <CSAttSiriTCUGeneratorDelegate> _delegate;	// 32 = 0x20
    CSAttSiriUresNode *_uresNode;	// 40 = 0x28
    CSAttSiriEndpointerNode *_endpointerNode;	// 48 = 0x30
    NSString *_mhId;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    NSString *_firstTRPIdForSegment;	// 72 = 0x48
    NSString *_lastTRPIdForSegment;	// 80 = 0x50
    NSString *_requestId;	// 88 = 0x58
    CSTCUPruner *_TCUPruner;	// 96 = 0x60
    long long _speechEvent;	// 104 = 0x68
    CSAttSiriTCUCache *_tcuCache;	// 112 = 0x70
    NSHashTable *_tcuReceivers;	// 120 = 0x78
    NSHashTable *;	// 128 = 0x80
    NSHashTable *_recognitionTaskCompletionReceivers;	// 136 = 0x88
    CSEndpointDelayReporter *_epdDelayReporter;	// 144 = 0x90
    CSEndpointerMetrics *_endpointerMetrics;	// 152 = 0x98
    CSTrpTcuMapper *_tcuTrpMapper;	// 160 = 0xa0
    NSUUID *_turnIdentifier;	// 168 = 0xa8
    NSMutableArray *_multiUserTrpIdList;	// 176 = 0xb0
    NSMutableDictionary *_multiUserTrpCache;	// 184 = 0xb8
    NSNumber *_requestInvocationType;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00200000000d1256
@property(retain, nonatomic) NSNumber *requestInvocationType; // @synthesize requestInvocationType=_requestInvocationType;
@property(nonatomic) _Bool isMultiUserRequest; // @synthesize isMultiUserRequest=_isMultiUserRequest;
@property(retain, nonatomic) NSMutableDictionary *multiUserTrpCache; // @synthesize multiUserTrpCache=_multiUserTrpCache;
@property(retain, nonatomic) NSMutableArray *multiUserTrpIdList; // @synthesize multiUserTrpIdList=_multiUserTrpIdList;
@property(retain, nonatomic) NSUUID *turnIdentifier; // @synthesize turnIdentifier=_turnIdentifier;
@property(nonatomic) _Bool useEndpointerSignal; // @synthesize useEndpointerSignal=_useEndpointerSignal;
@property(nonatomic) _Bool isSDSDAftmOperational; // @synthesize isSDSDAftmOperational=_isSDSDAftmOperational;
@property(retain, nonatomic) CSTrpTcuMapper *tcuTrpMapper; // @synthesize tcuTrpMapper=_tcuTrpMapper;
@property(nonatomic) _Bool shouldEnforceLastEagerRCSelection; // @synthesize shouldEnforceLastEagerRCSelection=_shouldEnforceLastEagerRCSelection;
@property(retain, nonatomic) CSEndpointerMetrics *endpointerMetrics; // @synthesize endpointerMetrics=_endpointerMetrics;
@property(retain, nonatomic) CSEndpointDelayReporter *epdDelayReporter; // @synthesize epdDelayReporter=_epdDelayReporter;
@property(retain, nonatomic) NSHashTable *recognitionTaskCompletionReceivers; // @synthesize recognitionTaskCompletionReceivers=_recognitionTaskCompletionReceivers;
@property(retain, nonatomic) NSHashTable *executionStateReceivers; // @synthesize executionStateReceivers=_executionStateReceivers;
@property(retain, nonatomic) NSHashTable *tcuReceivers; // @synthesize tcuReceivers=_tcuReceivers;
@property(nonatomic) _Bool shouldRefreshScores; // @synthesize shouldRefreshScores=_shouldRefreshScores;
@property(nonatomic) _Bool trpDetectDelivered; // @synthesize trpDetectDelivered=_trpDetectDelivered;
@property _Bool trpDetectSelected; // @synthesize trpDetectSelected=_trpDetectSelected;
@property(nonatomic) _Bool trpCandidateDelivered; // @synthesize trpCandidateDelivered=_trpCandidateDelivered;
@property(nonatomic) _Bool requestInProcess; // @synthesize requestInProcess=_requestInProcess;
@property(retain, nonatomic) CSAttSiriTCUCache *tcuCache; // @synthesize tcuCache=_tcuCache;
@property(nonatomic) long long speechEvent; // @synthesize speechEvent=_speechEvent;
@property(retain, nonatomic) CSTCUPruner *TCUPruner; // @synthesize TCUPruner=_TCUPruner;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *lastTRPIdForSegment; // @synthesize lastTRPIdForSegment=_lastTRPIdForSegment;
@property(retain, nonatomic) NSString *firstTRPIdForSegment; // @synthesize firstTRPIdForSegment=_firstTRPIdForSegment;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic, setter=registerEndpointerNode:) __weak CSAttSiriEndpointerNode *endpointerNode; // @synthesize endpointerNode=_endpointerNode;
@property(nonatomic, setter=registerUresNode:) __weak CSAttSiriUresNode *uresNode; // @synthesize uresNode=_uresNode;
@property(nonatomic) __weak id <CSAttSiriTCUGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CSIntuitiveConvRequestHandler *requestHandler; // @synthesize requestHandler=_requestHandler;
- (id)_generateTCUsFromExistingTCUs:(id)arg1;	// IMP=0x00100000000d0e8b
- (void)processResultCandidate:(id)arg1 withId:(id)arg2 uresInvocationType:(id)arg3;	// IMP=0x00100000000d0e85
- (void)_reportEndpointMetrics:(id)arg1 forTrpId:(id)arg2;	// IMP=0x00100000000d08e9
- (void)_emitSpeechStopDetectedWithTrpId:(id)arg1 withHostTime:(unsigned long long)arg2;	// IMP=0x00100000000d08e3
- (void)_emitTRPCreatedEventWithTRPId:(id)arg1 withResultCandidateId:(id)arg2 withRequestId:(id)arg3;	// IMP=0x00100000000d08dd
- (void)_emitTRPRequestLinkEventWithTRPId:(id)arg1 withRequestId:(id)arg2;	// IMP=0x00100000000d08d7
- (void)didCompleteRecognitionTaskWithStatistics:(id)arg1 requestId:(id)arg2 endpointMode:(long long)arg3 error:(id)arg4;	// IMP=0x00100000000d07bc
- (void)didGenerateContinuityEnd:(id)arg1;	// IMP=0x00100000000d07b6
- (void)didReceiveFinalResultWithRequestId:(id)arg1 multiUserSpeechPackage:(id)arg2 taskName:(id)arg3;	// IMP=0x00100000000d0634
- (void)didReceiveResultCandidateWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 multiUserSpeechPackage:(id)arg3 topUserSpeechPackage:(id)arg4 duration:(double)arg5 taskName:(id)arg6;	// IMP=0x00100000000d04ea
- (void)didReceiveFinalResultWithRequestId:(id)arg1 speechPackage:(id)arg2 taskName:(id)arg3;	// IMP=0x00100000000d03fc
- (void)didReceiveResultCandidateWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 inputOrigin:(id)arg3 speechPackage:(id)arg4 duration:(double)arg5 taskName:(id)arg6;	// IMP=0x00100000000d030f
- (void)attSiriNode:(id)arg1 didDetectEndpointEventAtTime:(double)arg2 eventType:(long long)arg3 withMetrics:(id)arg4 useEndpointerSignal:(_Bool)arg5;	// IMP=0x00100000000d025d
- (void)attSiriNode:(id)arg1 selectedTRPId:(id)arg2 withMetrics:(id)arg3;	// IMP=0x00100000000d01a6
- (void)attSiriNode:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x00100000000d01a0
- (void)registerEndpointerProxy:(id)arg1;	// IMP=0x00100000000d0113
- (void)attSiriNode:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 usesAutomaticEndPointing:(_Bool)arg4;	// IMP=0x00100000000d0086
- (void)_updateRefreshScoresForPackage:(id)arg1;	// IMP=0x00100000000cfeb5
- (void)_generateTCUCandidateWithRefershedScoresForTrpIdAsync:(id)arg1;	// IMP=0x00100000000cfe28
- (long long)_getPhraseTypeFromUresInvocationType:(id)arg1;	// IMP=0x00100000000cfdbd
- (id)_generateSingleTCU:(id)arg1 withRequestID:(id)arg2 uresInvocationType:(id)arg3;	// IMP=0x00100000000cfb63
- (id)_generateTCUs:(id)arg1 withRequestID:(id)arg2 uresInvocationType:(id)arg3;	// IMP=0x00100000000cf853
- (id)_generateNewTRPId;	// IMP=0x00100000000cf7fc
- (void)_deliverTCUUpdateForTCUId:(id)arg1 withTCUAccepted:(_Bool)arg2 forRequestId:(id)arg3 isFinal:(_Bool)arg4;	// IMP=0x00100000000cf5ca
- (void)_deliverTRPDetected:(id)arg1 withTRPId:(id)arg2;	// IMP=0x00100000000cf06d
- (void)_deliverTRPCandidatePackage:(id)arg1;	// IMP=0x00100000000cee8a
- (void)_updateTcuCache:(id)arg1;	// IMP=0x00100000000ced75
- (_Bool)_shouldDropPackage:(id)arg1;	// IMP=0x00100000000cec62
- (void)_enforceLastEagerRCSelection;	// IMP=0x00100000000ceb69
- (void)_sendSelectedTrpId:(id)arg1 endpointerMetrics:(id)arg2;	// IMP=0x00100000000ce9e3
- (void)_doTrpTcuMappingWithTrpid:(id)arg1 speechPackage:(id)arg2 forceTrpSelection:(_Bool)arg3;	// IMP=0x00100000000ce86e
- (void)_processResultCandidate:(id)arg1 withId:(id)arg2 uresInvocationType:(id)arg3 isScoreRefreshAllowed:(_Bool)arg4;	// IMP=0x00100000000ce3e8
- (void)_processMultiUserResultCandidate:(id)arg1 withId:(id)arg2 isScoreRefreshAllowed:(_Bool)arg3;	// IMP=0x00100000000cdc04
- (_Bool)_shouldProcessResultCandidateForTask:(id)arg1;	// IMP=0x00100000000cdb13
- (void)_reset;	// IMP=0x00100000000cd9f3
- (void)processReadyForExecutionForRequestId:(id)arg1 withTrpId:(id)arg2;	// IMP=0x00100000000cd9de
- (void)processTCUUpdateMessage:(id)arg1;	// IMP=0x00100000000cd951
- (void)addRecognitionTaskCompletionReceiver:(id)arg1;	// IMP=0x00100000000cd899
- (void)addTRPCandidateExecutionStateReceiver:(id)arg1;	// IMP=0x00100000000cd7e1
- (void)addTCUReceiver:(id)arg1;	// IMP=0x00100000000cd729
- (void)stop;	// IMP=0x00100000000cd723
- (void)updateInvocationType:(id)arg1 forRequestId:(id)arg2;	// IMP=0x00100000000cd664
- (void)updateAFTMOperationalStatus:(_Bool)arg1 forRequestId:(id)arg2;	// IMP=0x00100000000cd5c5
- (void)startWithRecordContext:(id)arg1 withRequestId:(id)arg2;	// IMP=0x00100000000cd479
- (void)reset;	// IMP=0x00100000000cd3a1
- (id)init;	// IMP=0x00100000000cd0dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAttSiriEndpointerNode, CSAttSiriUresNode, NSArray, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CSAttSiriRCHandler : NSObject
{
    NSArray *_lastEndpointHintFeatures;	// 8 = 0x8
    CDUnknownBlockType _lastEndpointHintCompletion;	// 16 = 0x10
    CSAttSiriEndpointerNode *_endpointerNode;	// 24 = 0x18
    CSAttSiriUresNode *_uresNode;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSHashTable *_resultCandidateReceivers;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000ada3f
@property(retain, nonatomic) NSHashTable *resultCandidateReceivers; // @synthesize resultCandidateReceivers=_resultCandidateReceivers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak CSAttSiriUresNode *uresNode; // @synthesize uresNode=_uresNode;
@property(nonatomic) __weak CSAttSiriEndpointerNode *endpointerNode; // @synthesize endpointerNode=_endpointerNode;
- (void)getMitigationDecisionForRCIdWithCompletion:(unsigned long long)arg1 requestId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ad8ab
- (void)processRCWithId:(unsigned long long)arg1 requestId:(id)arg2 speechPackage:(id)arg3 taskId:(id)arg4 forceAccept:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000ad497
- (void)addResultCandidateReceiver:(id)arg1;	// IMP=0x00100000000ad40a
- (id)initWithEndpointerNode:(id)arg1 uresNode:(id)arg2;	// IMP=0x00100000000ad294

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


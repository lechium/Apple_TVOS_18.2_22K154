//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHMatcherRequest, WFLinkActionWorkflowRunnerClient;
@protocol SHMatcherDelegate;

@interface SHAppIntentRunnerMatcher : NSObject
{
    id <SHMatcherDelegate> delegate;	// 8 = 0x8
    WFLinkActionWorkflowRunnerClient *_workflowRunnerClient;	// 16 = 0x10
    SHMatcherRequest *_matcherRequest;	// 24 = 0x18
    long long _source;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001669f
@property(nonatomic) long long source; // @synthesize source=_source;
@property(retain, nonatomic) SHMatcherRequest *matcherRequest; // @synthesize matcherRequest=_matcherRequest;
@property(retain, nonatomic) WFLinkActionWorkflowRunnerClient *workflowRunnerClient; // @synthesize workflowRunnerClient=_workflowRunnerClient;
@property(nonatomic) __weak id <SHMatcherDelegate> delegate; // @synthesize delegate;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithOutput:(id)arg2 error:(id)arg3 cancelled:(_Bool)arg4;	// IMP=0x001000000001647d
- (void)_stop;	// IMP=0x001000000001644b
- (void)stopRecognitionForRequestID:(id)arg1;	// IMP=0x00100000000162af
- (void)stopRecognition;	// IMP=0x0010000000016241
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x0010000000015dbf
- (id)initWithSource:(long long)arg1;	// IMP=0x0010000000015d82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, NSTimer, _UIKeyboardStateManager;

__attribute__((visibility("hidden")))
@interface _UISmartReplyFeedbackManager : NSObject
{
    _Bool _isLongFormCandidate;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    _UIKeyboardStateManager *_keyboardStateManagerDelegate;	// 24 = 0x18
    NSString *_analyticsSessionId;	// 32 = 0x20
    NSArray *_previouslyShownCandidates;	// 40 = 0x28
    NSString *_selectedCandidateDescription;	// 48 = 0x30
    NSDate *_reportFeedbackUIPresentedCalledTime;	// 56 = 0x38
    double _predictionBarDebounceTimeInterval;	// 64 = 0x40
    NSTimer *_predictionBarDebounceTimeIntervalTimer;	// 72 = 0x48
}

+ (_Bool)candidateIsLongFormSmartReply:(id)arg1;	// IMP=0x0060000000ef7a0f
+ (_Bool)candidateIsSmartReply:(id)arg1;	// IMP=0x0060000000ef79f4
+ (_Bool)showReportConcernUI;	// IMP=0x0060000000ef77a5
- (void).cxx_destruct;	// IMP=0x0000000000ef8bcb
@property(retain, nonatomic) NSTimer *predictionBarDebounceTimeIntervalTimer; // @synthesize predictionBarDebounceTimeIntervalTimer=_predictionBarDebounceTimeIntervalTimer;
@property(nonatomic) double predictionBarDebounceTimeInterval; // @synthesize predictionBarDebounceTimeInterval=_predictionBarDebounceTimeInterval;
@property(retain, nonatomic) NSDate *reportFeedbackUIPresentedCalledTime; // @synthesize reportFeedbackUIPresentedCalledTime=_reportFeedbackUIPresentedCalledTime;
@property(copy, nonatomic) NSString *selectedCandidateDescription; // @synthesize selectedCandidateDescription=_selectedCandidateDescription;
@property(retain, nonatomic) NSArray *previouslyShownCandidates; // @synthesize previouslyShownCandidates=_previouslyShownCandidates;
@property(retain, nonatomic) NSString *analyticsSessionId; // @synthesize analyticsSessionId=_analyticsSessionId;
@property(readonly, nonatomic) _Bool isLongFormCandidate; // @synthesize isLongFormCandidate=_isLongFormCandidate;
@property(nonatomic) __weak _UIKeyboardStateManager *keyboardStateManagerDelegate; // @synthesize keyboardStateManagerDelegate=_keyboardStateManagerDelegate;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)_sendAnalyticsForSignal:(id)arg1 toChannel:(id)arg2 withThreadId:(id)arg3 payload:(id)arg4;	// IMP=0x0000000000ef8af0
- (void)resetStateIfNoSmartReplySelected;	// IMP=0x0000000000ef8ab0
- (void)resetOnKeyboardCandidatesCleared;	// IMP=0x0000000000ef89f5
- (void)resetWithDebug:(id)arg1;	// IMP=0x0000000000ef8812
- (void)reportSmartRepliesThumbsDown;	// IMP=0x0000000000ef880c
- (void)reportSmartRepliesThumbsUp;	// IMP=0x0000000000ef8806
- (void)reportSmartRepliesConcern;	// IMP=0x0000000000ef8800
- (void)reportSmartRepliesFeedbackSignal:(id)arg1;	// IMP=0x0000000000ef87e7
- (void)inputModeWillChange;	// IMP=0x0000000000ef8764
- (void)predictionBarDebounceTimeIntervalExpired;	// IMP=0x0000000000ef860d
- (void)reportFeedbackUIPresented;	// IMP=0x0000000000ef84a7
- (void)reportWritingToolsPanelDismissed;	// IMP=0x0000000000ef8413
- (void)userSelectedSmartReply:(id)arg1 isLongForm:(_Bool)arg2 withMailOrMsgThreadId:(id)arg3;	// IMP=0x0000000000ef81cc
- (void)smartRepliesPresented;	// IMP=0x0000000000ef80ae
- (void)updateCandidates:(id)arg1;	// IMP=0x0000000000ef7e0b
- (_Bool)predictionsContainLongFormCandidates:(id)arg1;	// IMP=0x0000000000ef7cb7
- (_Bool)predictionsContainSmartReplies:(id)arg1;	// IMP=0x0000000000ef7b63
- (id)stringListFromPredictions:(id)arg1;	// IMP=0x0000000000ef7a31
- (void)composeFieldInFocusWithMailOrMsgThreadId:(id)arg1;	// IMP=0x0000000000ef7a2b
- (void)resetSmartReplyFeedbackUIIfAlreadyShown;	// IMP=0x0000000000ef79b4
- (_Bool)willShowFeedbackUI;	// IMP=0x0000000000ef799a
- (_Bool)shouldShowSmartReplyFeedbackInputDashboardViewControllerWithKeyboardIsSplit:(_Bool)arg1;	// IMP=0x0000000000ef792f
- (_Bool)feedbackUIWasPresented;	// IMP=0x0000000000ef7915
- (_Bool)smartReplyWasSelected;	// IMP=0x0000000000ef78fb
- (_Bool)smartReplyWasShownOrSelected;	// IMP=0x0000000000ef78e1
- (id)initWithKeyboardStateManagerDelegate:(id)arg1;	// IMP=0x0000000000ef788f
- (id)init;	// IMP=0x0000000000ef7881
- (id)initWithoutBundleIdCheck;	// IMP=0x0000000000ef77d1

@end


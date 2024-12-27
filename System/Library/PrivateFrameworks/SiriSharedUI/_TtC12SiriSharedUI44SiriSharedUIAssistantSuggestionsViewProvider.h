//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC12SiriSharedUI44SiriSharedUIAssistantSuggestionsViewProvider : NSObject
{
    MISSING_TYPE *suggestionViews;	// 8 = 0x8
    MISSING_TYPE *suggestionsList;	// 16 = 0x10
    MISSING_TYPE *requestId;	// 0 = 0x0
    MISSING_TYPE *suggestionsProvider;	// 0 = 0x0
    MISSING_TYPE *suggestionsDataForExposureCallback;	// 0 = 0x0
    MISSING_TYPE *shouldSuppressSuggestions;	// 0 = 0x0
    MISSING_TYPE *conversationStarterHesitationCountdown;	// 23 = 0x17
    MISSING_TYPE *speechTwoShotPromptDetected;	// 0 = 0x0
    MISSING_TYPE *dismissSuggestionsRendering;	// 0 = 0x0
    MISSING_TYPE *isVoiceTriggerActivation;	// 0 = 0x0
    MISSING_TYPE *pressDownHandler;	// 663552 = 0xa2000
    MISSING_TYPE *pressUpHandler;	// 5 = 0x5
    MISSING_TYPE *conversationStarterHesitationCountdownCompleted;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000000670b0
- (id)init;	// IMP=0x0000000000067050
- (void)startNewTypingSession;	// IMP=0x0000000000066f40
- (void)setDialogPhase:(id)arg1;	// IMP=0x0000000000066e50
- (void)suggestionsWereShownForCallback;	// IMP=0x0000000000066ca0
- (void)resetSuggestions;	// IMP=0x0000000000066890
- (id)getInitialSuggestionViews;	// IMP=0x00000000000667b0
- (id)getSuggestionViewsWithText:(id)arg1;	// IMP=0x0000000000066740
- (void)fetchAutoCompletionViewsWithQuery:(id)arg1 deviceLocked:(_Bool)arg2 turnId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000665c0
- (void)fetchConversationContinuerViewsWithRequestId:(id)arg1 currentMode:(id)arg2 deviceLocked:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000065710
- (void)fetchConversationStarterViewsWithDeviceLocked:(_Bool)arg1 isVoiceTrigger:(_Bool)arg2 invocationSource:(long long)arg3 isFirstInvocationSinceOSInstalled:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000064720
- (id)initWithPressDownHandler:(CDUnknownBlockType)arg1 pressUpHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000643a0
- (id)initWithTapHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000642c0

@end


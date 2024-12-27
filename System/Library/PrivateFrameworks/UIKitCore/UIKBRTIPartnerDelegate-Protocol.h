//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIKeyboardImplStateProtocol-Protocol.h>
#import <UIKitCore/UITextInputSuggestionDelegate-Protocol.h>

@class NSAdaptiveImageGlyph, NSArray, NSAttributedString, NSDictionary, NSEmojiImageTextAttachment, NSString, NSURL, RTIAssistantItem, RTIInputSystemSourceSession, TIDocumentState, TIKeyboardCandidate, TIKeyboardInput, TIKeyboardIntermediateText, TIKeyboardOutput, UIDictationInputModeOptions, UIKBInputDelegateManager, UIKeyboardCameraSessionRTIConfiguration, UIKeyboardInputMode, UIKeyboardTaskQueue, UIPhysicalKeyboardEvent, UIRemoteInputViewInfo, UIResponder, UITextInputTraits, UITextRange, UITextSuggestion, _UIKeyboardIndirectTextSelectionGestureState, _UISticker, _UISupplementalItem;
@protocol UIAsyncTextInputClient, UIKeyInput, UITextInput, UIWKInteractionViewProtocol;

@protocol UIKBRTIPartnerDelegate <UIKeyboardImplStateProtocol, UITextInputSuggestionDelegate>
@property(nonatomic) _Bool canSuggestSupplementalItemsForCurrentSelection;
@property(readonly, nonatomic) _Bool needAutofillLogin;
@property(nonatomic) _Bool performingRemoteTextOperations;
@property(readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
- (_Bool)selectionScrolling;
- (void)setKeyboardInputMode:(UIKeyboardInputMode *)arg1 userInitiated:(_Bool)arg2;
- (void)handleGrammarCorrectionEntries:(NSDictionary *)arg1;
- (void)presentKeyboardFeedbackAssistantViewControllerForLogURL:(NSURL *)arg1;
- (void)setCandidateDisplayIsExtended:(_Bool)arg1;
- (void)undoWithKeyboardInput:(TIKeyboardInput *)arg1;
- (void)setShiftStatesNeededInDestination:(_Bool)arg1 autoShifted:(_Bool)arg2 shiftLocked:(_Bool)arg3;
- (void)clearShiftState;
- (void)resumeDictationForResponderChange;
- (void)performStopAutoDeleteAtDocumentStart;
- (void)handleAutoDeleteContinuationOnDestinationWithDeletionCount:(unsigned long long)arg1;
- (void)_updateCanSuggestSupplementalItemsForCurrentSelection;
- (void)handleEventFromRemoteDestination_canSuggestSupplementalItemsForCurrentSelection:(_Bool)arg1;
- (void)handleEventCallbackFromRemoteDestination_didChooseSupplementalItem:(_UISupplementalItem *)arg1 toReplaceText:(NSString *)arg2;
- (void)handleEventFromRemoteSource_insertionPointExitedTextWithSupplementalItems;
- (void)handleEventFromRemoteSource_insertionPointEnteredText:(NSString *)arg1 withSupplementalCandidate:(TIKeyboardCandidate *)arg2;
- (void)handleEventFromRemoteSource_cancelChooseSupplementalItemToInsert;
- (void)handleEventFromRemoteSource_chooseSupplementalItem:(NSArray *)arg1 toReplaceText:(NSString *)arg2;
- (void)handleEventFromRemoteSource_insertSupplementalCandidate:(TIKeyboardCandidate *)arg1 textToCommit:(NSString *)arg2;
- (void)ejectKeyDown;
- (void)setInputMode:(NSString *)arg1 userInitiated:(_Bool)arg2;
- (void)handleAutoFillPasswordDetected;
- (void)handleAutoFillCreditCardDetected;
- (void)handleAutoFillContactDetected;
- (void)handleAutoFillPasswordPopoverCommand;
- (void)handleAutoFillCreditCardPopoverCommand;
- (void)handleAutoFillContactPopoverCommand;
- (void)handleEmojiPopoverKeyCommand;
- (void)setInputModeSwitcherVisibleInRemote:(_Bool)arg1;
- (_Bool)inputModeSwitcherVisible;
- (void)changingContextWithTrigger:(NSString *)arg1;
- (void)acceptingCandidateWithTrigger:(NSString *)arg1;
- (_Bool)returnKeyEnabled;
- (void)insertEmojiImageTextAttachment:(NSEmojiImageTextAttachment *)arg1;
- (_Bool)canInsertEmojiImageTextAttachment;
- (_Bool)canInsertStickerAsTextInputPayload;
- (void)insertAdaptiveImageGlyph:(NSAdaptiveImageGlyph *)arg1;
- (_Bool)canInsertAdaptiveImageGlyph;
- (void)setRemoteDelegateSupportsImagePaste:(_Bool)arg1;
- (_Bool)delegateSupportsImagePaste;
- (void)handleRemoteKeyboardCameraEvent_startCameraInput:(UIKeyboardCameraSessionRTIConfiguration *)arg1;
- (void)showTextChoicesPrompt;
- (void)acceptInlineCompletionWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)acceptAutocorrectionWithCompletionHandler:(void (^)(_Bool))arg1 requestedByRemoteInputDestination:(_Bool)arg2;
- (void)acceptAutocorrectionWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)acceptAutocorrection;
- (void)handleRemoteDictationEvent_resumeDictation;
- (void)handleRemoteDictationEvent_stopDictationIgnoreFinalizePhrases;
- (void)handleRemoteDictationEvent_updateIdleDetection:(long long)arg1;
- (void)handleRemoteDictationEvent_handleTip:(NSDictionary *)arg1;
- (void)handleRemoteDictationEvent_setEditMenuFrame:(NSDictionary *)arg1;
- (void)handleRemoteDictationEvent_movePopoverView:(NSDictionary *)arg1;
- (void)handleRemoteDictationEvent_cancelDictation;
- (void)handleRemoteDictationEvent_stopDictation:(_Bool)arg1;
- (void)handleRemoteDictationEvent_startDictation;
- (void)handleRemoteDictationEvent_switchToDictationLanguage:(NSString *)arg1;
- (void)handleRemoteDictationEvent_switchToDictationInputModeWithOptions:(UIDictationInputModeOptions *)arg1;
- (void)handleEventFromRemoteSource_autoFillIsMenuPresented:(_Bool)arg1;
- (void)handleEventFromRemoteSource_insertAutofillContent:(NSDictionary *)arg1;
- (void)provideAutoFillTypingUpdatesIfNecessary;
- (void)_handleWebKeyEvent:(UIPhysicalKeyboardEvent *)arg1 withEventType:(unsigned long long)arg2 withInputString:(NSString *)arg3 withInputStringIgnoringModifiers:(NSString *)arg4;
- (_Bool)performKeyboardEvent:(UIPhysicalKeyboardEvent *)arg1;
- (void)performTextOperationActionSelector:(SEL)arg1;
- (void)performOperations:(void (^)(void))arg1 withTextInputSource:(long long)arg2;
- (void)updateDocumentViewsAfterKeyboardOutput:(TIKeyboardOutput *)arg1;
- (_Bool)performKeyboardOutput:(TIKeyboardOutput *)arg1 checkingDelegate:(_Bool)arg2 forwardToRemoteInputSource:(_Bool)arg3;
- (void)handleRemoteIndirectGestureWithState:(_UIKeyboardIndirectTextSelectionGestureState *)arg1;
- (void)insertSticker:(_UISticker *)arg1;
- (void)insertCustomTextSuggestion:(UITextSuggestion *)arg1;
- (void)replaceRange:(UITextRange *)arg1 oldText:(NSString *)arg2 withText:(NSString *)arg3;
- (void)setInlineCompletionAsMarkedText:(NSAttributedString *)arg1 selectedRange:(struct _NSRange)arg2 inputString:(NSString *)arg3 searchString:(NSString *)arg4;
- (void)setAttributedMarkedText:(NSAttributedString *)arg1 selectedRange:(struct _NSRange)arg2 inputString:(NSString *)arg3 searchString:(NSString *)arg4;
- (void)insertAttributedText:(NSAttributedString *)arg1;
- (_Bool)assertTextForRemoteDocument:(NSString *)arg1 withSelectionDelta:(CDStruct_912cb5d2)arg2 updatingSelection:(_Bool)arg3;
- (unsigned int)assertIntermediateText:(TIKeyboardIntermediateText *)arg1;
- (void)applyAssistantItem:(RTIAssistantItem *)arg1;
- (void)updateAssistantViewInfo:(UIRemoteInputViewInfo *)arg1;
- (void)updateForExpectedRemoteDocumentStateChange:(TIDocumentState *)arg1 selectedTextRange:(struct _NSRange)arg2 forceSync:(_Bool)arg3;
- (void)updateInputDelegateForRemoteDocumentStateChange:(TIDocumentState *)arg1 selectedTextRange:(struct _NSRange)arg2 hasText:(_Bool)arg3 forceSync:(_Bool)arg4;
- (void)modifyTextInputTraits:(void (^)(UITextInputTraits *))arg1 forceSync:(_Bool)arg2;
- (void)updateInputDelegateForRemoteTraitChange:(UITextInputTraits *)arg1 forceSync:(_Bool)arg2;
- (NSString *)textContentTypeForCurrentInputDelegate;
- (UITextInputTraits *)textInputTraits;
- (RTIInputSystemSourceSession *)inputSystemSourceSession;
- (void)presentTextChoicePromptForRange:(UITextRange *)arg1;
- (void)dismissTextChoicePrompt;
- (void)endAcceptingInlineCompletionByDirectTap;
- (void)beginAcceptingInlineCompletionByDirectTap;
- (void)removeInlineTextCompletionPrompt;
- (void)textDidScroll;
- (void)textWillScroll;
- (void)textDidChange:(id <UITextInput>)arg1;
- (void)textWillChange:(id <UITextInput>)arg1;
- (void)setCaretVisible:(_Bool)arg1;
- (struct CGRect)correctionRect;
- (void)resetInputDelegate;
- (UIKBInputDelegateManager *)inputDelegateManager;
- (unsigned long long)delegateConformanceType;
- (UIResponder *)delegateAsResponder;
- (UIResponder<UIAsyncTextInputClient> *)asyncInputDelegate;
- (UIResponder<UIWKInteractionViewProtocol> *)asyncWebKitInteractionDelegate;
- (UIResponder<UIKeyInput> *)delegate;
- (UIResponder<UITextInput> *)inputDelegate;
- (NSDictionary *)remoteTextEditingMetadata;
@end


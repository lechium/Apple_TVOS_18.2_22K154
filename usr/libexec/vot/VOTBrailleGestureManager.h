//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXDispatchTimer, BKSAccelerometer, NSArray, NSDictionary, NSMutableDictionary, NSString, VOTBrailleGestureCandidateManager, VOTBrailleGestureSpellingSuggestionHandler, VOTBrailleGestureTranslator, VOTTextMovementManager;
@protocol BSInvalidatable, VOTBrailleGestureManagerDelegate;

@interface VOTBrailleGestureManager
{
    VOTBrailleGestureTranslator *_gestureTranslator;	// 8 = 0x8
    VOTBrailleGestureSpellingSuggestionHandler *_spellingSuggestionHandler;	// 16 = 0x10
    VOTBrailleGestureCandidateManager *_candidateManager;	// 24 = 0x18
    BKSAccelerometer *_accelerometer;	// 32 = 0x20
    NSMutableDictionary *_allTouchLocationsByIdentifier;	// 40 = 0x28
    NSMutableDictionary *_firstTouchLocationsByIdentifier;	// 48 = 0x30
    _Bool _shouldUpdateDotPositions;	// 56 = 0x38
    _Bool _exploring;	// 57 = 0x39
    _Bool _splitting;	// 58 = 0x3a
    _Bool _didMoveFingersTooFarForInput;	// 59 = 0x3b
    _Bool _didAnnounceExplorationMode;	// 60 = 0x3c
    _Bool _didAnnounceBrailleTypingProperties;	// 61 = 0x3d
    _Bool _didStartFullGesture;	// 62 = 0x3e
    _Bool _didEnterInvalidGesture;	// 63 = 0x3f
    _Bool _overridePrintBrailleWithAllSixDots;	// 64 = 0x40
    _Bool _usesTypingSoundFeedback;	// 65 = 0x41
    _Bool _usesHapticFeedback;	// 66 = 0x42
    id <VOTBrailleGestureManagerDelegate> _brailleGestureManagerDelegate;	// 72 = 0x48
    long long _usage;	// 80 = 0x50
    long long _typingMode;	// 88 = 0x58
    unsigned long long _translationOverride;	// 96 = 0x60
    NSDictionary *_commands;	// 104 = 0x68
    long long _keyboardOrientation;	// 112 = 0x70
    NSString *_lastPrintBrailleCharacter;	// 120 = 0x78
    NSDictionary *_lastTouchLocationsByIdentifier;	// 128 = 0x80
    AXDispatchTimer *_speakingDelayTimer;	// 136 = 0x88
    AXDispatchTimer *_brailleTypingPropertiesAnnouncementTimer;	// 144 = 0x90
    AXDispatchTimer *_warningTonesTimer;	// 152 = 0x98
    AXDispatchTimer *_lockScreenDimmingTimer;	// 160 = 0xa0
    AXDispatchTimer *_logBSIUsageTimer;	// 168 = 0xa8
    AXDispatchTimer *_initialOrientationTimer;	// 176 = 0xb0
    id <BSInvalidatable> _disableIdleTimerAssertion;	// 184 = 0xb8
    VOTTextMovementManager *_movementManager;	// 192 = 0xc0
    NSArray *_calibrationStartTouchPoints;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x002000000012b46c
@property(retain, nonatomic) NSArray *calibrationStartTouchPoints; // @synthesize calibrationStartTouchPoints=_calibrationStartTouchPoints;
@property(nonatomic) _Bool usesHapticFeedback; // @synthesize usesHapticFeedback=_usesHapticFeedback;
@property(nonatomic) _Bool usesTypingSoundFeedback; // @synthesize usesTypingSoundFeedback=_usesTypingSoundFeedback;
@property(retain, nonatomic) VOTTextMovementManager *movementManager; // @synthesize movementManager=_movementManager;
@property(nonatomic) _Bool overridePrintBrailleWithAllSixDots; // @synthesize overridePrintBrailleWithAllSixDots=_overridePrintBrailleWithAllSixDots;
@property(retain, nonatomic) id <BSInvalidatable> disableIdleTimerAssertion; // @synthesize disableIdleTimerAssertion=_disableIdleTimerAssertion;
@property(retain, nonatomic) AXDispatchTimer *initialOrientationTimer; // @synthesize initialOrientationTimer=_initialOrientationTimer;
@property(retain, nonatomic) AXDispatchTimer *logBSIUsageTimer; // @synthesize logBSIUsageTimer=_logBSIUsageTimer;
@property(retain, nonatomic) AXDispatchTimer *lockScreenDimmingTimer; // @synthesize lockScreenDimmingTimer=_lockScreenDimmingTimer;
@property(nonatomic) _Bool didEnterInvalidGesture; // @synthesize didEnterInvalidGesture=_didEnterInvalidGesture;
@property(nonatomic) _Bool didStartFullGesture; // @synthesize didStartFullGesture=_didStartFullGesture;
@property(retain, nonatomic) AXDispatchTimer *warningTonesTimer; // @synthesize warningTonesTimer=_warningTonesTimer;
@property(retain, nonatomic) AXDispatchTimer *brailleTypingPropertiesAnnouncementTimer; // @synthesize brailleTypingPropertiesAnnouncementTimer=_brailleTypingPropertiesAnnouncementTimer;
@property(retain, nonatomic) AXDispatchTimer *speakingDelayTimer; // @synthesize speakingDelayTimer=_speakingDelayTimer;
@property(retain, nonatomic) NSDictionary *lastTouchLocationsByIdentifier; // @synthesize lastTouchLocationsByIdentifier=_lastTouchLocationsByIdentifier;
@property(copy, nonatomic) NSString *lastPrintBrailleCharacter; // @synthesize lastPrintBrailleCharacter=_lastPrintBrailleCharacter;
@property(nonatomic) long long keyboardOrientation; // @synthesize keyboardOrientation=_keyboardOrientation;
@property(nonatomic) _Bool didAnnounceBrailleTypingProperties; // @synthesize didAnnounceBrailleTypingProperties=_didAnnounceBrailleTypingProperties;
@property(nonatomic) _Bool didAnnounceExplorationMode; // @synthesize didAnnounceExplorationMode=_didAnnounceExplorationMode;
@property(nonatomic) _Bool didMoveFingersTooFarForInput; // @synthesize didMoveFingersTooFarForInput=_didMoveFingersTooFarForInput;
@property(nonatomic, getter=isSplitting) _Bool splitting; // @synthesize splitting=_splitting;
@property(nonatomic, getter=isExploring) _Bool exploring; // @synthesize exploring=_exploring;
@property(nonatomic) _Bool shouldUpdateDotPositions; // @synthesize shouldUpdateDotPositions=_shouldUpdateDotPositions;
@property(retain, nonatomic) NSDictionary *commands; // @synthesize commands=_commands;
@property(nonatomic) unsigned long long translationOverride; // @synthesize translationOverride=_translationOverride;
@property(nonatomic) long long typingMode; // @synthesize typingMode=_typingMode;
@property(nonatomic) long long usage; // @synthesize usage=_usage;
@property(nonatomic) __weak id <VOTBrailleGestureManagerDelegate> brailleGestureManagerDelegate; // @synthesize brailleGestureManagerDelegate=_brailleGestureManagerDelegate;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2;	// IMP=0x001000000012b01a
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;	// IMP=0x001000000012b014
- (id)nameSearcherEntriesPassingSearchFrom:(id)arg1;	// IMP=0x001000000012ac27
- (void)_announceRespectingSoundSettingsRequest:(id)arg1 event:(id)arg2 hint:(id)arg3;	// IMP=0x001000000012a9f6
- (void)_announceRespectingSoundSettingsRequest:(id)arg1 event:(id)arg2;	// IMP=0x001000000012a9e1
- (void)_cancelWarningTones;	// IMP=0x001000000012a987
- (void)_playWarningTones:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000012a6da
- (void)_playWarningTone;	// IMP=0x001000000012a662
- (void)_playBonk;	// IMP=0x001000000012a5ea
- (id)_outputRequestForText:(id)arg1 hint:(id)arg2 useKeyboardLanguage:(_Bool)arg3 shouldQueue:(_Bool)arg4 isInsert:(_Bool)arg5 isSuggestion:(_Bool)arg6 isDelete:(_Bool)arg7 speakLiterally:(_Bool)arg8 otherLanguage:(id)arg9;	// IMP=0x001000000012a04b
- (void)_speakText:(id)arg1 hint:(id)arg2 useKeyboardLanguage:(_Bool)arg3 shouldQueue:(_Bool)arg4 isInsert:(_Bool)arg5 isSuggestion:(_Bool)arg6 isDelete:(_Bool)arg7 speakLiterally:(_Bool)arg8 otherLanguage:(id)arg9;	// IMP=0x0010000000129fe1
- (void)_speakText:(id)arg1 hint:(id)arg2;	// IMP=0x0010000000129fb8
- (void)_speakText:(id)arg1 useKeyboardLanguage:(_Bool)arg2 shouldQueue:(_Bool)arg3 isInsert:(_Bool)arg4 isDelete:(_Bool)arg5 speakLiterally:(_Bool)arg6;	// IMP=0x0010000000129f7d
- (void)_speakText:(id)arg1 useKeyboardLanguage:(_Bool)arg2 shouldQueue:(_Bool)arg3;	// IMP=0x0010000000129f5f
- (void)_speakText:(id)arg1 useKeyboardLanguage:(_Bool)arg2;	// IMP=0x0010000000129f4a
- (void)_updateDotPositions;	// IMP=0x0010000000129e9c
- (void)_flashInsertedTextIfAllowed:(id)arg1;	// IMP=0x0010000000129dc0
- (void)_updateBrailleUI;	// IMP=0x0010000000129c94
- (void)_outputChosenCandidate:(id)arg1;	// IMP=0x0010000000129b55
- (void)_insertCurrentSelectedCandidate;	// IMP=0x0010000000129ac5
- (void)_applyPreviousCandidate;	// IMP=0x0010000000129aae
- (void)_applyNextCandidate;	// IMP=0x0010000000129a97
- (void)_applyCandidateInDirection:(long long)arg1;	// IMP=0x0010000000129869
- (void)_handleTouchPoints:(id)arg1;	// IMP=0x0010000000129614
- (void)_typePrintBraille:(id)arg1;	// IMP=0x0010000000128f46
- (void)_issueSingleCommand:(id)arg1;	// IMP=0x0010000000128ded
- (void)_issueCommands:(id)arg1;	// IMP=0x0010000000128d43
- (void)_handlePrintBraille:(id)arg1;	// IMP=0x0010000000128ccb
- (void)handleBrailleGestureWithLeftPatternDictionary:(id)arg1 rightPatternDictionary:(id)arg2;	// IMP=0x0010000000128bc5
- (_Bool)_handleCarriageReturnSwipe;	// IMP=0x0010000000128b29
- (id)_languageCodeForSpeakingAndBrailleTranslation;	// IMP=0x001000000012887e
- (id)_languageCodeForSpellChecking;	// IMP=0x0010000000128820
- (id)_languageCodeForBrailleTable;	// IMP=0x0010000000128777
- (void)_handleTranslateImmediately;	// IMP=0x00100000001285dc
- (void)_handleChangeUsage:(_Bool)arg1;	// IMP=0x00100000001285d6
- (id)_printBrailleForTouchPoints:(id)arg1;	// IMP=0x00100000001284e4
- (void)_inputBrailleFromSeriesOfTouchPoints:(id)arg1;	// IMP=0x0010000000128477
- (void)_inputBrailleFromTouchPoints:(id)arg1;	// IMP=0x00100000001283ca
- (_Bool)_isAdjustTextSegmentTypeEvent:(id)arg1;	// IMP=0x0010000000128314
- (_Bool)_isAdjustTextSegmentEvent:(id)arg1;	// IMP=0x001000000012825e
- (_Bool)_isSelectEvent:(id)arg1;	// IMP=0x00100000001281a8
- (_Bool)_isCarriageReturnSwipeEvent:(id)arg1;	// IMP=0x0010000000128157
- (_Bool)_isToggleLockedConfigurationEvent:(id)arg1;	// IMP=0x0010000000128106
- (_Bool)_isTranslateImmediatelyEvent:(id)arg1;	// IMP=0x00100000001280b5
- (_Bool)_isPreviousBrailleUsageEvent:(id)arg1;	// IMP=0x00100000001280ad
- (_Bool)_isNextBrailleUsageEvent:(id)arg1;	// IMP=0x00100000001280a5
- (void)_scheduleExploringModeIfNeeded;	// IMP=0x0010000000127ef9
- (void)_updateDotNumberCirclesForPrintBraille:(id)arg1;	// IMP=0x0010000000127d97
- (id)_newBrailleInput;	// IMP=0x0010000000127d35
- (long long)valueChangeOriginator;	// IMP=0x0010000000127d2a
- (void)_handleFingersOnScreen:(id)arg1 didAddOrRemoveFingers:(_Bool)arg2;	// IMP=0x001000000012768f
- (void)_cleanUpTouchesIncludingCalibrationStartPoints:(_Bool)arg1;	// IMP=0x00100000001275af
- (_Bool)_handleAllFingersLifted;	// IMP=0x0010000000127304
- (void)_handleCalibrationTimeout;	// IMP=0x001000000012725c
- (id)_spokenStringForPrintBraille:(id)arg1 useLongForm:(_Bool)arg2;	// IMP=0x0010000000127021
- (id)_spokenStringForPrintBraille:(id)arg1;	// IMP=0x001000000012700d
- (void)_enumerateDotNumbersForPrintBraille:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000126ec6
- (void)_speakPrintBrailleForExploration;	// IMP=0x0010000000126c41
- (void)_calibrateWithTouchPoints:(id)arg1;	// IMP=0x0010000000126b70
- (id)_stringWithFirstPart:(id)arg1 secondPart:(id)arg2;	// IMP=0x0010000000126b48
- (void)_endExploringDotPatterns;	// IMP=0x0010000000126b09
- (void)_beginExploringDotPatterns;	// IMP=0x0010000000126a5c
- (id)_touchPointsForCalibrationGivenFirstPoints:(id)arg1 lastPoints:(id)arg2;	// IMP=0x00100000001269d2
- (_Bool)_isCalibrationEndPattern:(id)arg1;	// IMP=0x0010000000126962
- (_Bool)_isCalibrationStartPattern:(id)arg1;	// IMP=0x00100000001268f2
- (_Bool)_patternIncludesEveryFinger:(id)arg1;	// IMP=0x001000000012685f
- (_Bool)_deviceSupportsMoreThanFiveTouches;	// IMP=0x0010000000126855
- (_Bool)_requiresCandidateSelection;	// IMP=0x001000000012680a
- (_Bool)_requiresLaTeXInput;	// IMP=0x0010000000126708
- (_Bool)_shouldUseContractedBraille;	// IMP=0x0010000000126697
- (_Bool)_hasContractedBraillePreference;	// IMP=0x0010000000126647
- (_Bool)_canUseContractedBraille;	// IMP=0x0010000000126603
- (void)_updateShouldUseContractedBraille;	// IMP=0x00100000001265b4
- (void)_updateBrailleTypingPropertiesAndDelayAnnouncement:(_Bool)arg1 forUnlockConfiguration:(_Bool)arg2;	// IMP=0x00100000001260c9
- (void)_updateBrailleTypingPropertiesAndDelayAnnouncement:(_Bool)arg1;	// IMP=0x00100000001260b5
- (void)_announceBrailleTypingPropertiesIncludingOrientation:(_Bool)arg1 typingMode:(_Bool)arg2 forUnlockConfiguration:(_Bool)arg3;	// IMP=0x0010000000125e56
- (void)_appendOrientationToAnnouncement:(id)arg1;	// IMP=0x0010000000125b3c
- (unsigned long long)_numberOfDots;	// IMP=0x0010000000125b1e
- (_Bool)_shouldUseEightDotBraille;	// IMP=0x0010000000125aab
- (id)outputForLatestInput;	// IMP=0x0010000000125a8e
- (void)eventFactoryDidBeginSplitGesture:(id)arg1;	// IMP=0x00100000001259e7
- (id)hintForItemChooser;	// IMP=0x00100000001259ca
- (id)hintForAppLaunch;	// IMP=0x00100000001259ad
- (_Bool)shouldAllowRotorEvents;	// IMP=0x0010000000125986
- (void)didSelectItem;	// IMP=0x0010000000125980
- (void)didInputWordBackspace;	// IMP=0x001000000012593f
- (void)didInputBackspace;	// IMP=0x00100000001258e9
- (_Bool)performCustomWordBackspace;	// IMP=0x00100000001256f1
- (_Bool)performCustomBackspace;	// IMP=0x00100000001254c6
- (void)applyPreviousSuggestionToElement:(id)arg1;	// IMP=0x0010000000125465
- (void)applyNextSuggestionToElement:(id)arg1;	// IMP=0x0010000000125404
- (void)_applySuggestionToElement:(id)arg1 direction:(long long)arg2;	// IMP=0x001000000012521d
- (void)_outputChosenSuggestion:(id)arg1;	// IMP=0x001000000012515c
- (void)_insertCurrentSelectedSuggestion:(id)arg1;	// IMP=0x001000000012504b
- (void)_commitBufferedBraille;	// IMP=0x0010000000124fab
- (_Bool)performNextBrailleTableCommand;	// IMP=0x0010000000124b1a
- (_Bool)isTextSelectionBackwardEvent:(id)arg1;	// IMP=0x0010000000124b08
- (_Bool)isTextSelectionForwardEvent:(id)arg1;	// IMP=0x0010000000124af6
- (_Bool)isRotorDownEvent:(id)arg1;	// IMP=0x0010000000124ae4
- (_Bool)isRotorUpEvent:(id)arg1;	// IMP=0x0010000000124ad2
- (_Bool)isRotorRightEvent:(id)arg1;	// IMP=0x0010000000124ac0
- (_Bool)isRotorLeftEvent:(id)arg1;	// IMP=0x0010000000124aae
- (_Bool)isNextBrailleTableEvent:(id)arg1;	// IMP=0x0010000000124a5d
- (_Bool)performNextKeyboardLanguage;	// IMP=0x0010000000124a16
- (_Bool)isNextKeyboardLanguageEvent:(id)arg1;	// IMP=0x00100000001249c5
- (_Bool)isSelectItemEvent:(id)arg1;	// IMP=0x0010000000124939
- (_Bool)isPreviousSuggestionEvent:(id)arg1;	// IMP=0x00100000001248e8
- (_Bool)isNextSuggestionEvent:(id)arg1;	// IMP=0x0010000000124897
- (_Bool)isWordBackspaceEvent:(id)arg1;	// IMP=0x0010000000124846
- (_Bool)isBackspaceEvent:(id)arg1;	// IMP=0x00100000001247f5
- (_Bool)isSpaceEvent:(id)arg1;	// IMP=0x00100000001247a4
- (_Bool)isReturnKeyEvent:(id)arg1;	// IMP=0x0010000000124753
@property(readonly, nonatomic) unsigned long long mode;
- (_Bool)_handleAdjustTextSegmentTypeEvent:(id)arg1;	// IMP=0x00100000001245b4
- (_Bool)_shouldReverseDots;	// IMP=0x0010000000124569
- (void)updateWithString:(id)arg1;	// IMP=0x00100000001244dc
- (_Bool)_handleWordBreak:(id)arg1 includeSpace:(_Bool)arg2;	// IMP=0x0010000000124352
- (void)sendCarriageReturnForElement:(id)arg1;	// IMP=0x00100000001242a2
- (void)pressReturnKeyForElement:(id)arg1;	// IMP=0x0010000000123f98
- (void)inputSpaceForElement:(id)arg1;	// IMP=0x0010000000123c59
- (id)_touchLocationsByFilteringOutEdges:(id)arg1;	// IMP=0x0010000000123949
- (_Bool)processTouchLocations:(id)arg1 isFirstTouch:(_Bool)arg2 isCancelTouch:(_Bool)arg3;	// IMP=0x0010000000123747
- (_Bool)processTapWithFingerCount:(unsigned long long)arg1;	// IMP=0x001000000012373f
- (_Bool)processEvent:(id)arg1;	// IMP=0x001000000012324e
- (void)clearCurrentString;	// IMP=0x0010000000123205
- (void)setUsage:(long long)arg1 userInitiated:(_Bool)arg2;	// IMP=0x00100000001231f3
- (_Bool)shouldBeDeactivatedByEscape;	// IMP=0x00100000001231a4
- (_Bool)allowsElementMovement;	// IMP=0x00100000001230f0
- (_Bool)wantsToStayActive;	// IMP=0x00100000001230e8
- (void)setActive:(_Bool)arg1 usage:(long long)arg2;	// IMP=0x0010000000122921
- (void)setActive:(_Bool)arg1;	// IMP=0x001000000012290d
- (void)dealloc;	// IMP=0x00100000001228a5
- (id)init;	// IMP=0x0010000000122310

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardUsageTracking : NSObject
{
}

+ (void)variantDeleteIncrement;	// IMP=0x0080000000ea9124
+ (void)showVariantsIncrement;	// IMP=0x0080000000ea90f0
+ (void)letterCaseToggleIncrement;	// IMP=0x0080000000ea90bc
+ (void)keyboardSupportsTouch:(_Bool)arg1;	// IMP=0x0080000000ea9085
+ (void)signupPasswordFromKeyboardIncrement;	// IMP=0x0080000000ea9051
+ (void)signupPasswordFromAutofillIncrement;	// IMP=0x0080000000ea901d
+ (void)loginPasswordFromKeyboardIncrement;	// IMP=0x0080000000ea8f98
+ (void)loginPasswordFromAutofillIncrement;	// IMP=0x0080000000ea8f13
+ (void)appAutofillCredentialFromSafariUI;	// IMP=0x0080000000ea8edf
+ (void)appAutofillExtraKeyTapped;	// IMP=0x0080000000ea8eab
+ (void)appAutofillFilled;	// IMP=0x0080000000ea8e26
+ (void)appAutofillDetectedDecrement;	// IMP=0x0080000000ea8da1
+ (void)appAutofillDetectedIncrement;	// IMP=0x0080000000ea8d1c
+ (void)countReachableKeyboardHandBiasChangeToBias:(long long)arg1;	// IMP=0x0080000000ea8ce8
+ (void)countKeystrokeForReachableKeyboardWithBias:(long long)arg1;	// IMP=0x0080000000ea8c99
+ (void)restAndTypeTriggered;	// IMP=0x0080000000ea8c65
+ (void)normalPunctuationKeyCount;	// IMP=0x0080000000ea8c0a
+ (void)undoKeyCount;	// IMP=0x0080000000ea8baf
+ (void)redoKeyCount;	// IMP=0x0080000000ea8b54
+ (void)panAlternateKeyFlickDownCount;	// IMP=0x0080000000ea8af9
+ (void)singleStringKeyFlickUpCount;	// IMP=0x0080000000ea8a9e
+ (void)dualStringsKeyFlickUpCount;	// IMP=0x0080000000ea8a43
+ (void)keyboardReachabilityDistribution:(double)arg1;	// IMP=0x0080000000ea897f
+ (void)keyboardTotalOnScreenTime:(double)arg1 orientation:(long long)arg2;	// IMP=0x0080000000ea88a4
+ (void)keyboardPerformanceFromTouchRelease:(double)arg1 until:(double)arg2;	// IMP=0x0080000000ea883e
+ (void)keyboardPerformanceFromTouchStart:(double)arg1 until:(double)arg2;	// IMP=0x0080000000ea8797
+ (void)keyboardGestureOneFingerForcePress:(_Bool)arg1 withPressCount:(int)arg2;	// IMP=0x0080000000ea8737
+ (void)keyboardGestureOneFingerForcePan:(_Bool)arg1;	// IMP=0x0080000000ea86f6
+ (void)keyboardGestureTwoFingerTap:(_Bool)arg1 withTapCount:(int)arg2;	// IMP=0x0080000000ea8693
+ (void)showLowercaseKeyplanePreference:(_Bool)arg1;	// IMP=0x0080000000ea8659
+ (void)showCharacterPreviewPreference:(_Bool)arg1;	// IMP=0x0080000000ea861f
+ (void)selectedPredictiveInputCandidate:(id)arg1 isAutocorrection:(_Bool)arg2 index:(unsigned long long)arg3;	// IMP=0x0080000000ea828b
+ (void)keyboardGestureSelectedPredictiveInputCandidate;	// IMP=0x0080000000ea8254
+ (void)keyboardGestureSetPredictionPreference:(_Bool)arg1;	// IMP=0x0080000000ea8210
+ (void)inputSwitcherSetPredictionPreference:(_Bool)arg1;	// IMP=0x0080000000ea81cc
+ (void)predictionViewState:(_Bool)arg1 forInputMode:(id)arg2;	// IMP=0x0080000000ea8090
+ (void)keyboardExtensionsOnDevice;	// IMP=0x0080000000ea7cb7
+ (void)keyboardExtensionCrashed;	// IMP=0x0080000000ea7c80
+ (void)keyboardExtensionPrimaryLanguageChanged;	// IMP=0x0080000000ea7c49
+ (void)keyboardSetToInputMode:(id)arg1 fromPrevious:(id)arg2;	// IMP=0x0080000000ea7a3e

@end


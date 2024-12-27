//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXVoiceOverVoiceRotorItem, MISSING_TYPE, NSString;

@interface _TtCE22AccessibilityUtilitiesCSo13AXPreferences9VoiceOver : NSObject
{
    MISSING_TYPE *resolver;	// 8 = 0x8
    MISSING_TYPE *_defaultVoiceSelectionsByLanguage;	// 16 = 0x10
    MISSING_TYPE *_voiceRotors;	// 24 = 0x18
    MISSING_TYPE *__oldDomainRotors;	// 32 = 0x20
    MISSING_TYPE *_currentRotorVoiceIdentifier;	// 40 = 0x28
    MISSING_TYPE *_largeCursorEnabled;	// 48 = 0x30
    MISSING_TYPE *_contentDescriptionLevel;	// 56 = 0x38
    MISSING_TYPE *_useDigitalCrownNavigation;	// 64 = 0x40
    MISSING_TYPE *_imageCaptionsEnabled;	// 72 = 0x48
    MISSING_TYPE *_useTVToggleStyleNavigation;	// 80 = 0x50
    MISSING_TYPE *_continuousPathKeyboardStartTimeout;	// 88 = 0x58
    MISSING_TYPE *_hearingAidRoutingEnabled;	// 96 = 0x60
    MISSING_TYPE *_braillePanningAutoTurnsReadingContent;	// 104 = 0x68
    MISSING_TYPE *_brailleDisplayOutputMode;	// 112 = 0x70
    MISSING_TYPE *_brailleDisplayInputMode;	// 120 = 0x78
    MISSING_TYPE *_brailleGesturesInputMode;	// 128 = 0x80
    MISSING_TYPE *_brailleDisplaySyncInputOutputTables;	// 136 = 0x88
    MISSING_TYPE *_brailleDisplayInputTableIdentifier;	// 144 = 0x90
    MISSING_TYPE *_brailleDisplayOutputTableIdentifier;	// 152 = 0x98
    MISSING_TYPE *_brailleGesturesInputTableIdentifier;	// 160 = 0xa0
    MISSING_TYPE *_brailleGesturesActivationGestureEnabled;	// 168 = 0xa8
    MISSING_TYPE *_brailleGesturesSoundOption;	// 176 = 0xb0
    MISSING_TYPE *_brailleGesturesUsesHapticFeedback;	// 184 = 0xb8
    MISSING_TYPE *_brailleGesturesUsesTypingSoundFeedback;	// 192 = 0xc0
    MISSING_TYPE *_brailleGesturesDisplayEnteredText;	// 200 = 0xc8
    MISSING_TYPE *_brailleGesturesAutoActivateOnTextFields;	// 208 = 0xd0
    MISSING_TYPE *_perkinsKeyboardInputEnabled;	// 216 = 0xd8
    MISSING_TYPE *_perkinsChordKeyboardInputEnabled;	// 224 = 0xe0
    MISSING_TYPE *_defaultPunctuationGroup;	// 232 = 0xe8
    MISSING_TYPE *_activities;	// 240 = 0xf0
    MISSING_TYPE *_selectedActivityId;	// 248 = 0xf8
    MISSING_TYPE *_languageDetectionEnabled;	// 256 = 0x100
    MISSING_TYPE *_pitchChangeEnabled;	// 264 = 0x108
    MISSING_TYPE *_selectedLanguage;	// 272 = 0x110
    MISSING_TYPE *_speakUpEnabled;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x00000000000b8320
- (id)init;	// IMP=0x00000000000b82d0
- (void)setEffectiveSpeakingRateWithCurrentRotor:(AXVoiceOverVoiceRotorItem *)arg1 value:(float)arg2 completionHandler:(void (^)(void))arg3;	// IMP=0x00000000000b61a0
- (void)setEffectiveSpeakingRate:(float)arg1 completionHandler:(void (^)(void))arg2;	// IMP=0x00000000000b5e60
- (void)effectiveSpeakingRateWithCurrentRotor:(AXVoiceOverVoiceRotorItem *)arg1 completionHandler:(void (^)(float))arg2;	// IMP=0x00000000000b50c0
- (void)effectiveSpeakingRateWithCompletionHandler:(void (^)(float))arg1;	// IMP=0x00000000000b4e20
- (void)setEffectiveSpeakingVolumeWithCurrentRotor:(AXVoiceOverVoiceRotorItem *)arg1 value:(float)arg2 completionHandler:(void (^)(void))arg3;	// IMP=0x00000000000b47c0
- (void)setEffectiveSpeakingVolume:(float)arg1 completionHandler:(void (^)(void))arg2;	// IMP=0x00000000000b4440
- (void)effectiveSpeakingVolumeWithCurrentRotor:(AXVoiceOverVoiceRotorItem *)arg1 completionHandler:(void (^)(float))arg2;	// IMP=0x00000000000b37a0
- (void)effectiveSpeakingVolumeWithCompletionHandler:(void (^)(float))arg1;	// IMP=0x00000000000b35a0
- (void)setWithVoiceId:(id)arg1 forLanguage:(id)arg2 rate:(float)arg3 volume:(float)arg4 pitch:(float)arg5;	// IMP=0x00000000000b3160
- (void)setWithVoiceId:(NSString *)arg1 forLanguage:(NSString *)arg2 completionHandler:(void (^)(void))arg3;	// IMP=0x00000000000b2a70
- (void)speechVoiceIdentifierForLanguage:(NSString *)arg1 completionHandler:(void (^)(NSString *))arg2;	// IMP=0x00000000000b27c0

@end


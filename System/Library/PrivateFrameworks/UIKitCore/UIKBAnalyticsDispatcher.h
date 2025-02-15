//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBAnalyticsDispatcher : NSObject
{
    _Bool _analyticsSkipDidKeyPress;	// 8 = 0x8
    unsigned long long _nextCandidateReplacementSource;	// 16 = 0x10
    NSString *_nextCandidateReplacementRemovedText;	// 24 = 0x18
    NSString *_nextCandidateReplacementInsertedText;	// 32 = 0x20
    NSString *_nextCandidateReplacementPostCandidateInsertedText;	// 40 = 0x28
    NSString *_updatedInputMode;	// 48 = 0x30
    NSString *_glomojiTitle;	// 56 = 0x38
}

+ (void)hapticEventEngineDuration:(double)arg1 startCount:(unsigned long long)arg2 actionCount:(unsigned long long)arg3;	// IMP=0x00600000004fe498
+ (void)keyboardCameraSessionEndedForTextContentType:(id)arg1 didFindText:(_Bool)arg2 didInsertText:(_Bool)arg3 sender:(id)arg4;	// IMP=0x00600000004fe03b
+ (void)keyplaneSwitched:(int)arg1;	// IMP=0x00600000004fdf2e
+ (void)keyboardShortcutInvokedWithKeyCommand:(id)arg1 keyEvent:(id)arg2 keyboardProperties:(id)arg3;	// IMP=0x00600000004fd81f
+ (void)emojiInsertedByMethod:(id)arg1 inputType:(id)arg2;	// IMP=0x00600000004fd34b
+ (void)emojiPopoverSummoned:(id)arg1 appendsEmoji:(_Bool)arg2;	// IMP=0x00600000004fcfba
+ (void)didDeleteBackwardText:(id)arg1;	// IMP=0x00600000004fcf04
+ (void)didInsertText:(id)arg1 relativeRangeBefore:(struct _NSRange)arg2 selectedTextBefore:(id)arg3 withLanguage:(id)arg4;	// IMP=0x00600000004fcdec
+ (void)editingSessionEnded:(unsigned long long)arg1;	// IMP=0x00600000004fcc7f
+ (void)sessionAnalyticsEnded:(id)arg1;	// IMP=0x00600000004fc30c
+ (void)handwritingResized:(id)arg1;	// IMP=0x00600000004fc005
+ (void)globeKeySelected;	// IMP=0x00600000004fbfd5
+ (void)globeKeyLongPress;	// IMP=0x00600000004fbca7
+ (void)globeKeyEducationShown:(double)arg1;	// IMP=0x00600000004fb9ab
+ (void)didCandidateReplacementWithRemovedText:(id)arg1 insertedText:(id)arg2;	// IMP=0x00600000004fb8d1
+ (void)didCandidateReplacement;	// IMP=0x00600000004fb72b
+ (void)didRevisionBubbleTap;	// IMP=0x00600000004fb6ba
+ (void)candidateViewExtended:(id)arg1 direction:(id)arg2;	// IMP=0x00600000004fb2fe
+ (void)dispatchFloatingKeyboardEventOfType:(id)arg1 trigger:(id)arg2 pinnedToEdge:(id)arg3 position:(struct CGPoint)arg4 touchUpPosition:(struct CGPoint)arg5;	// IMP=0x00600000004face6
+ (void)floatingKeyboardMoved:(id)arg1 toPosition:(struct CGPoint)arg2 touchPosition:(struct CGPoint)arg3;	// IMP=0x00600000004fabcb
+ (void)floatingKeyboardSummonedEvent:(id)arg1 trigger:(id)arg2 finalPosition:(struct CGPoint)arg3;	// IMP=0x00600000004fab30
+ (id)allowedValuesForType:(id)arg1;	// IMP=0x00600000004fa989
+ (void)keyboardAnalyticsDispatchWithSelector:(SEL)arg1 withTrigger:(id)arg2;	// IMP=0x00600000004fa8bf
+ (void)analyticsDispatchEventTextEditingOperation:(id)arg1 trigger:(id)arg2;	// IMP=0x00600000004fa3ef
+ (void)decrementAllowCursorMovementCount;	// IMP=0x00600000004fa37e
+ (void)incrementAllowCursorMovementCount;	// IMP=0x00600000004fa30d
+ (id)allowedValuesForTextEditingPreferredFieldName:(id)arg1;	// IMP=0x00600000004fa14b
+ (void)deleteKeySelected:(int)arg1;	// IMP=0x00600000004fa03e
+ (void)setKeyboardTrialParameters:(id)arg1;	// IMP=0x00600000004f9fb3
+ (id)currentInputMode;	// IMP=0x00600000004f9f32
+ (id)preferredEventName:(id)arg1;	// IMP=0x00600000004f9eb6
+ (id)sharedInstance;	// IMP=0x00600000004f9e1a
- (void).cxx_destruct;	// IMP=0x00000000004fe82f
@property(copy, nonatomic) NSString *glomojiTitle; // @synthesize glomojiTitle=_glomojiTitle;
@property(copy, nonatomic) NSString *updatedInputMode; // @synthesize updatedInputMode=_updatedInputMode;
@property(nonatomic) _Bool analyticsSkipDidKeyPress; // @synthesize analyticsSkipDidKeyPress=_analyticsSkipDidKeyPress;
@property(copy, nonatomic) NSString *nextCandidateReplacementPostCandidateInsertedText; // @synthesize nextCandidateReplacementPostCandidateInsertedText=_nextCandidateReplacementPostCandidateInsertedText;
@property(copy, nonatomic) NSString *nextCandidateReplacementInsertedText; // @synthesize nextCandidateReplacementInsertedText=_nextCandidateReplacementInsertedText;
@property(copy, nonatomic) NSString *nextCandidateReplacementRemovedText; // @synthesize nextCandidateReplacementRemovedText=_nextCandidateReplacementRemovedText;
@property(nonatomic) unsigned long long nextCandidateReplacementSource; // @synthesize nextCandidateReplacementSource=_nextCandidateReplacementSource;
- (void)resetCandidateReplacementVariables;	// IMP=0x00000000004f9e6f
- (id)init;	// IMP=0x00000000004f9dce

@end


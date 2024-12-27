//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/NSObject-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@protocol TIPreferencesControllerActions <NSObject>
@property(nonatomic) unsigned long long floatingKeyboardDockedEdge;
@property(nonatomic) struct CGPoint floatingKeyboardPosition;
@property(nonatomic) struct CGPoint keyboardPosition;
@property(nonatomic) _Bool keyboardShownByTouch;
@property(nonatomic) _Bool automaticMinimizationEnabled;
@property(nonatomic) _Bool autocorrectionEnabled;
@property(nonatomic) _Bool predictionEnabled;
@property(copy, nonatomic) NSArray *inputModeSelectionSequence;
- (void)updateVisceral:(NSNumber *)arg1;
- (void)updateDictationAsPrimaryInputMode:(NSNumber *)arg1;
- (void)resetDictationTipsToDefaultSettings;
- (void)updateDictationTipDisplayCount:(NSNumber *)arg1 dictationTipKey:(id)arg2;
- (void)updateDictationTipLastShownDate:(NSDate *)arg1;
- (void)updateDictationAutoPunctuation:(NSNumber *)arg1;
- (void)updateLastUsedDictationLanguages:(NSDictionary *)arg1;
- (void)updateEnabledDictationLanguages:(NSDictionary *)arg1;
- (void)updateCompactAssistantBarPersistentLocation:(unsigned long long)arg1;
- (void)updateEnableProKeyboard:(_Bool)arg1;
- (void)updateDidPerformFirstReachableKeyboardInteraction;
- (void)updateKeyboardHandBias:(NSString *)arg1;
- (void)updateKeyboardIsFloating:(_Bool)arg1;
- (void)updateKeyboardIsSplit:(_Bool)arg1 locked:(_Bool)arg2;
- (void)updateIndicatorLastShownDate:(NSDate *)arg1;
- (void)updateLastUsedKeyboards:(NSDictionary *)arg1;
- (void)updateLastUsedLayout:(NSString *)arg1;
- (void)updateLastUsedInputMode:(NSString *)arg1;
- (void)didTriggerOneTimeAction:(NSString *)arg1;
- (_Bool)oneTimeActionCompleted:(NSString *)arg1;
@end


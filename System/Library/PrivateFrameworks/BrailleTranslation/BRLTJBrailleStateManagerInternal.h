//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRLTJBrailleStringInternal, BRLTJEditableStringInternal, MISSING_TYPE;

@interface BRLTJBrailleStateManagerInternal : NSObject
{
    MISSING_TYPE *outputMode;	// 8 = 0x8
    MISSING_TYPE *inputMode;	// 16 = 0x10
    MISSING_TYPE *script;	// 24 = 0x18
    MISSING_TYPE *braille;	// 32 = 0x20
    MISSING_TYPE *notifier;	// 40 = 0x28
    MISSING_TYPE *translator;	// 48 = 0x30
    MISSING_TYPE *brailleForScriptTranslationResult;	// 56 = 0x38
    MISSING_TYPE *candidateSelectionLanguage;	// 64 = 0x40
    MISSING_TYPE *candidateManager;	// 80 = 0x50
    MISSING_TYPE *brailleCache;	// 120 = 0x78
    MISSING_TYPE *stageScriptForStageResult;	// 128 = 0x80
    MISSING_TYPE *isShowingAlert;	// 136 = 0x88
    MISSING_TYPE *alertScript;	// 144 = 0x90
    MISSING_TYPE *alertBraille;	// 152 = 0x98
    MISSING_TYPE *isWordDescriptionActive;	// 160 = 0xa0
    MISSING_TYPE *wordDescriptionManager;	// 168 = 0xa8
    MISSING_TYPE *isShowingTerminalOutput;	// 176 = 0xb0
}

+ (id)manager;	// IMP=0x004000000002a170
- (void).cxx_destruct;	// IMP=0x0000000000030120
@property(nonatomic) _Bool isShowingTerminalOutput; // @synthesize isShowingTerminalOutput;
- (void)showPreviousWordDescription;	// IMP=0x000000000002f4e0
- (void)showNextWordDescription;	// IMP=0x000000000002f420
@property(nonatomic) _Bool isWordDescriptionActive; // @synthesize isWordDescriptionActive;
@property(nonatomic, readonly) BRLTJBrailleStringInternal *displayedBraille;
@property(nonatomic, readonly) BRLTJEditableStringInternal *displayedScript;
@property(nonatomic) _Bool isShowingAlert; // @synthesize isShowingAlert;
- (void)selectCandidate;	// IMP=0x000000000002daf0
- (void)showPreviousCandidate;	// IMP=0x000000000002d5e0
- (void)showNextCandidate;	// IMP=0x000000000002d4c0
- (void)startCandidateSelection;	// IMP=0x000000000002d3a0
@property(nonatomic, readonly) _Bool isCandidateSelectionActive;
- (long long)scriptLocationForBrailleLocation:(long long)arg1;	// IMP=0x000000000002cc20
- (void)setBrailleSelection:(struct _NSRange)arg1;	// IMP=0x000000000002c9f0
- (void)wordDescriptionCommand;	// IMP=0x000000000002c040
- (_Bool)returnCommand;	// IMP=0x000000000002bfb0
- (void)escapeCommand;	// IMP=0x000000000002bec0
- (_Bool)forwardDelete;	// IMP=0x000000000002bde0
- (_Bool)delete;	// IMP=0x000000000002ba90
- (void)insertBrailleChar:(long long)arg1;	// IMP=0x000000000002b3e0
- (void)setScript:(id)arg1;	// IMP=0x000000000002a760
@property(nonatomic, readonly) _Bool isEditing;
- (id)init;	// IMP=0x000000000002a150
- (void)setTranslationDelegate:(id)arg1 outputMode:(unsigned long long)arg2 inputMode:(unsigned long long)arg3 candidateSelectionLanguage:(id)arg4;	// IMP=0x0000000000030370
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000030240

@end


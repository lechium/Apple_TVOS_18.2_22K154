//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSMutableArray, NSNumber, NSString;
@protocol VOTOutputRequestCompletionProtocol;

@interface VOTOutputRequest : NSObject
{
    NSMutableArray *_outputActions;	// 8 = 0x8
    _Bool _doesNotInterrupt;	// 16 = 0x10
    _Bool _sendsToDisplay;	// 17 = 0x11
    _Bool _cannotBeInterrupted;	// 18 = 0x12
    _Bool _interruptsEverything;	// 19 = 0x13
    _Bool _startedRequest;	// 20 = 0x14
    _Bool _disableOutput;	// 21 = 0x15
    _Bool _finishedSuccessfully;	// 22 = 0x16
    long long _textDisplayDirection;	// 24 = 0x18
    NSString *_language;	// 32 = 0x20
    NSArray *_elementHeadersForOutput;	// 40 = 0x28
    double _sendTimestamp;	// 48 = 0x30
    _Bool startedRequest;	// 56 = 0x38
    _Bool disableOutput;	// 57 = 0x39
    _Bool finishedSuccessfully;	// 58 = 0x3a
    _Bool lastSystemRequest;	// 59 = 0x3b
    _Bool cancelRequest;	// 60 = 0x3c
    _Bool _generatesBraille;	// 61 = 0x3d
    _Bool _suppressSpeech;	// 62 = 0x3e
    _Bool _synthesizeSilently;	// 63 = 0x3f
    _Bool _isComputerVisionAsynchrousRequest;	// 64 = 0x40
    int _limitToComponentType;	// 68 = 0x44
    int _brailleType;	// 72 = 0x48
    NSArray *elementHeadersForOutput;	// 80 = 0x50
    NSArray *imageCaptionResults;	// 88 = 0x58
    id <VOTOutputRequestCompletionProtocol> _completionDelegate;	// 96 = 0x60
    CDUnknownBlockType _completionBlock;	// 104 = 0x68
    CDUnknownBlockType _actionCompletionBlock;	// 112 = 0x70
    CDUnknownBlockType _startBlock;	// 120 = 0x78
    long long _originationType;	// 128 = 0x80
    CDUnknownBlockType _requestQueueMixinBehavior;	// 136 = 0x88
    NSNumber *_brailleAlertTimeout;	// 144 = 0x90
    NSString *_supplementalBrailleDescription;	// 152 = 0x98
    NSString *_keyboardLanguageHint;	// 160 = 0xa0
    struct _NSRange _brailleLineRange;	// 168 = 0xa8
}

+ (id)stringShouldSeparateDueToLanguage:(id)arg1 language:(id)arg2 keyboardLanguageHint:(id)arg3;	// IMP=0x002000000000910b
+ (_Bool)setCopyLastOutputRequestEnabled:(_Bool)arg1;	// IMP=0x00100000000055a8
+ (void)addPreviousRequests:(id)arg1;	// IMP=0x0010000000004e69
+ (void)resetBlockedRequestCount;	// IMP=0x0010000000004e58
+ (void)blockNextRequest;	// IMP=0x0010000000004e4b
+ (id)lastRequest;	// IMP=0x0010000000004dc9
+ (id)previousRequests;	// IMP=0x0010000000004d47
+ (void)clearPreviousRequests;	// IMP=0x0010000000004d01
+ (void)sendRequestWithString:(id)arg1 shouldQueue:(_Bool)arg2;	// IMP=0x0010000000004c64
+ (void)sendRequestWithString:(id)arg1;	// IMP=0x0010000000004c50
+ (void)setRequestEnqueuedBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004b96
+ (id)createRequest;	// IMP=0x0010000000004b75
+ (void)initialize;	// IMP=0x001000000000481f
- (void).cxx_destruct;	// IMP=0x002000000000c08d
@property(retain, nonatomic) NSString *keyboardLanguageHint; // @synthesize keyboardLanguageHint=_keyboardLanguageHint;
@property(nonatomic) _Bool isComputerVisionAsynchrousRequest; // @synthesize isComputerVisionAsynchrousRequest=_isComputerVisionAsynchrousRequest;
@property(nonatomic) _Bool synthesizeSilently; // @synthesize synthesizeSilently=_synthesizeSilently;
@property(retain, nonatomic) NSString *supplementalBrailleDescription; // @synthesize supplementalBrailleDescription=_supplementalBrailleDescription;
@property(nonatomic) struct _NSRange brailleLineRange; // @synthesize brailleLineRange=_brailleLineRange;
@property(nonatomic) __weak NSNumber *brailleAlertTimeout; // @synthesize brailleAlertTimeout=_brailleAlertTimeout;
@property(nonatomic) int brailleType; // @synthesize brailleType=_brailleType;
@property(nonatomic) _Bool suppressSpeech; // @synthesize suppressSpeech=_suppressSpeech;
@property(nonatomic) _Bool generatesBraille; // @synthesize generatesBraille=_generatesBraille;
@property(copy, nonatomic) CDUnknownBlockType requestQueueMixinBehavior; // @synthesize requestQueueMixinBehavior=_requestQueueMixinBehavior;
@property(nonatomic) long long originationType; // @synthesize originationType=_originationType;
@property(nonatomic) int limitToComponentType; // @synthesize limitToComponentType=_limitToComponentType;
@property(copy, nonatomic) CDUnknownBlockType startBlock; // @synthesize startBlock=_startBlock;
@property(copy, nonatomic) CDUnknownBlockType actionCompletionBlock; // @synthesize actionCompletionBlock=_actionCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) __weak id <VOTOutputRequestCompletionProtocol> completionDelegate; // @synthesize completionDelegate=_completionDelegate;
@property(retain, nonatomic) NSArray *imageCaptionResults; // @synthesize imageCaptionResults;
@property(nonatomic) _Bool cancelRequest; // @synthesize cancelRequest;
@property(nonatomic) _Bool lastSystemRequest; // @synthesize lastSystemRequest;
@property(retain, nonatomic) NSArray *elementHeadersForOutput; // @synthesize elementHeadersForOutput;
@property(nonatomic) _Bool finishedSuccessfully; // @synthesize finishedSuccessfully;
@property(nonatomic) _Bool disableOutput; // @synthesize disableOutput;
@property(nonatomic) _Bool startedRequest; // @synthesize startedRequest;
- (id)dictionaryRepresentation;	// IMP=0x001000000000bd43
- (id)description;	// IMP=0x001000000000b9e6
- (_Bool)cannotBeInterrupted;	// IMP=0x001000000000b9dd
- (void)setCannotBeInterrupted:(_Bool)arg1;	// IMP=0x001000000000b89d
- (_Bool)sendsToDisplay;	// IMP=0x001000000000b894
- (void)setSendsToDisplay:(_Bool)arg1 fromDirection:(long long)arg2;	// IMP=0x001000000000b887
- (void)addNotificationEvent:(unsigned int)arg1 forDelegate:(id)arg2;	// IMP=0x001000000000b80b
- (void)addSound:(id)arg1;	// IMP=0x001000000000b781
- (id)addString:(id)arg1 brailleString:(id)arg2 breakWords:(_Bool)arg3 withLanguage:(id)arg4 atIndex:(long long)arg5 category:(id)arg6;	// IMP=0x001000000000b01e
- (id)addString:(id)arg1 brailleString:(id)arg2 breakWords:(_Bool)arg3 withLanguage:(id)arg4 atIndex:(long long)arg5;	// IMP=0x001000000000b002
- (id)addString:(id)arg1 breakWords:(_Bool)arg2 withLanguage:(id)arg3 atIndex:(long long)arg4 category:(id)arg5;	// IMP=0x001000000000afdc
- (id)addString:(id)arg1 breakWords:(_Bool)arg2 withLanguage:(id)arg3 atIndex:(long long)arg4;	// IMP=0x001000000000afb9
- (void)addPause:(float)arg1;	// IMP=0x001000000000aeff
- (id)addString:(id)arg1 withLanguage:(id)arg2 category:(id)arg3;	// IMP=0x001000000000903b
- (id)addString:(id)arg1 category:(id)arg2;	// IMP=0x0010000000008f7b
- (id)addString:(id)arg1 brailleString:(id)arg2 withLanguage:(id)arg3;	// IMP=0x0010000000008e63
- (id)addString:(id)arg1 withLanguage:(id)arg2;	// IMP=0x0010000000008da9
- (id)addString:(id)arg1;	// IMP=0x0010000000008d14
- (id)addAttributedString:(id)arg1;	// IMP=0x0010000000008d00
- (void)_mergeActionsStartingAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000083e2
- (id)_addAXOutputActions:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00100000000080c5
- (id)addAttributedString:(id)arg1 withLanguage:(id)arg2;	// IMP=0x00100000000080b0
- (id)addAttributedString:(id)arg1 withLanguage:(id)arg2 category:(id)arg3;	// IMP=0x0010000000006a9f
- (void)_handleAttachmentInRequest:(struct __AXUIElement *)arg1;	// IMP=0x0010000000006969
- (_Bool)interruptsEverything;	// IMP=0x0010000000006960
- (void)setInterruptsEverything:(_Bool)arg1;	// IMP=0x0010000000006957
- (void)setDoesNotInterrupt:(_Bool)arg1;	// IMP=0x001000000000694e
- (_Bool)doesNotInterrupt;	// IMP=0x0010000000006945
- (id)lastAction;	// IMP=0x001000000000692f
- (unsigned long long)numberOfActions;	// IMP=0x0010000000006919
- (id)combinedOriginalString;	// IMP=0x00100000000067a0
- (id)combinedActionString;	// IMP=0x0010000000006602
- (id)actionStringAtIndex:(long long)arg1;	// IMP=0x00100000000065ae
@property(readonly, nonatomic) NSMutableArray *outputActions;
- (void)addOutputEvent:(id)arg1 toFirstActionMatchingCategory:(id)arg2;	// IMP=0x00100000000063b0
- (_Bool)hasSameOutputAs:(id)arg1;	// IMP=0x0010000000006088
- (void)send;	// IMP=0x00100000000055c5
- (double)sendTimestamp;	// IMP=0x00100000000055ba
@property(retain, nonatomic) NSString *language; // @dynamic language;
- (_Bool)containsActions;	// IMP=0x0010000000005556
- (unsigned long long)numberOfActionsWithString:(id)arg1;	// IMP=0x001000000000539f
- (MISSING_TYPE *)removeLastActionWithString: /* Error: Ran out of types for this method. */;	// IMP=0x001000000000518b
- (void)removeActionsWithHelper:(CDUnknownBlockType)arg1;	// IMP=0x001000000000501e
- (void)removeActions;	// IMP=0x0010000000004ed6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000493a
- (id)init;	// IMP=0x0010000000004891
- (void)addTVElement:(id)arg1 servesAsHeader:(_Bool)arg2 filterWithAspectMask:(_Bool)arg3;	// IMP=0x00100000000152d1
- (void)addTVElement:(id)arg1 filterWithAspectMask:(_Bool)arg2;	// IMP=0x00100000000152ba

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderOutput/NSObject-Protocol.h>

@class NSArray, NSAttributedString, NSNumber, NSString, SCROBrailleDisplay, SCROBrailleKey;
@protocol SCROBrailleDisplayCommandDispatcherProtocol, SCROBrailleDisplayInputManagerProtocol;

@protocol SCROBrailleDisplayDelegate <NSObject>
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 copyStringToClipboard:(NSString *)arg2;
- (void)playCommandNotSupportedSoundForBrailleDisplay:(SCROBrailleDisplay *)arg1;
- (void)playBorderHitSoundForBrailleDisplay:(SCROBrailleDisplay *)arg1;
- (id <SCROBrailleDisplayCommandDispatcherProtocol>)newBrailleDisplayCommandDispatcher;
- (id <SCROBrailleDisplayInputManagerProtocol>)brailleInputManager;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 didPanRight:(NSNumber *)arg2 elementToken:(NSNumber *)arg3 appToken:(id)arg4 lineOffset:(NSNumber *)arg5;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 didPanLeft:(NSNumber *)arg2 elementToken:(NSNumber *)arg3 appToken:(id)arg4 lineOffset:(NSNumber *)arg5;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 didDisplay:(NSAttributedString *)arg2;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 memorizedKey:(SCROBrailleKey *)arg2;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 willMemorizeKey:(SCROBrailleKey *)arg2;
- (void)requestSpeech:(NSString *)arg1 language:(NSString *)arg2;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 deletedUntranslatedText:(NSString *)arg2 speakLiterally:(_Bool)arg3;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 insertedUntranslatedText:(NSString *)arg2 speakLiterally:(_Bool)arg3;
- (void)brailleDidStartEditingWithDisplay:(SCROBrailleDisplay *)arg1;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 didMoveSelection:(unsigned long long)arg2;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 didReplaceRange:(struct _NSRange)arg2 withString:(NSString *)arg3 cursor:(unsigned long long)arg4;
- (void)brailleDisplayHadUserInteraction:(SCROBrailleDisplay *)arg1;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 pressedKeys:(NSArray *)arg2;
- (void)configurationChangedForBrailleDisplay:(SCROBrailleDisplay *)arg1;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 isSleeping:(_Bool)arg2;
- (void)brailleDriverDisconnected:(SCROBrailleDisplay *)arg1;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 driverDidLoad:(_Bool)arg2;
@end


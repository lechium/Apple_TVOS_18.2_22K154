//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC9ActionKitP33_3FD069E75236963E75C4BE2D87E9ECB629SpeechSynthesizerAsyncWrapper : NSObject
{
    MISSING_TYPE *synthesizer;	// 8 = 0x8
    MISSING_TYPE *continuation;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000004daec
- (id)init;	// IMP=0x000000000004da98
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingUtterance:(id)arg2 intoFile:(id)arg3;	// IMP=0x000000000004d96c
- (void)speechSynthesizer:(id)arg1 didFailSpeakingUtterance:(id)arg2 error:(id)arg3;	// IMP=0x000000000004d7fc

@end


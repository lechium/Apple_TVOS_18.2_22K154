//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC12TextToSpeech22CoreSynthesisVoiceShim : NSObject
{
    MISSING_TYPE *$__lazy_storage_$_internalResolver;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_publicResolver;	// 16 = 0x10
}

+ (void)setShared:(id)arg1;	// IMP=0x0040000000126dd0
+ (id)shared;	// IMP=0x0040000000126d20
- (void).cxx_destruct;	// IMP=0x0000000000129070
- (id)init;	// IMP=0x0000000000128ff0
- (void)internalVoiceWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(AVSpeechSynthesisVoice *))arg2;	// IMP=0x0000000000128d10
- (void)internalVoicesIncludingSiri:(_Bool)arg1 completionHandler:(void (^)(NSArray *))arg2;	// IMP=0x0000000000128890
- (void)publicVoicesWithCompletionHandler:(void (^)(NSArray *))arg1;	// IMP=0x0000000000128310
- (void)voiceWithLanguageCode:(NSString *)arg1 completionHandler:(void (^)(AVSpeechSynthesisVoice *))arg2;	// IMP=0x0000000000127710
- (void)voiceWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(AVSpeechSynthesisVoice *))arg2;	// IMP=0x0000000000127360

@end


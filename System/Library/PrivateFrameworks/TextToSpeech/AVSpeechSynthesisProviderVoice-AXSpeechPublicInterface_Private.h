//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFAudio/AVSpeechSynthesisProviderVoice.h>

@class NSArray, NSDictionary, NSString;

@interface AVSpeechSynthesisProviderVoice (AXSpeechPublicInterface_Private)
+ (void)updateSpeechVoices;	// IMP=0x002000000004f040
+ (void)updateSpeechVoicesForClient:(id)arg1;	// IMP=0x002000000004ef45
- (id)rawTTSIdentifier;	// IMP=0x001000000005100e
@property(retain, nonatomic) NSDictionary *extraAttributes;
@property(retain, nonatomic) NSArray *supportedLanguages;
@property(retain, nonatomic) NSArray *primaryLanguages;
@property(nonatomic) _Bool hasPerVoiceSettings;
@property(nonatomic) _Bool isPersonalVoice;
@property(nonatomic) _Bool isFirstParty;
@property(retain, nonatomic) NSString *synthesizerBundleIdentifier;
@property(retain, nonatomic) NSString *manufacturerName;
@property(nonatomic) struct AudioComponentDescription auComponentDesc;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005068c
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000004ff37
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000004fa46
- (id)fullBundleIdentifier;	// IMP=0x001000000004f9b3
- (id)uniqueAudioDescSpeechSynthTuple;	// IMP=0x001000000004f96b
- (id)uniqueAudioDescTriple;	// IMP=0x001000000004f923
- (id)supportedCharacterSet;	// IMP=0x001000000004f71c
- (unsigned long long)hash;	// IMP=0x001000000004f607
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004f3d8
- (id)description;	// IMP=0x001000000004f203
@property(readonly, nonatomic) NSString *groupName;
- (id)initWithName:(id)arg1 identifier:(id)arg2 primaryLanguages:(id)arg3 supportedLanguages:(id)arg4;	// IMP=0x001000000004ee3a
@end


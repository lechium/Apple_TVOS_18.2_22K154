//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFAudio/AVSpeechSynthesisVoice.h>

@class AVSpeechSynthesisProviderVoice, NSString;

@interface AVSpeechSynthesisVoice (PublicSpeechImplementation)
+ (id)currentLanguageCode;	// IMP=0x0020000000031257
+ (id)speechVoices;	// IMP=0x00200000000310a2
+ (id)voiceWithLanguage:(id)arg1;	// IMP=0x0020000000031055
+ (id)voiceWithIdentifier:(id)arg1;	// IMP=0x0020000000030e5b
+ (void)test_setInternalSpeechVoices:(id)arg1;	// IMP=0x002000000002ff60
+ (void)test_setSpeechVoices:(id)arg1;	// IMP=0x002000000002fc92
+ (id)test_speechVoices;	// IMP=0x002000000002fc81
+ (id)_speechVoicesIncludingSiri:(_Bool)arg1;	// IMP=0x002000000002eff8
+ (id)speechVoicesIncludingSuperCompact;	// IMP=0x002000000002edc9
+ (id)_speechVoicesIncludingSiriAndSuperCompact;	// IMP=0x002000000002eb99
+ (id)_speechVoicesIncludingSiri;	// IMP=0x002000000002e9dc
+ (id)_voiceWithIdentifier:(id)arg1 includingSiri:(_Bool)arg2;	// IMP=0x002000000002d407
+ (id)_remapOldIdentifierIfNecessary:(id)arg1;	// IMP=0x002000000002d3ee
+ (id)_voiceFromInternalVoiceListWithIdentifier:(id)arg1;	// IMP=0x002000000002d1ec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000003153f
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000031270
@property(retain, nonatomic) NSString *language;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000030d2d
@property(retain, nonatomic) NSString *identifier;
- (_Bool)isInstalled;	// IMP=0x0010000000030cc4
- (void)setIsInstalled:(_Bool)arg1;	// IMP=0x0010000000030c77
- (_Bool)isDefault;	// IMP=0x0010000000030c35
- (void)setIsDefault:(_Bool)arg1;	// IMP=0x0010000000030be8
@property(nonatomic) _Bool isNoveltyVoice;
- (_Bool)canBeDownloaded;	// IMP=0x0010000000030b17
- (void)setCanBeDownloaded:(_Bool)arg1;	// IMP=0x0010000000030aca
- (long long)assetSize;	// IMP=0x0010000000030a88
- (void)setAssetSize:(long long)arg1;	// IMP=0x0010000000030a3b
@property(readonly, nonatomic) NSString *nonLocalizedName;
- (long long)gender;	// IMP=0x0010000000030805
- (void)setGender:(long long)arg1;	// IMP=0x00100000000307b8
@property(readonly, nonatomic) NSString *nameWithoutQuality;
@property(readonly, nonatomic) NSString *nonLocalizedNameWithoutQuality;
- (void)setNonLocalizedNameWithoutQuality:(id)arg1;	// IMP=0x00100000000305ce
- (_Bool)isSystemVoice;	// IMP=0x0010000000030579
- (id)backupName;	// IMP=0x0010000000030568
- (void)setBackupName:(id)arg1;	// IMP=0x0010000000030552
@property(nonatomic) long long quality;
- (id)description;	// IMP=0x0010000000030273
@property(readonly, nonatomic) _Bool supportsSSML;
- (_Bool)isSynthesisProviderVoice;	// IMP=0x001000000003022e
- (id)_premiumLocalizedNameFormat;	// IMP=0x001000000002e8e2
- (id)_enhancedLocalizedNameFormat;	// IMP=0x001000000002e7e8
- (id)name;	// IMP=0x001000000002e696
- (id)siriDisplayName;	// IMP=0x001000000002e689
- (id)initWithLanguage:(id)arg1;	// IMP=0x001000000002d6e6
@property(retain, nonatomic) AVSpeechSynthesisProviderVoice *synthesisProviderVoice;
- (id)audioFileSettings;	// IMP=0x001000000002d189
- (unsigned long long)voiceTraits;	// IMP=0x001000000002d11a
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPAudioPlayButtonTheme, LPPointUnit, LPSize;

__attribute__((visibility("hidden")))
@interface LPAudioPlayButtonStyle : NSObject
{
    LPSize *_size;	// 8 = 0x8
    LPPointUnit *_glyphSize;	// 16 = 0x10
    LPAudioPlayButtonTheme *_defaultTheme;	// 24 = 0x18
    LPAudioPlayButtonTheme *_appleMusicTheme;	// 32 = 0x20
    LPAudioPlayButtonTheme *_podcastsTheme;	// 40 = 0x28
    LPAudioPlayButtonTheme *_audioBookTheme;	// 48 = 0x30
    LPAudioPlayButtonTheme *_lyricExcerptTheme;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000701ca
@property(readonly, retain, nonatomic) LPAudioPlayButtonTheme *lyricExcerptTheme; // @synthesize lyricExcerptTheme=_lyricExcerptTheme;
@property(readonly, retain, nonatomic) LPAudioPlayButtonTheme *audioBookTheme; // @synthesize audioBookTheme=_audioBookTheme;
@property(readonly, retain, nonatomic) LPAudioPlayButtonTheme *podcastsTheme; // @synthesize podcastsTheme=_podcastsTheme;
@property(readonly, retain, nonatomic) LPAudioPlayButtonTheme *appleMusicTheme; // @synthesize appleMusicTheme=_appleMusicTheme;
@property(readonly, retain, nonatomic) LPAudioPlayButtonTheme *defaultTheme; // @synthesize defaultTheme=_defaultTheme;
@property(retain, nonatomic) LPPointUnit *glyphSize; // @synthesize glyphSize=_glyphSize;
@property(retain, nonatomic) LPSize *size; // @synthesize size=_size;
- (id)initWithPlatform:(long long)arg1;	// IMP=0x000000000006fbc4

@end


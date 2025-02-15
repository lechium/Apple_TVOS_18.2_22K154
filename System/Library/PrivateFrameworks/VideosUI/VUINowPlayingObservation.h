//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUINowPlayingObservation : NSObject
{
    _Bool _playing;	// 8 = 0x8
    NSString *_nowPlayingAppBundleIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001b5d44
@property(copy, nonatomic) NSString *nowPlayingAppBundleIdentifier; // @synthesize nowPlayingAppBundleIdentifier=_nowPlayingAppBundleIdentifier;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
- (id)description;	// IMP=0x00000000001b5b5c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b59a1
- (unsigned long long)hash;	// IMP=0x00000000001b593d
- (id)initWithBundleIdentifier:(id)arg1 isPlaying:(_Bool)arg2;	// IMP=0x00000000001b58bf

@end


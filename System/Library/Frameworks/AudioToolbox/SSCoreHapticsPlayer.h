//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHHapticEngine;

__attribute__((visibility("hidden")))
@interface SSCoreHapticsPlayer : NSObject
{
    CHHapticEngine *_engine;	// 8 = 0x8
    unsigned long long _ssid;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005c432
@property(readonly) unsigned long long ssid; // @synthesize ssid=_ssid;
@property(readonly) CHHapticEngine *engine; // @synthesize engine=_engine;
- (void)prewarm:(_Bool)arg1;	// IMP=0x000000000005c40e
- (void)stop:(_Bool)arg1;	// IMP=0x000000000005c408
- (_Bool)playWithOptions:(id)arg1 completionCallbackToken:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000005c400
- (id)initWithAudio:(id)arg1 hapticDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005c3f2
- (id)initWithAudio:(id)arg1 haptic:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005c3e4
- (id)init;	// IMP=0x000000000005c3d6

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC6DropIn11AudioPlayer : NSObject
{
    MISSING_TYPE *avAudioPlayer;	// 8 = 0x8
    MISSING_TYPE *playHandler;	// 16 = 0x10
    MISSING_TYPE *timeoutTimer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000011f6f
- (id)init;	// IMP=0x0000000000011f3c
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;	// IMP=0x0000000000011eb5
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x0000000000011db5

@end


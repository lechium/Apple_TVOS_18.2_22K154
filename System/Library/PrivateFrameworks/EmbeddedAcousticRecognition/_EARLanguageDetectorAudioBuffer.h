//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARLanguageDetectorAudioBuffer : NSObject
{
    struct shared_ptr<quasar::RecogAudioBuffer> _buffer;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000633bab
- (void).cxx_destruct;	// IMP=0x0000000000633b9d
- (void)endAudio;	// IMP=0x0000000000633b8e
- (void)addAudioSamples:(const short *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000633b77
- (void)addAudioSampleData:(id)arg1;	// IMP=0x0000000000633af8
- (id)_initWithAudioBuffer:(const void *)arg1;	// IMP=0x0000000000633aa6

@end


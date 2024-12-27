//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface EARAudioReader : NSObject
{
    NSURL *_fileURL;	// 8 = 0x8
    double _sampleRate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003c64a2
- (id)_opx_enumeratePacketsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003c61fd
- (id)_opx_enumerateAudioBuffersWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003c5c4b
- (id)_avf_enumerateAudioBuffersWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003c570d
- (id)enumerateAudioBuffersWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003c5607
- (id)initWithFileURL:(id)arg1 sampleRate:(unsigned long long)arg2;	// IMP=0x00000000003c5546

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCAudioIO, VCAudioPowerSpectrumSource, VCMediaRecorder;

__attribute__((visibility("hidden")))
@interface VCCellularAudioTapIO : NSObject
{
    VCAudioIO *_audioIO;	// 8 = 0x8
    VCAudioPowerSpectrumSource *_powerSpectrumSource;	// 16 = 0x10
    struct tagVCCellularAudioTapIORealtimeContext _realtimeContext;	// 24 = 0x18
    _Bool _enableAsyncTapStart;	// 64 = 0x40
    unsigned long long _audioAssertionCounter;	// 72 = 0x48
}

@property(nonatomic) unsigned long long audioAssertionCounter; // @synthesize audioAssertionCounter=_audioAssertionCounter;
@property(nonatomic) _Bool enableAsyncTapStart; // @synthesize enableAsyncTapStart=_enableAsyncTapStart;
@property(readonly, nonatomic) VCAudioPowerSpectrumSource *powerSpectrumSource; // @synthesize powerSpectrumSource=_powerSpectrumSource;
@property(retain, nonatomic) VCAudioIO *audioIO; // @synthesize audioIO=_audioIO;
@property(retain, nonatomic) VCMediaRecorder *mediaRecorder;
@property(readonly, nonatomic) long long streamToken;
@property(readonly, nonatomic) struct tagVCCellularAudioTapIORealtimeContext *realtimeContext;
- (void)dealloc;	// IMP=0x0000000000106d4a
- (id)initWithStreamToken:(long long)arg1 powerSpectrumSource:(id)arg2 tapType:(unsigned int)arg3;	// IMP=0x0000000000106a09

@end


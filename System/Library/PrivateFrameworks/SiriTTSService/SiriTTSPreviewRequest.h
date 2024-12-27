//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString, NSURL, SiriTTSAudibleContext, SiriTTSSynthesisVoice;

@interface SiriTTSPreviewRequest
{
    MISSING_TYPE *audibleContext;	// 0 = 0x0
    MISSING_TYPE *voice;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *previewType;	// 0 = 0x0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001ec39
- (void).cxx_destruct;	// IMP=0x000000000001f191
- (id)init;	// IMP=0x000000000001f143
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001ef49
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001ed89
@property(nonatomic, readonly) NSURL *previewAudioURL;
- (id)initWithVoice:(id)arg1 previewType:(long long)arg2;	// IMP=0x000000000001ea36
@property(nonatomic) long long previewType; // @synthesize previewType;
@property(nonatomic, retain) SiriTTSSynthesisVoice *voice; // @synthesize voice;
@property(nonatomic, retain) SiriTTSAudibleContext *audibleContext; // @synthesize audibleContext;
- (void)setSiriAceViewId:(id)arg1;	// IMP=0x0000000000124787
- (id)siriAceViewId;	// IMP=0x0000000000124739
- (void)setSiriRequestId:(id)arg1;	// IMP=0x00000000001246e8
- (id)siriRequestId;	// IMP=0x000000000012469a
- (void)setDidStartSpeaking:(CDUnknownBlockType)arg1;	// IMP=0x0000000000124631
- (CDUnknownBlockType)didStartSpeaking;	// IMP=0x00000000001245e1
- (void)setPlaybackVolume:(float)arg1;	// IMP=0x0000000000124592
- (float)playbackVolume;	// IMP=0x0000000000124542
- (void)setImmediate:(_Bool)arg1;	// IMP=0x00000000001244f8
- (_Bool)immediate;	// IMP=0x00000000001244b4
- (void)setAudioSessionId:(unsigned int)arg1;	// IMP=0x000000000012446a
- (unsigned int)audioSessionId;	// IMP=0x0000000000124426

@end


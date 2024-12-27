//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray;

__attribute__((visibility("hidden")))
@interface VCAudioRedBuilder : NSObject
{
    unsigned int _numPayloads;	// 8 = 0x8
    unsigned int _maxDelay;	// 12 = 0xc
    int _redPayloadType;	// 16 = 0x10
    unsigned int _sampleRate;	// 20 = 0x14
    unsigned int _samplesPerFrame;	// 24 = 0x18
    _Bool _includeSequenceOffset;	// 28 = 0x1c
    unsigned char _historyCount;	// 29 = 0x1d
    struct tagVCAudioRedBuilderHistory _history[2];	// 32 = 0x20
    NSPointerArray *_selectedRedPayloads;	// 720 = 0x2d0
    struct tagVCAudioRedPayload _redPayloadToSend;	// 728 = 0x2d8
    unsigned char _redPayloadBufferToSend[1472];	// 760 = 0x2f8
    unsigned int _maxREDPayloadSize;	// 2232 = 0x8b8
    char _redPayloadDebugMessage[257];	// 2236 = 0x8bc
    char _redPayloadHistoryDebugMessage[2327];	// 2493 = 0x9bd
}

+ (unsigned int)redOverheadForNumPayloads:(unsigned int)arg1;	// IMP=0x006000000013cb09
@property(nonatomic) unsigned int maxREDPayloadSize; // @synthesize maxREDPayloadSize=_maxREDPayloadSize;
@property(readonly, nonatomic) int redPayloadType; // @synthesize redPayloadType=_redPayloadType;
@property(nonatomic) unsigned int numPayloads; // @synthesize numPayloads=_numPayloads;
@property(nonatomic) unsigned int maxDelay; // @synthesize maxDelay=_maxDelay;
- (id)initWithRedPayloadType:(int)arg1 sampleRate:(unsigned int)arg2 samplesPerFrame:(unsigned int)arg3 numPayloads:(unsigned int)arg4 maxDelay:(unsigned int)arg5 includeSequenceOffset:(_Bool)arg6;	// IMP=0x000000000013c996
- (void)dealloc;	// IMP=0x000000000013c8e3
- (void)resetShortREDHistoryAndPrimaryPayloadHistory:(_Bool)arg1;	// IMP=0x000000000013c669
- (struct tagVCAudioRedPayload *)redPayloadForPrimaryPayload:(struct tagVCAudioRedPayload *)arg1;	// IMP=0x000000000013bc61
- (char *)payloadHistoryDescriptionForInfoIndex:(unsigned char)arg1;	// IMP=0x000000000013bb9c
- (char *)redundantPayloadsDescription:(id)arg1;	// IMP=0x000000000013bac8
- (char *)redPayloadDescription:(struct tagVCAudioRedPayload *)arg1;	// IMP=0x000000000013ba53
- (_Bool)redundantPayloads:(id)arg1 containsPointer:(void *)arg2;	// IMP=0x000000000013b9da
- (id)selectRedPayloadsForPrimaryPayload:(struct tagVCAudioRedPayload *)arg1;	// IMP=0x000000000013af3d
- (struct tagVCAudioRedPayload *)nearestRedPayloadForTimestamp:(unsigned int)arg1 payloadHistory:(struct tagVCAudioRedPayload *)arg2 payloadHistoryCount:(unsigned int)arg3;	// IMP=0x000000000013abd2
- (char *)resetOutputPayload:(struct tagVCAudioRedPayload *)arg1;	// IMP=0x000000000013abb7
- (_Bool)isPayloadTimestampWithinThreshold:(struct tagVCAudioRedPayload *)arg1 forTimestamp:(unsigned int)arg2;	// IMP=0x000000000013a9d3
- (struct tagVCAudioRedPayload *)buildRedPayloadWithPrimaryPayload:(struct tagVCAudioRedPayload *)arg1 redPayloads:(id)arg2;	// IMP=0x000000000013a058

@end


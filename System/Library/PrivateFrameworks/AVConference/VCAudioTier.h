//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCAudioPayloadConfig;

__attribute__((visibility("hidden")))
@interface VCAudioTier : NSObject
{
    unsigned int networkBitrate;	// 8 = 0x8
    unsigned int audioCodecBitrate;	// 12 = 0xc
    unsigned int packetsPerBundle;	// 16 = 0x10
    unsigned int redNumPayloads;	// 20 = 0x14
    unsigned int redMaxDelay20ms;	// 24 = 0x18
    VCAudioPayloadConfig *payloadConfig;	// 32 = 0x20
    _Bool _bundlingAppliedByCodec;	// 40 = 0x28
    _Bool _isShortREDEnabled;	// 41 = 0x29
    unsigned int _payloadSize;	// 44 = 0x2c
    unsigned int _headerSize;	// 48 = 0x30
    unsigned int _redPayloadSize;	// 52 = 0x34
    unsigned int _redPayloadBitrate;	// 56 = 0x38
}

+ (unsigned int)redPayloadOverheadBytesWithNumPayloads:(unsigned int)arg1;	// IMP=0x006000000043952f
+ (unsigned int)totalAudioBitrateWithTierConfig:(const struct tagVCAudioTierConfig *)arg1;	// IMP=0x006000000043950c
+ (_Bool)bundlingAppliedByCodecForPayload:(int)arg1 mode:(int)arg2;	// IMP=0x00600000004394d7
@property(readonly) unsigned int redPayloadBitrate; // @synthesize redPayloadBitrate=_redPayloadBitrate;
@property(nonatomic) _Bool shortREDEnabled; // @synthesize shortREDEnabled=_isShortREDEnabled;
@property(readonly) unsigned int redPayloadSize; // @synthesize redPayloadSize=_redPayloadSize;
@property(readonly) VCAudioPayloadConfig *payloadConfig; // @synthesize payloadConfig;
@property(readonly) unsigned int redMaxDelay20ms; // @synthesize redMaxDelay20ms;
@property(readonly) unsigned int redNumPayloads; // @synthesize redNumPayloads;
@property(readonly) unsigned int packetsPerBundle; // @synthesize packetsPerBundle;
@property(readonly) unsigned int audioCodecBitrate; // @synthesize audioCodecBitrate;
@property(readonly) unsigned int networkBitrate; // @synthesize networkBitrate;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000439acb
- (id)dictionary;	// IMP=0x0000000000439938
- (id)description;	// IMP=0x00000000004397f1
- (id)initWithConfig:(const struct tagVCAudioTierConfig *)arg1;	// IMP=0x0000000000439708
- (void)setUpCalculatedPropertiesWithConfig:(const struct tagVCAudioTierConfig *)arg1;	// IMP=0x000000000043958c
- (void)setUpAssignedPropertiesWithConfig:(const struct tagVCAudioTierConfig *)arg1;	// IMP=0x0000000000439541

@end


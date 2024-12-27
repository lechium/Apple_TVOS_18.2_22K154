//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary, VCAudioRuleCollection;

__attribute__((visibility("hidden")))
@interface VCMediaStreamMultiwayConfigAudio
{
    VCAudioRuleCollection *_audioRules;	// 8 = 0x8
    NSMutableDictionary *_v2CodecConfigurations;	// 16 = 0x10
    unsigned int _preferredMediaBitrate;	// 24 = 0x18
}

@property(nonatomic) unsigned int preferredMediaBitrate; // @synthesize preferredMediaBitrate=_preferredMediaBitrate;
@property(readonly, nonatomic) NSDictionary *v2CodecConfigurations; // @synthesize v2CodecConfigurations=_v2CodecConfigurations;
@property(retain, nonatomic) VCAudioRuleCollection *audioRules; // @synthesize audioRules=_audioRules;
- (void)dealloc;	// IMP=0x0000000000469939
- (void)addV2CodecConfiguration:(id)arg1;	// IMP=0x000000000046985e
- (id)init;	// IMP=0x00000000004697e8

@end


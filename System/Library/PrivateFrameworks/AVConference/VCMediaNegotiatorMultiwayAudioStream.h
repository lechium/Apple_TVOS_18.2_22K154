//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorMultiwayAudioStream
{
    NSMutableSet *_supportedAudioPayloads;	// 8 = 0x8
}

@property(retain, nonatomic) NSSet *supportedAudioPayloads; // @synthesize supportedAudioPayloads=_supportedAudioPayloads;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029e682
- (void)addPayload:(int)arg1;	// IMP=0x000000000029e642
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029e59a
- (void)dealloc;	// IMP=0x000000000029e535
- (id)init;	// IMP=0x000000000029e4bf

@end


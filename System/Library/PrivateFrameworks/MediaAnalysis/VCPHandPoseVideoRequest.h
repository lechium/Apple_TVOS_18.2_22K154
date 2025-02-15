//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, VCPImageHandsAnalyzer;

@interface VCPHandPoseVideoRequest
{
    int _handID;	// 60 = 0x3c
    int _preferredWidth;	// 64 = 0x40
    int _preferredHeight;	// 68 = 0x44
    unsigned int _preferredFormat;	// 72 = 0x48
    VCPImageHandsAnalyzer *_analyzer;	// 80 = 0x50
    NSArray *_existingHands;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000e0e1f
- (_Bool)cleanupWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e0dfb
- (unsigned int)preferredPixelFormat;	// IMP=0x00000000000e0deb
- (struct CGSize)preferredInputSizeWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e0dcd
- (int)associateHands:(id)arg1 withExisingHands:(id)arg2;	// IMP=0x00000000000e005c
- (id)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000dfdb7
- (float)handDistance:(id)arg1 withhandB:(id)arg2;	// IMP=0x00000000000dfa41
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000000df864
- (id)init;	// IMP=0x00000000000df7c4

@end


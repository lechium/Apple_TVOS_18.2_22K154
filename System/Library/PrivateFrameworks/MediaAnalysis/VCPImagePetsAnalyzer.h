//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPCNNPetsDetectorV2;

__attribute__((visibility("hidden")))
@interface VCPImagePetsAnalyzer
{
    int _maxNumRegions;	// 8 = 0x8
    VCPCNNPetsDetectorV2 *_petsDetector;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001079b2
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;	// IMP=0x0000000000107724
- (int)convertResultsToDict:(id)arg1 results:(id)arg2;	// IMP=0x0000000000107212
- (id)initWithMaxNumRegions:(int)arg1;	// IMP=0x0000000000107139

@end


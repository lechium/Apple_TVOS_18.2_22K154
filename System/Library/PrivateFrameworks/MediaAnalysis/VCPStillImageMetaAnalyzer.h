//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCPStillImageMetaAnalyzer
{
    NSMutableArray *_results;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000f6b0b
- (id)privateResults;	// IMP=0x00000000000f6a6b
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long *)arg2;	// IMP=0x00000000000f6617
- (id)initWithRequestAnalyses:(unsigned long long)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2;	// IMP=0x00000000000f656d

@end


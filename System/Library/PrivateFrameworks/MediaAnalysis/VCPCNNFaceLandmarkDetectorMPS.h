//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPCNNData, VCPCNNModel;

__attribute__((visibility("hidden")))
@interface VCPCNNFaceLandmarkDetectorMPS
{
    VCPCNNModel *_modelLandmarks;	// 8 = 0x8
    VCPCNNData *_faceInput;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001f50ea
- (int)computeLandmarks:(float *)arg1;	// IMP=0x00000000001f4ee6
- (float *)getInputBuffer;	// IMP=0x00000000001f4ec9
- (id)init;	// IMP=0x00000000001f4729

@end


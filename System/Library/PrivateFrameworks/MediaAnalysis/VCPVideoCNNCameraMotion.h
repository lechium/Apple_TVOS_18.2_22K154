//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPVideoCNNCameraMotion
{
    NSMutableArray *_results;	// 8 = 0x8
    VCPCNNModelEspresso *_motionTypeModel;	// 16 = 0x10
    VCPCNNModelEspresso *_motionScoreModel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003869b6
- (id)results;	// IMP=0x0000000000386930
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000386928
- (int)run:(id)arg1 withPersons:(id)arg2 andRegionCrop:(struct CGRect)arg3 atTime:(CDStruct_1b6d18a9)arg4 andDuration:(CDStruct_1b6d18a9)arg5;	// IMP=0x000000000038639f
- (id)init;	// IMP=0x000000000038615c

@end


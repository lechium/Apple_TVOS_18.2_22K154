//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GEOMapFeatureBuildingFinder
{
}

- (id)findBuildingsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000063bdc7
- (id)findBuildingsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 tileSetStyle:(int)arg3 handler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000063b844
- (vector_8ad7b88a)_verticesFromTile:(id)arg1 forBuildingIndex:(unsigned int)arg2;	// IMP=0x000000000063b5e4

@end


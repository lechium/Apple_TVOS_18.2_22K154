//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Matter/MTRClusterServiceArea.h>

@class MISSING_TYPE, MTRServiceAreaClusterSelectAreasParams, MTRServiceAreaClusterSkipAreaParams, NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface _TtC13HomeDataModel22MockServiceAreaCluster : MTRClusterServiceArea
{
    MISSING_TYPE *attributes;	// 8 = 0x8
    MISSING_TYPE *commandObserver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000cd6d0
- (id)initWithDevice:(id)arg1 endpointID:(id)arg2 queue:(id)arg3;	// IMP=0x00000000000cd680
- (void)skipAreaWithParams:(MTRServiceAreaClusterSkipAreaParams *)arg1 expectedValues:(NSArray *)arg2 expectedValueInterval:(NSNumber *)arg3 completion:(void (^)(MTRServiceAreaClusterSkipAreaResponseParams *, NSError *))arg4;	// IMP=0x00000000000cd440
- (void)selectAreasWithParams:(MTRServiceAreaClusterSelectAreasParams *)arg1 expectedValues:(NSArray *)arg2 expectedValueInterval:(NSNumber *)arg3 completion:(void (^)(MTRServiceAreaClusterSelectAreasResponseParams *, NSError *))arg4;	// IMP=0x00000000000cd050

@end


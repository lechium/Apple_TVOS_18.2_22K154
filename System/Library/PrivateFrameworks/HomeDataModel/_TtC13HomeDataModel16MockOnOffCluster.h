//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Matter/MTRClusterOnOff.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC13HomeDataModel16MockOnOffCluster : MTRClusterOnOff
{
    MISSING_TYPE *attributes;	// 8 = 0x8
    MISSING_TYPE *commandObserver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000cb990
- (id)initWithDevice:(id)arg1 endpoint:(unsigned short)arg2 queue:(id)arg3;	// IMP=0x00000000000cb940
- (id)initWithDevice:(id)arg1 endpointID:(id)arg2 queue:(id)arg3;	// IMP=0x00000000000cb910
- (void)toggleWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cb830
- (void)offWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cb690
- (void)onWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cb4b0
- (id)readAttributeOnOffWithParams:(id)arg1;	// IMP=0x00000000000cb430

@end


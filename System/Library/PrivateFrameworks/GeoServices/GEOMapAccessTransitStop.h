//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol GEOMapTransitHall;

__attribute__((visibility("hidden")))
@interface GEOMapAccessTransitStop
{
    id <GEOMapTransitHall> _hall;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000025e158
- (id)findLinksOut:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000025dfbd
- (id)findLinksIn:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000025de22
- (id)findAccessPoints:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000025dcd6
- (id)findHall:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000025dad4
@property(readonly, nonatomic) unsigned long long hallID;

// Remaining properties
@property(readonly, nonatomic) double boundingRadius;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingRect;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *internalName;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *polygonPoints;
@property(readonly, nonatomic) long long polygonPointsCount;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long transitID;

@end


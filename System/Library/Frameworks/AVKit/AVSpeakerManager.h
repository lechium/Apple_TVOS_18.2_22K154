//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVRoutingController, NSArray, NSMutableArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface AVSpeakerManager : NSObject
{
    _Bool _fetchingRoutes;	// 8 = 0x8
    MPAVRoutingController *_routingController;	// 16 = 0x10
    NSArray *_routes;	// 24 = 0x18
    NSMutableArray *_selectedAppleTVRouteUIDs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000017b027
@property(retain, nonatomic) NSMutableArray *selectedAppleTVRouteUIDs; // @synthesize selectedAppleTVRouteUIDs=_selectedAppleTVRouteUIDs;
@property(readonly, copy, nonatomic) NSArray *routes; // @synthesize routes=_routes;
- (void)_updateAvailableRoutes;	// IMP=0x000000000017af40
- (void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;	// IMP=0x000000000017ae84
- (void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;	// IMP=0x000000000017ae72
- (void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;	// IMP=0x000000000017ae60
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;	// IMP=0x000000000017ae15
- (long long)compareRoute:(id)arg1 toRoute:(id)arg2;	// IMP=0x000000000017ad37
- (void)clearPreviouslySelectedAppleTVs;	// IMP=0x000000000017ad06
- (void)selectRoute:(id)arg1 withPassword:(id)arg2 replacingSelection:(_Bool)arg3;	// IMP=0x000000000017aa43
@property(readonly, nonatomic) NSSet *pendingRoutes;
@property(readonly, nonatomic) NSSet *selectedRoutes;
@property(readonly, nonatomic) _Bool supportsMultipleRouteSelection;
- (void)dealloc;	// IMP=0x000000000017a8d4
- (id)init;	// IMP=0x000000000017a734

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


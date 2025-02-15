//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSIndexPath, NSString, TVPAudioRoutingController, TVPTableView;

__attribute__((visibility("hidden")))
@interface TVPMusicSpeakerSelectionViewController : UIViewController
{
    NSIndexPath *_selectedIndexPath;	// 8 = 0x8
    TVPTableView *_tableView;	// 16 = 0x10
    TVPAudioRoutingController *_routingController;	// 24 = 0x18
    NSArray *_knownRoutes;	// 32 = 0x20
    NSArray *_otherRoutes;	// 40 = 0x28
    NSString *_lastFocusedRouteID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000092b7c
@property(retain, nonatomic) NSString *lastFocusedRouteID; // @synthesize lastFocusedRouteID=_lastFocusedRouteID;
@property(retain, nonatomic) NSArray *otherRoutes; // @synthesize otherRoutes=_otherRoutes;
@property(retain, nonatomic) NSArray *knownRoutes; // @synthesize knownRoutes=_knownRoutes;
@property(retain, nonatomic) TVPAudioRoutingController *routingController; // @synthesize routingController=_routingController;
@property(retain, nonatomic) TVPTableView *tableView; // @synthesize tableView=_tableView;
- (id)_indexPathForAudioRouteID:(id)arg1;	// IMP=0x0000000000092710
- (id)_indexPathForAudioRoute:(id)arg1;	// IMP=0x0000000000092621
- (id)_routeForIndexPath:(id)arg1;	// IMP=0x0000000000092552
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x00000000000924da
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000092435
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000923a8
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000009232d
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000922d8
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000922cd
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000009212d
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;	// IMP=0x0000000000091fd6
- (id)preferredFocusEnvironments;	// IMP=0x0000000000091f4d
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000091d9c
- (void)didReceiveMemoryWarning;	// IMP=0x0000000000091d6d
- (void)viewDidLoad;	// IMP=0x0000000000091c6a
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000091b3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


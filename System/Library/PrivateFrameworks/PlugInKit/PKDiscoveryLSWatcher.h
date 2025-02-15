//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PKDiscoveryDriver;
@protocol PKApplicationWorkspaceProxy;

@interface PKDiscoveryLSWatcher : NSObject
{
    PKDiscoveryDriver *_wdriver;	// 8 = 0x8
    id <PKApplicationWorkspaceProxy> _workspace;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000d690
@property(retain) id <PKApplicationWorkspaceProxy> workspace; // @synthesize workspace=_workspace;
@property __weak PKDiscoveryDriver *wdriver; // @synthesize wdriver=_wdriver;
- (void)updateWithUninstalledProxies:(id)arg1;	// IMP=0x000000000000d490
- (void)update;	// IMP=0x000000000000d470
- (void)pluginsDidUninstall:(id)arg1;	// IMP=0x000000000000d360
- (void)pluginsDidInstall:(id)arg1;	// IMP=0x000000000000d250
- (void)stopUpdates;	// IMP=0x000000000000d200
- (id)initWithDriver:(id)arg1;	// IMP=0x000000000000d0b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


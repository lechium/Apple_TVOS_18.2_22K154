//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface LSDPluginManager : NSObject
{
    NSDictionary *_pluginsByBundleIentifier;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00100000000d2d9c
- (void).cxx_destruct;	// IMP=0x00000000000d36fe
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain) NSDictionary *pluginsByBundleIentifier; // @synthesize pluginsByBundleIentifier=_pluginsByBundleIentifier;
- (void)endpointForServiceIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d3626
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000d3588
- (void)startPlugins;	// IMP=0x00000000000d3384
- (void)loadPluginsAtURL:(id)arg1;	// IMP=0x00000000000d2df1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


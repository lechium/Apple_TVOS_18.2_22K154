//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNLaunchServices, NSString;

@interface CNLaunchServicesProxyServiceDelegate : NSObject
{
    CNLaunchServices *_launchServices;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000b180
@property(retain, nonatomic) CNLaunchServices *launchServices; // @synthesize launchServices=_launchServices;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000b0c8
- (void)openUserActivityData:(id)arg1 inApplication:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000b02b
- (void)applicationForBundleIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000af80
- (void)defaultApplicationForDefaultAppCategory:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000aedf
- (void)applicationsAvailableForDefaultAppCategory:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ae3e
- (void)applicationsAvailableForHandlingURLScheme:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ad93
- (void)applicationsForUserActivityType:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ace8
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000ab8b
- (id)initWithLaunchServices:(id)arg1;	// IMP=0x001000000000ab0d
- (id)init;	// IMP=0x001000000000aacd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


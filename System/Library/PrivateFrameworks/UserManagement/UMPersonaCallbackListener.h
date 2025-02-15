//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSXPCListener;

@interface UMPersonaCallbackListener : NSObject
{
    NSString *_machServiceName;	// 8 = 0x8
    NSMutableSet *_xpcConnections;	// 16 = 0x10
    NSXPCListener *_xpcListener;	// 24 = 0x18
    CDUnknownBlockType _personaUpdateCallbackHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000f0a6
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000000ea99
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e844
- (void)personaListDidUpdateCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e74f
- (void)bubbleDidPop;	// IMP=0x000000000000e6d2
- (void)uploadContentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e5dd
- (void)deviceLoginSessionStateDidUpdate;	// IMP=0x000000000000e560
- (void)userSwitchTaskListDidUpdate;	// IMP=0x000000000000e4e3
- (void)readyToSwitchToLoginSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e3ee
- (void)readyToSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e2f9
- (void)willSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e204
- (id)init;	// IMP=0x000000000000e19d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


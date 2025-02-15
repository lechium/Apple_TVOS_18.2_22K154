//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener, SharingBTLESuggestedItem, UAActivityReplay, UACornerActionManager, UANetworkReplayRendevousHandler, UAPingController;

@interface ActivityManagerDebuggingManager : NSObject
{
    _Bool _supportNetworkPeers;	// 8 = 0x8
    _Bool _disableAdminEntitlmentChecking;	// 9 = 0x9
    UACornerActionManager *manager;	// 16 = 0x10
    SharingBTLESuggestedItem *fakeBTLEInjectedItem;	// 24 = 0x18
    NSXPCListener *listener;	// 32 = 0x20
    UAActivityReplay *_replayManager;	// 40 = 0x28
    UAPingController *_pingController;	// 48 = 0x30
    UANetworkReplayRendevousHandler *_networkConnectionHandler;	// 56 = 0x38
    unsigned long long _recentActionsStateHandler;	// 64 = 0x40
    struct timeval _ignoredRTimeVal;	// 72 = 0x48
}

+ (id)actionStrs:(long long)arg1 maximumInternal:(double)arg2 clear:(_Bool)arg3;	// IMP=0x0020000000097466
+ (void)appendRecentAction:(id)arg1;	// IMP=0x0010000000097319
+ (void)log:(int)arg1 format:(id)arg2;	// IMP=0x0010000000096ec0
+ (void)log:(int)arg1 format:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x0010000000096e0b
- (void).cxx_destruct;	// IMP=0x002000000009dec2
@property unsigned long long recentActionsStateHandler; // @synthesize recentActionsStateHandler=_recentActionsStateHandler;
@property(readonly) struct timeval ignoredRTimeVal; // @synthesize ignoredRTimeVal=_ignoredRTimeVal;
@property(retain) UANetworkReplayRendevousHandler *networkConnectionHandler; // @synthesize networkConnectionHandler=_networkConnectionHandler;
@property(retain) UAPingController *pingController; // @synthesize pingController=_pingController;
@property(retain) UAActivityReplay *replayManager; // @synthesize replayManager=_replayManager;
@property _Bool disableAdminEntitlmentChecking; // @synthesize disableAdminEntitlmentChecking=_disableAdminEntitlmentChecking;
@property(retain) NSXPCListener *listener; // @synthesize listener;
@property(retain) SharingBTLESuggestedItem *fakeBTLEInjectedItem; // @synthesize fakeBTLEInjectedItem;
@property(retain) UACornerActionManager *manager; // @synthesize manager;
- (void)doGetPairedDevices:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009da3a
- (void)doGetSFActivityAdvertisement:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009d6b5
- (void)doGetLoggingFileForClient:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009d61e
- (void)doSetLocalPasteboardReflection:(_Bool)arg1;	// IMP=0x001000000009d588
- (void)doSetRemotePasteboardAvailable:(_Bool)arg1;	// IMP=0x001000000009d4f0
- (void)doSetDefaults:(id)arg1 archivedValue:(id)arg2;	// IMP=0x001000000009d2cb
- (void)doCopyDefaults:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009d215
- (void)doReplayCommands:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009d024
- (void)doGetSysdiagnoseStringsIncludingPrivateData:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009cbde
- (void)stopAdvertisingPing;	// IMP=0x001000000009cb17
- (void)startAdvertisingPingWithTimeInterval:(double)arg1;	// IMP=0x001000000009ca16
- (void)doSetupRendevous:(id)arg1 domain:(id)arg2 activate:(_Bool)arg3;	// IMP=0x001000000009c96c
- (void)doSetupNetworkedPairs:(id)arg1 port:(long long)arg2;	// IMP=0x001000000009c83e
- (void)doDidSaveDelegate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009c3ae
- (void)doWillSaveDelegate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000009bf47
- (void)doTerminateServer;	// IMP=0x001000000009bf18
- (void)doInjectBTLEItem:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 title:(id)arg4 activityPayload:(id)arg5 webPageURL:(id)arg6 remoteModel:(id)arg7 duration:(double)arg8 payloadDelay:(double)arg9;	// IMP=0x001000000009b25d
- (void)doGetCurrentAdvertisedItemUUID:(CDUnknownBlockType)arg1;	// IMP=0x001000000009b161
- (void)doCopySimulatorStatusString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009b0b7
- (void)doCopyRecentActions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009af86
- (void)doFetchMoreAppSuggestions;	// IMP=0x001000000009af70
- (void)doCopyStatusString:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009a806
- (void)doCopyDynamicUserActivitiesString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009a773
- (void)doCopyDebuggingInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009a6ef
- (void)doCopyEnabledUUIDsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009a661
- (void)doCopyAdvertisedUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009a53b
- (void)doCopyAllUUIDsOfType:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009a30d
- (void)doFindMatchingUserActivityForString:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000991b4
- (void)doSetDebugOption:(id)arg1 value:(id)arg2;	// IMP=0x00100000000983ae
- (void)doNOP:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000982a5
- (void)receivePing:(id)arg1;	// IMP=0x00100000000981e4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000097dea
- (double)currentPerfTime;	// IMP=0x0010000000097da0
- (id)perfSummaryString;	// IMP=0x0010000000097d0d
@property _Bool supportNetworkPeers; // @synthesize supportNetworkPeers=_supportNetworkPeers;
- (void)setDebugging:(_Bool)arg1;	// IMP=0x00100000000972ab
- (void)resume;	// IMP=0x001000000009723e
- (void)suspend;	// IMP=0x00100000000971d1
- (id)initWithManager:(id)arg1;	// IMP=0x0010000000096f62

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


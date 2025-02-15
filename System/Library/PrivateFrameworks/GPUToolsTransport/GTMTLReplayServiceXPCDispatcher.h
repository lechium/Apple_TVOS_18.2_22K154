//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GTBulkDataService, GTServiceProperties, NSObject;
@protocol GTMTLReplayService, OS_os_log;

@interface GTMTLReplayServiceXPCDispatcher
{
    id <GTMTLReplayService> _implInstance;	// 8 = 0x8
    GTBulkDataService *_bulkDataService;	// 16 = 0x10
    GTServiceProperties *_bulkDataServiceProperties;	// 24 = 0x18
    NSObject<OS_os_log> *_log;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002a59f
- (void)resume_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x000000000002a4e3
- (void)pause_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x000000000002a427
- (void)cancel_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x000000000002a36b
- (void)raytrace_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000029f83
- (void)shaderdebug_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000029d2a
- (void)profile_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x000000000002963a
- (void)display_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x00000000000295c4
- (void)decode_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000029564
- (void)update_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000028fd9
- (void)query_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000028f79
- (void)fetch_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000028c54
- (void)terminateProcess:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000028c37
- (void)load_error_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x00000000000288ec
- (void)deregisterObserver_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000028845
- (void)registerObserver_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000028768
- (void)bulkDataService:(id)arg1 replyConnection:(id)arg2;	// IMP=0x00000000000286ed
- (void)broadcastDisconnect:(id)arg1 replyConnection:(id)arg2;	// IMP=0x000000000002867a
- (id)initWithService:(id)arg1 properties:(id)arg2 bulkDataService:(id)arg3 bulkDataServiceProperties:(id)arg4;	// IMP=0x000000000002850e

@end


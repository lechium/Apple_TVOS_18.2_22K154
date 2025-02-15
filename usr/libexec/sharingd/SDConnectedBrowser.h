//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, SDStatusMonitor;
@protocol OS_dispatch_source;

@interface SDConnectedBrowser : NSObject
{
    int _clientCount;	// 8 = 0x8
    int _recentsCount;	// 12 = 0xc
    int _connectedCount;	// 16 = 0x10
    _Bool _sendNotification;	// 20 = 0x14
    NSDictionary *_servers;	// 24 = 0x18
    NSDictionary *_odiskServers;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timer;	// 40 = 0x28
    SDStatusMonitor *_monitor;	// 48 = 0x30
    struct __CFBag *_airDropPeople;	// 56 = 0x38
}

+ (id)sharedBrowser;	// IMP=0x00400000001480d0
- (void).cxx_destruct;	// IMP=0x002000000014970c
- (void)stop;	// IMP=0x001000000014966e
- (void)start;	// IMP=0x001000000014956f
- (void)volumesChanged:(id)arg1;	// IMP=0x0010000000149555
- (void)removeAirDropPerson:(struct __SFNode *)arg1;	// IMP=0x001000000014949b
- (void)removeAirDropPersonInternal:(struct __SFNode *)arg1;	// IMP=0x00100000001493f3
@property(readonly, copy) NSArray *airDropNodes;
- (void)addAirDropPerson:(struct __SFNode *)arg1;	// IMP=0x00100000001492a5
- (void)buildNodesAndNotify:(_Bool)arg1;	// IMP=0x0010000000149277
- (void)combineRecentAndConnectedNodes:(_Bool)arg1;	// IMP=0x0010000000148c50
- (id)connectedNodes;	// IMP=0x00100000001484af
- (id)URLForRemounting:(id)arg1;	// IMP=0x00100000001483fb
- (_Bool)opticalDisk:(id)arg1;	// IMP=0x001000000014837f
- (void)setNodeModel:(struct __SFNode *)arg1 protocol:(id)arg2 url:(id)arg3;	// IMP=0x0010000000148379
- (int)removeNode:(struct __SFNode *)arg1;	// IMP=0x001000000014836e
- (int)addNode:(struct __SFNode *)arg1;	// IMP=0x0010000000148363
- (id)recentNodes;	// IMP=0x001000000014831d
- (void)addToRecents:(id)arg1;	// IMP=0x0010000000148317
- (void)browseAfterDelay:(double)arg1;	// IMP=0x00100000001482f7
- (void)postNotification;	// IMP=0x0010000000148298
@property(readonly, copy) NSArray *odiskNodes;
@property(readonly, copy) NSArray *nodes;
- (void)setODiskServers:(id)arg1;	// IMP=0x001000000014821d
- (void)setServers:(id)arg1;	// IMP=0x00100000001481ce
- (id)init;	// IMP=0x0010000000148125

@end


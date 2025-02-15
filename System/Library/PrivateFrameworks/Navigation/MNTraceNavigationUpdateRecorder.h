//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNTraceRecorder, NSString;

__attribute__((visibility("hidden")))
@interface MNTraceNavigationUpdateRecorder : NSObject
{
    MNTraceRecorder *_traceRecorder;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000651c2
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 rerouteReason:(unsigned long long)arg4;	// IMP=0x00000000000651aa
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;	// IMP=0x000000000006518e
- (void)navigationSession:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;	// IMP=0x000000000006516f
- (void)_recordRouteChangeWithRouteInfo:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x0000000000064f42
- (id)initWithTraceRecorder:(id)arg1;	// IMP=0x0000000000064ead

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


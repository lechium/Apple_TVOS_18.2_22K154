//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSActivityMonitor, NSString;

__attribute__((visibility("hidden")))
@interface HMDIDSActivityMonitor : NSObject
{
    IDSActivityMonitor *_activityMonitor;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0010000000b093d6
- (void).cxx_destruct;	// IMP=0x0000000000b08e82
@property(readonly) IDSActivityMonitor *activityMonitor; // @synthesize activityMonitor=_activityMonitor;
- (id)logIdentifier;	// IMP=0x0000000000b08e1e
@property(readonly, copy) NSString *description;
- (void)stopBroadcastingSubActivity:(id)arg1;	// IMP=0x0000000000b08b80
- (void)broadcastSubActivity:(id)arg1 toPushTokens:(id)arg2;	// IMP=0x0000000000b08476
- (void)listenWithDelegate:(id)arg1;	// IMP=0x0000000000b08320
- (id)initWithActivity:(id)arg1 serviceIdentifier:(id)arg2;	// IMP=0x0000000000b08279

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSString, NSXPCListener;
@protocol HMDXPCListenerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDXPCListener : HMFObject
{
    id <HMDXPCListenerDelegate> _delegate;	// 8 = 0x8
    NSXPCListener *_xpcListener;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000366d19
@property(readonly) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property __weak id <HMDXPCListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000366c39
- (void)stop;	// IMP=0x0000000000366bfc
- (void)start;	// IMP=0x0000000000366b78
@property(retain) NSObject<OS_dispatch_queue> *queue;
- (id)initWithXPCListener:(id)arg1;	// IMP=0x0000000000366a40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


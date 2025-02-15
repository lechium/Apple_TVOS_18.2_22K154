//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnectionListener, NSString;
@protocol OS_dispatch_queue, UPDCandidateProfileStore;

__attribute__((visibility("hidden")))
@interface UPDCandidateProfileStoreConnectionListener : NSObject
{
    id <UPDCandidateProfileStore> _store;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 16 = 0x10
    BSServiceConnectionListener *_listener;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000379d6
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x00000000000375b2
- (id)initWithStore:(id)arg1 connectionQueue:(id)arg2;	// IMP=0x00000000000372d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


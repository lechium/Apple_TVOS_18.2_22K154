//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface TIAutofillServer : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

+ (id)sharedAutofillServer;	// IMP=0x0020000000004ccc
- (void).cxx_destruct;	// IMP=0x0020000000005023
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000004ea5
- (_Bool)checkEntitlementForAddEntryStringWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x0010000000004e9d
- (void)dealloc;	// IMP=0x0010000000004e43
- (id)init;	// IMP=0x0010000000004d51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


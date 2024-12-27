//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPinnedIdentityController, IDSXPCConnection, NSString;
@protocol OS_dispatch_queue;

@interface IDSDXPCPinnedIdentity : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    IDSXPCConnection *_connection;	// 16 = 0x10
    IDSPinnedIdentityController *_pinnedIdentityController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000308e1
@property(retain, nonatomic) IDSPinnedIdentityController *pinnedIdentityController; // @synthesize pinnedIdentityController=_pinnedIdentityController;
@property(retain, nonatomic) IDSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)clearAllPinnedIdentities;	// IMP=0x001000000003087a
- (void)fetchAllPinnedIdentitiesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000030864
- (void)pinIdentityBlob:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003084e
- (void)fetchIdentityForPinningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000030838
- (id)initWithQueue:(id)arg1 connection:(id)arg2 pinnedIdentityController:(id)arg3;	// IMP=0x0010000000030780
- (id)initWithQueue:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000306e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


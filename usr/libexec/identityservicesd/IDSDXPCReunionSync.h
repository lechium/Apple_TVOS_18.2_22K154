//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDuetInterface, IDSUTunDeliveryController, IDSXPCConnection, NSString;

@interface IDSDXPCReunionSync : NSObject
{
    NSString *_clientProcessName;	// 8 = 0x8
    IDSXPCConnection *_connection;	// 16 = 0x10
    IDSUTunDeliveryController *_utunDeliveryController;	// 24 = 0x18
    IDSDuetInterface *_duetInterface;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000160683
@property(retain, nonatomic) IDSDuetInterface *duetInterface; // @synthesize duetInterface=_duetInterface;
@property(retain, nonatomic) IDSUTunDeliveryController *utunDeliveryController; // @synthesize utunDeliveryController=_utunDeliveryController;
@property(retain, nonatomic) IDSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;
- (_Bool)_isEntitledForPreferInfraWiFiForServices:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001604db
- (void)_defaultPeerSetPreferInfraWiFi:(_Bool)arg1 services:(id)arg2;	// IMP=0x001000000016045c
- (void)reunionSyncCompletedForServices:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000160232
- (void)reunionSyncStartedForServices:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000160002
- (id)initWithConnection:(id)arg1 clientProcessName:(id)arg2 UTunDeliveryController:(id)arg3 duetInterface:(id)arg4;	// IMP=0x001000000015ff1f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


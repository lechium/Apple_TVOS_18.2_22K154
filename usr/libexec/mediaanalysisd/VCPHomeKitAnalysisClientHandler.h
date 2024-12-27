//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, VCPHomeKitAnalysisClientProtocol;

@interface VCPHomeKitAnalysisClientHandler
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <VCPHomeKitAnalysisClientProtocol> _clientProxy;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_managementQueue;	// 24 = 0x18
    NSMutableDictionary *_taskIDMapping;	// 32 = 0x20
}

+ (id)errorForStatus:(int)arg1 withDescription:(id)arg2;	// IMP=0x002000000001e3af
+ (id)clientHandlerWithXPCConnection:(id)arg1;	// IMP=0x001000000001e34a
- (void).cxx_destruct;	// IMP=0x00200000000209fa
- (void)cancelAllRequests;	// IMP=0x001000000002068f
- (void)cancelRequest:(int)arg1;	// IMP=0x00100000000203c8
- (void)requestResidentMaintenance:(int)arg1 withOptions:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001fb3a
- (void)requestAnalysis:(unsigned long long)arg1 ofFragmentSurface:(id)arg2 withRequestID:(int)arg3 properties:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001f19e
- (void)requestAnalysis:(unsigned long long)arg1 ofFragmentData:(id)arg2 withRequestID:(int)arg3 properties:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001e79c
- (void)logStatusForRequest:(int)arg1 withError:(id)arg2;	// IMP=0x001000000001e58a
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x001000000001dbfc
- (id)init;	// IMP=0x001000000001dbee

@end


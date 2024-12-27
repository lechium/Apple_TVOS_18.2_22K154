//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CCXPCClient : NSObject
{
    unsigned short _failureCode;	// 8 = 0x8
    unsigned short _interruptionCode;	// 10 = 0xa
    NSString *_useCase;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    NSString *_clientId;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000034fe5
@property(readonly, nonatomic) unsigned short interruptionCode; // @synthesize interruptionCode=_interruptionCode;
@property(readonly, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property unsigned short failureCode; // @synthesize failureCode=_failureCode;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSString *useCase; // @synthesize useCase=_useCase;
- (void)requestBiomeEndpointForAppScopedService:(unsigned long long)arg1 user:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000348e5
- (id)_remoteObjectProxy:(_Bool)arg1 errorCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000034809
- (void)serviceArrayRespondingRequestWithCompletion:(CDUnknownBlockType)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003471c
- (void)serviceVersionRespondingRequest:(_Bool)arg1 completion:(CDUnknownBlockType)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000034632
- (void)serviceOptionsRespondingRequest:(_Bool)arg1 completion:(CDUnknownBlockType)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000034548
- (void)serviceRequest:(_Bool)arg1 completion:(CDUnknownBlockType)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000344bc
- (CDUnknownBlockType)_errorHandlerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000342c4
- (CDUnknownBlockType)_failureHandlerWithResponse:(unsigned short)arg1;	// IMP=0x00000000000341a0
- (void)dealloc;	// IMP=0x0000000000034162
- (void)invalidate;	// IMP=0x00000000000340d8
- (id)initWithRemoteObjectXPCInterface:(id)arg1 exportedXPCInterface:(id)arg2 connection:(id)arg3 clientId:(id)arg4 interruptionCode:(unsigned short)arg5 invalidationCode:(unsigned short)arg6 useCase:(id)arg7;	// IMP=0x0000000000033cfb
- (id)initWithRemoteObjectInterface:(id)arg1 exportedInterface:(id)arg2 connection:(id)arg3 clientId:(id)arg4 interruptionCode:(unsigned short)arg5 invalidationCode:(unsigned short)arg6 useCase:(id)arg7;	// IMP=0x0000000000033be3
- (id)initWithRemoteObjectInterface:(id)arg1 exportedInterface:(id)arg2 serviceName:(id)arg3 clientId:(id)arg4 interruptionCode:(unsigned short)arg5 invalidationCode:(unsigned short)arg6 useCase:(id)arg7;	// IMP=0x0000000000033ae4
- (id)init;	// IMP=0x0000000000033a9c

@end


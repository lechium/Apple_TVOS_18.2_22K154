//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRExternalDeviceTransportConnection.h>

@class MRDIDSServiceConnection, NSError, NSString;

@interface MRDIDSTransportConnection : MRExternalDeviceTransportConnection
{
    NSError *_error;	// 8 = 0x8
    MRDIDSServiceConnection *_connection;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
    NSString *_destination;	// 32 = 0x20
    NSString *_session;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000008b4e1
@property(readonly, nonatomic) NSString *session; // @synthesize session=_session;
@property(readonly, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) MRDIDSServiceConnection *connection; // @synthesize connection=_connection;
- (id)_exportDescriptorForOutputDevice:(id)arg1 endpoint:(id)arg2 remoteControl:(_Bool)arg3;	// IMP=0x001000000008b047
- (long long)_idsPriorityFromPriority:(long long)arg1;	// IMP=0x001000000008b02b
- (id)exportOutputDevice:(id)arg1 endpoint:(id)arg2;	// IMP=0x001000000008afd1
- (id)exportEndpoint:(id)arg1;	// IMP=0x001000000008ad12
- (void)closeWithError:(id)arg1;	// IMP=0x001000000008abf7
- (void)ingestData:(id)arg1;	// IMP=0x001000000008abe5
- (unsigned long long)sendTransportData:(id)arg1 options:(id)arg2;	// IMP=0x001000000008aa89
- (id)runLoop;	// IMP=0x001000000008aa81
- (void)setRunLoop:(id)arg1;	// IMP=0x000000000008aa7b
- (id)error;	// IMP=0x001000000008aa18
- (_Bool)isValid;	// IMP=0x001000000008a9fb
- (id)debugDescription;	// IMP=0x001000000008a859
- (void)dealloc;	// IMP=0x001000000008a7d8
- (id)initWithConnection:(id)arg1 type:(id)arg2 destination:(id)arg3 session:(id)arg4;	// IMP=0x001000000008a5a5

@end


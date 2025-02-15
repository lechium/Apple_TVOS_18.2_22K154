//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSEnvironment, MISSING_TYPE, NSMutableData, NSString;
@protocol APSTCPStreamDelegate, OS_nw_connection;

@interface APSNWTCPStream : NSObject
{
    APSEnvironment *_environment;	// 8 = 0x8
    struct __SecIdentity *_clientIdentity;	// 16 = 0x10
    struct _DNSServiceRef_t *_serviceQuery;	// 24 = 0x18
    id <APSTCPStreamDelegate> _delegate;	// 32 = 0x20
    _Bool _forceWWANInterface;	// 40 = 0x28
    _Bool _useAlternatePort;	// 41 = 0x29
    _Bool _opened;	// 42 = 0x2a
    _Bool _isConnected;	// 43 = 0x2b
    _Bool _isSuspended;	// 44 = 0x2c
    long long _interfaceConstraint;	// 48 = 0x30
    unsigned long long _generation;	// 56 = 0x38
    MISSING_TYPE *_receiveData;	// 64 = 0x40
    NSMutableData *_sendData;	// 72 = 0x48
    NSString *_peerName;	// 80 = 0x50
    NSString *_serverHostname;	// 88 = 0x58
    NSString *_serverIPAddress;	// 96 = 0x60
    NSString *_redirectHostname;	// 104 = 0x68
    NSString *_cachedIPAddress;	// 112 = 0x70
    _Bool _keepAliveProxyConfigured;	// 120 = 0x78
    _Bool _hasSentPresence;	// 121 = 0x79
    _Bool _nagleEnabled;	// 122 = 0x7a
    _Bool _hasError;	// 123 = 0x7b
    NSString *_interfaceName;	// 128 = 0x80
    NSObject<OS_nw_connection> *_connection;	// 136 = 0x88
    unsigned char _ipAddressFamily;	// 144 = 0x90
    _Bool _remainsConnectedWhenWWANSuspends;	// 145 = 0x91
    unsigned short _serverPort;	// 146 = 0x92
    long long _allowedInterfaceConstraint;	// 152 = 0x98
}

+ (_Bool)isKeepAliveProxyFeatureEnabled;	// IMP=0x0020000000081d6b
+ (_Bool)isKeepAliveProxySupportedOnSomeInterface;	// IMP=0x0010000000081d53
+ (unsigned int)cachedServerCountForDomain:(id)arg1;	// IMP=0x001000000007e27d
+ (void)setCachedServerCount:(unsigned int)arg1 forDomain:(id)arg2 ttl:(unsigned int)arg3;	// IMP=0x001000000007e148
- (void).cxx_destruct;	// IMP=0x0020000000081f3e
@property(nonatomic) long long allowedInterfaceConstraint; // @synthesize allowedInterfaceConstraint=_allowedInterfaceConstraint;
@property(readonly, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(nonatomic) unsigned char ipAddressFamily; // @synthesize ipAddressFamily=_ipAddressFamily;
@property(nonatomic) _Bool remainsConnectedWhenWWANSuspends; // @synthesize remainsConnectedWhenWWANSuspends=_remainsConnectedWhenWWANSuspends;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property(nonatomic) _Bool useAlternatePort; // @synthesize useAlternatePort=_useAlternatePort;
@property(nonatomic) _Bool forceWWANInterface; // @synthesize forceWWANInterface=_forceWWANInterface;
@property(readonly, nonatomic) unsigned short serverPort; // @synthesize serverPort=_serverPort;
@property(readonly, nonatomic) NSString *serverIPAddress; // @synthesize serverIPAddress=_serverIPAddress;
@property(readonly, nonatomic) NSString *serverHostname; // @synthesize serverHostname=_serverHostname;
@property(nonatomic) __weak id <APSTCPStreamDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *connectionDebugInfo;
- (_Bool)didPushCauseWake;	// IMP=0x0010000000081d73
- (_Bool)isKeepAliveProxySupportedOnSomeInterface;	// IMP=0x0010000000081d63
- (_Bool)isKeepAliveProxyConfigured;	// IMP=0x0010000000081d5b
- (_Bool)isKeepAliveProxySupportedOnSocketInterface;	// IMP=0x0010000000081d4b
- (void)holdPowerAssertionUntilStreamQuiesces;	// IMP=0x0010000000081d45
- (id)tcpInfoDescription;	// IMP=0x0010000000081b3e
- (id)_getTCPInfoData;	// IMP=0x0010000000081959
- (void)_receiveData;	// IMP=0x0010000000081655
- (_Bool)hasErrorStatus;	// IMP=0x001000000008164c
- (void)handleState:(int)arg1 error:(id)arg2;	// IMP=0x0010000000080f74
- (_Bool)isPeerTrustedForTrust:(struct __SecTrust *)arg1;	// IMP=0x0010000000080d56
- (_Bool)isTrust:(struct __SecTrust *)arg1 validWithPolicy:(struct __SecPolicy *)arg2 forPeer:(id)arg3;	// IMP=0x0010000000080ba7
- (void)writeDataInBackground:(id)arg1;	// IMP=0x0010000000080af6
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x0010000000080a34
- (void)_connectToServerWithConfiguration:(id)arg1;	// IMP=0x0010000000080622
- (void)_connectToServerWithCount:(unsigned int)arg1;	// IMP=0x0010000000080362
- (void)_connectToServerWithPeerName:(id)arg1;	// IMP=0x001000000007f854
- (void)close;	// IMP=0x001000000007f722
- (void)_closeQuery;	// IMP=0x001000000007f6fc
- (void)_queryRecordReply:(const void *)arg1 length:(unsigned short)arg2 ttl:(unsigned int)arg3 errorCode:(int)arg4;	// IMP=0x001000000007f48f
- (void)_openWithTXTLookup;	// IMP=0x001000000007f11b
- (void)open;	// IMP=0x001000000007e981
- (Class)configurationClass;	// IMP=0x001000000007e970
- (id)_domain;	// IMP=0x001000000007e8be
@property(readonly, copy, nonatomic) NSString *ifname;
@property(readonly, nonatomic) long long interfaceConstraint;
@property(nonatomic) _Bool isSuspended;
@property(nonatomic) _Bool isConnected;
@property(copy, nonatomic) NSString *cachedIPAddress;
@property(copy, nonatomic) NSString *redirectHostname;
- (void)dealloc;	// IMP=0x001000000007e3ef
- (id)initWithEnvironment:(id)arg1;	// IMP=0x001000000007e37f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


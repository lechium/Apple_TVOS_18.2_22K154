//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface APSEnvironment : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSURL *_configurationURL;	// 16 = 0x10
    NSString *_domain;	// 24 = 0x18
    NSString *_hostname;	// 32 = 0x20
    unsigned long long _port;	// 40 = 0x28
    unsigned long long _alternatePort;	// 48 = 0x30
    _Bool _certificateValidated;	// 56 = 0x38
    _Bool _loadBalanced;	// 57 = 0x39
    _Bool _serialProtocolSupported;	// 58 = 0x3a
    _Bool _debugHostname;	// 59 = 0x3b
    unsigned long long _messageSize;	// 64 = 0x40
    unsigned long long _largeMessageSize;	// 72 = 0x48
    unsigned long long _environmentType;	// 80 = 0x50
}

+ (void)_saveCachedProperties;	// IMP=0x0020000000078a3b
+ (void)_loadCachedProperties;	// IMP=0x0010000000078514
+ (id)environmentForName:(id)arg1;	// IMP=0x00100000000784fb
+ (void)initialize;	// IMP=0x0010000000077f00
- (void).cxx_destruct;	// IMP=0x0020000000078f15
@property(nonatomic) unsigned long long environmentType; // @synthesize environmentType=_environmentType;
@property(retain, nonatomic) NSURL *configurationURL; // @synthesize configurationURL=_configurationURL;
@property(nonatomic) _Bool debugHostname; // @synthesize debugHostname=_debugHostname;
@property(nonatomic) unsigned long long largeMessageSize; // @synthesize largeMessageSize=_largeMessageSize;
@property(nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property(nonatomic, getter=isLoadBalanced) _Bool loadBalanced; // @synthesize loadBalanced=_loadBalanced;
@property(nonatomic, getter=isCertificateValidated) _Bool certificateValidated; // @synthesize certificateValidated=_certificateValidated;
@property(nonatomic) unsigned long long alternatePort; // @synthesize alternatePort=_alternatePort;
@property(nonatomic) unsigned long long port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0010000000078de2
@property(readonly, nonatomic) unsigned long long priority;
- (unsigned long long)hash;	// IMP=0x0010000000078d8c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000078d81

@end


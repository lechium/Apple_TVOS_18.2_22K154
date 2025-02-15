//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GTServiceProperties : NSObject
{
    int _platform;	// 8 = 0x8
    NSString *_protocolName;	// 16 = 0x10
    NSArray *_protocolMethods;	// 24 = 0x18
    NSString *_deviceUDID;	// 32 = 0x20
    unsigned long long _servicePort;	// 40 = 0x28
    unsigned long long _version;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001b222
+ (id)protocolMethods:(id)arg1;	// IMP=0x001000000001b149
- (void).cxx_destruct;	// IMP=0x002000000001b91d
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) int platform; // @synthesize platform=_platform;
@property(nonatomic) unsigned long long servicePort; // @synthesize servicePort=_servicePort;
@property(copy, nonatomic) NSString *deviceUDID; // @synthesize deviceUDID=_deviceUDID;
@property(copy, nonatomic) NSArray *protocolMethods; // @synthesize protocolMethods=_protocolMethods;
@property(copy, nonatomic) NSString *protocolName; // @synthesize protocolName=_protocolName;
- (id)description;	// IMP=0x001000000001b80f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001b74c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001b688
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001b31f
- (id)initWithProtocol:(id)arg1;	// IMP=0x001000000001b22a

@end


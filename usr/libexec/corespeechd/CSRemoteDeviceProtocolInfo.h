//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface CSRemoteDeviceProtocolInfo : NSObject
{
    unsigned long long _protocolVersion;	// 8 = 0x8
    NSString *_buildVersion;	// 16 = 0x10
    NSString *_deviceProductVersion;	// 24 = 0x18
    NSString *_deviceProductType;	// 32 = 0x20
    unsigned long long _deviceCategory;	// 40 = 0x28
}

+ (id)localDeviceProtocolInfo;	// IMP=0x004000000005ff2e
+ (id)defaultProtocolInfo;	// IMP=0x001000000005fee3
- (void).cxx_destruct;	// IMP=0x002000000005feb0
@property(readonly, nonatomic) unsigned long long deviceCategory; // @synthesize deviceCategory=_deviceCategory;
@property(readonly, nonatomic) NSString *deviceProductType; // @synthesize deviceProductType=_deviceProductType;
@property(readonly, nonatomic) NSString *deviceProductVersion; // @synthesize deviceProductVersion=_deviceProductVersion;
@property(readonly, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, nonatomic) unsigned long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
- (id)description;	// IMP=0x001000000005fe3c
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
- (id)initWithXPCObject:(id)arg1;	// IMP=0x001000000005fb63
- (id)initWithProtocolVersion:(unsigned long long)arg1 buildVersion:(id)arg2 deviceProductVersion:(id)arg3 deviceProductType:(id)arg4 deviceCategory:(unsigned long long)arg5;	// IMP=0x001000000005fa97

@end


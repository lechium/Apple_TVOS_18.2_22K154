//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MILaunchServicesUnregisterOperation
{
    NSString *_bundleID;	// 8 = 0x8
    unsigned long long _domain;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000529ea
- (void).cxx_destruct;	// IMP=0x0020000000052fa1
@property(readonly, nonatomic) unsigned long long domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;	// IMP=0x0010000000052e7b
- (unsigned long long)hash;	// IMP=0x0010000000052de7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000052cba
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000052bcf
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000529f2
- (id)initWithBundleID:(id)arg1 domain:(unsigned long long)arg2 registrationUUID:(id)arg3 serialNumber:(unsigned long long)arg4;	// IMP=0x0010000000052955

@end


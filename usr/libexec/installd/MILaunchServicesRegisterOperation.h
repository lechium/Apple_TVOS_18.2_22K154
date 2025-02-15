//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString, NSURL;

@interface MILaunchServicesRegisterOperation
{
    NSString *_bundleID;	// 8 = 0x8
    unsigned long long _domain;	// 16 = 0x10
    NSSet *_personaUniqueStrings;	// 24 = 0x18
    NSURL *_mountPoint;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000050b70
- (void).cxx_destruct;	// IMP=0x002000000005155b
@property(readonly, nonatomic) NSURL *mountPoint; // @synthesize mountPoint=_mountPoint;
@property(readonly, nonatomic) NSSet *personaUniqueStrings; // @synthesize personaUniqueStrings=_personaUniqueStrings;
@property(readonly, nonatomic) unsigned long long domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;	// IMP=0x0010000000051317
- (void)updatePersonaUniqueStrings:(id)arg1;	// IMP=0x00100000000512e3
- (unsigned long long);	// IMP=0x00100000000511ee
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000050ffa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000050ea8
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000050b78
- (id)initWithBundleID:(id)arg1 domain:(unsigned long long)arg2 personas:(id)arg3 mountPoint:(id)arg4 operationUUID:(id)arg5 serialNumber:(unsigned long long)arg6;	// IMP=0x0010000000050a5f

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MCMContainerIdentity
{
    _Bool _transient;	// 48 = 0x30
}

+ (id)containerIdentityWithMinimalContainerIdentity:(id)arg1 transient:(_Bool)arg2;	// IMP=0x0060000000010fae
+ (id)containerIdentityFromPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0060000000010f0e
+ (id)containerIdentityWithIdentifier:(id)arg1 containerConfig:(id)arg2 platform:(unsigned int)arg3 userIdentityCache:(id)arg4 error:(unsigned long long *)arg5;	// IMP=0x0060000000010d62
+ (id)containerIdentityWithUserIdentity:(id)arg1 identifier:(id)arg2 containerConfig:(id)arg3 platform:(unsigned int)arg4 userIdentityCache:(id)arg5 error:(unsigned long long *)arg6;	// IMP=0x0060000000010c82
+ (id)containerIdentityWithUserIdentity:(id)arg1 identifier:(id)arg2 containerConfig:(id)arg3 platform:(unsigned int)arg4 transient:(_Bool)arg5 userIdentityCache:(id)arg6 error:(unsigned long long *)arg7;	// IMP=0x0060000000010b97
@property(readonly, nonatomic) _Bool transient; // @synthesize transient=_transient;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000010628
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001059d
- (_Bool)isEqualToContainerIdentity:(id)arg1;	// IMP=0x000000000001050f
- (unsigned long long)hash;	// IMP=0x000000000001049f
- (id)debugDescription;	// IMP=0x0000000000010415
- (id)description;	// IMP=0x000000000001038b
- (id)containerIdentity;	// IMP=0x0000000000010361
- (id)identityByChangingUserIdentity:(id)arg1;	// IMP=0x000000000001022e
- (id)identityByChangingTransient:(_Bool)arg1;	// IMP=0x00000000000101de
- (id)nontransientContainerIdentity;	// IMP=0x0000000000010088
- (id)transientContainerIdentity;	// IMP=0x000000000000ff32
- (id)initWithVersion1PlistDictionary:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000000000fd2e
- (id)plist;	// IMP=0x000000000000fc32
- (id)initWithLibsystemContainer:(struct container_object_s *)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x000000000000fb89
- (id)initWithUserIdentity:(id)arg1 identifier:(id)arg2 containerConfig:(id)arg3 platform:(unsigned int)arg4 transient:(_Bool)arg5 userIdentityCache:(id)arg6 error:(unsigned long long *)arg7;	// IMP=0x000000000000fafc
- (id)init;	// IMP=0x000000000000fa56

@end


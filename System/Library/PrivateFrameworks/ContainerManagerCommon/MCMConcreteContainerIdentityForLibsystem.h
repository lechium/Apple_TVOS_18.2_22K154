//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MCMConcreteContainerIdentityForLibsystem
{
    _Bool _existed;	// 64 = 0x40
    NSString *_containerPathIdentifier;	// 72 = 0x48
}

+ (id)containerIdentityWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerConfig:(id)arg4 platform:(unsigned int)arg5 containerPathIdentifier:(id)arg6 existed:(_Bool)arg7 transient:(_Bool)arg8 userIdentityCache:(id)arg9 error:(unsigned long long *)arg10;	// IMP=0x0060000000013d5b
- (void).cxx_destruct;	// IMP=0x000000000001386f
@property(readonly, nonatomic) _Bool existed; // @synthesize existed=_existed;
@property(readonly, nonatomic) NSString *containerPathIdentifier; // @synthesize containerPathIdentifier=_containerPathIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013750
- (id)debugDescription;	// IMP=0x00000000000136c6
- (id)description;	// IMP=0x000000000001363c
- (id)identityByChangingIdentifier:(id)arg1;	// IMP=0x00000000000134a3
- (id)identityByChangingContainerPathIdentifier:(id)arg1;	// IMP=0x0000000000013312
- (id)identityByChangingTransient:(_Bool)arg1;	// IMP=0x000000000001318b
- (id)identityByChangingUUID:(id)arg1;	// IMP=0x0000000000012ff9
- (id)nontransientConcreteContainerIdentityForLibsystem;	// IMP=0x0000000000012fc6
- (id)transientConcreteContainerIdentityForLibsystem;	// IMP=0x0000000000012f93
- (id)nontransientContainerIdentity;	// IMP=0x0000000000012de1
- (id)transientContainerIdentity;	// IMP=0x0000000000012c2f
- (struct container_object_s *)createLibsystemContainerWithError:(unsigned long long *)arg1;	// IMP=0x0000000000012b8b
- (id)initWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerConfig:(id)arg4 platform:(unsigned int)arg5 containerPathIdentifier:(id)arg6 existed:(_Bool)arg7 transient:(_Bool)arg8 userIdentityCache:(id)arg9 error:(unsigned long long *)arg10;	// IMP=0x00000000000129dc
- (id)initWithLibsystemContainer:(struct container_object_s *)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0000000000012881
- (id)init;	// IMP=0x00000000000127db

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCFeatureFlagsPayloadHandler
{
}

+ (_Bool)_reapplyConfigurationIncludingPayloads:(id)arg1 excludingPayloads:(id)arg2 error:(id *)arg3;	// IMP=0x0040000000082fa1
+ (_Bool)_reapplyPayloads:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000082a1d
+ (id)_fullyInstalledPayloads;	// IMP=0x00100000000829b7
- (void)unsetAside;	// IMP=0x00400000000839b4
- (void)setAside;	// IMP=0x0010000000083807
- (void)remove;	// IMP=0x00100000000835a4
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x00100000000833b8

@end


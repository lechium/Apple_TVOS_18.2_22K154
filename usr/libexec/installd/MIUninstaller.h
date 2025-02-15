//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MIClientConnection, NSArray, NSDictionary;

@interface MIUninstaller : NSObject
{
    unsigned int _percentComplete;	// 8 = 0x8
    NSArray *_receipt;	// 16 = 0x10
    NSArray *_identities;	// 24 = 0x18
    NSDictionary *_options;	// 32 = 0x20
    MIClientConnection *_client;	// 40 = 0x28
}

+ (id)uninstallerForIdentities:(id)arg1 withOptions:(id)arg2 forClient:(id)arg3;	// IMP=0x0040000000045389
- (void).cxx_destruct;	// IMP=0x002000000004a64d
@property(nonatomic) unsigned int percentComplete; // @synthesize percentComplete=_percentComplete;
@property(readonly, nonatomic) MIClientConnection *client; // @synthesize client=_client;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSArray *identities; // @synthesize identities=_identities;
@property(readonly, nonatomic) NSArray *receipt; // @synthesize receipt=_receipt;
- (_Bool)performUninstallationByRevokingTemporaryReference:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000047320
- (_Bool)performUninstallationWithError:(id *)arg1;	// IMP=0x0010000000047309
- (id)_uninstallBundleWithIdentity:(id)arg1 linkedToChildren:(id)arg2 waitForDeletion:(_Bool)arg3 uninstallReason:(id)arg4 temporaryReference:(id)arg5 deleteDataContainers:(_Bool)arg6 wasLastReference:(_Bool *)arg7 error:(id *)arg8;	// IMP=0x001000000004610a
- (_Bool)_removeReferenceForBundleWithIdentity:(id)arg1 linkedToChildren:(id)arg2 temporaryReference:(id)arg3 removedInfo:(id)arg4 wasLastReference:(_Bool *)arg5 gatherOptions:(unsigned long long *)arg6 error:(id *)arg7;	// IMP=0x00100000000458e4
- (_Bool)_uninstallUserStuffForIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000455bc
- (void)_fireCallbackWithStatus:(id)arg1;	// IMP=0x0010000000045568
- (void)_fireCallbackWithStatus:(id)arg1 percentComplete:(unsigned int)arg2;	// IMP=0x001000000004541d
- (id)initWithIdentitites:(id)arg1 options:(id)arg2 forClient:(id)arg3;	// IMP=0x00100000000452d1

@end


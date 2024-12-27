//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface MIInstallableBundlePatch
{
    unsigned char _patchType;	// 8 = 0x8
    NSString *_existingBundleVersion;	// 16 = 0x10
    NSString *_existingBundleShortVersion;	// 24 = 0x18
    NSString *_updatedBundleVersion;	// 32 = 0x20
    NSString *_updatedBundleShortVersion;	// 40 = 0x28
    NSURL *_manifestURL;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000004526d
@property(readonly, nonatomic) unsigned char patchType; // @synthesize patchType=_patchType;
@property(readonly, nonatomic) NSURL *manifestURL; // @synthesize manifestURL=_manifestURL;
@property(readonly, nonatomic) NSString *updatedBundleShortVersion; // @synthesize updatedBundleShortVersion=_updatedBundleShortVersion;
@property(readonly, nonatomic) NSString *updatedBundleVersion; // @synthesize updatedBundleVersion=_updatedBundleVersion;
@property(readonly, nonatomic) NSString *existingBundleShortVersion; // @synthesize existingBundleShortVersion=_existingBundleShortVersion;
@property(readonly, nonatomic) NSString *existingBundleVersion; // @synthesize existingBundleVersion=_existingBundleVersion;
- (_Bool)applyPatchWithError:(id *)arg1;	// IMP=0x0010000000044ef0
- (_Bool)_applyDeltaPatchWithError:(id *)arg1;	// IMP=0x001000000004484f
@property(readonly, nonatomic) NSString *patchTypeName; // @dynamic patchTypeName;
- (id)initWithBundle:(id)arg1 inStagingRoot:(id)arg2 packageFormat:(unsigned char)arg3 identity:(id)arg4 domain:(unsigned long long)arg5 installOptions:(id)arg6 manifestURL:(id)arg7 existingBundleContainer:(id)arg8 patchType:(unsigned char)arg9 operationType:(unsigned long long)arg10 error:(id *)arg11;	// IMP=0x00100000000443d9

@end


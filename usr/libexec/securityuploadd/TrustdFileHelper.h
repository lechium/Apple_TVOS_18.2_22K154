//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TrustdFileHelper : NSObject
{
}

- (void)fixFiles:(CDUnknownBlockType)arg1;	// IMP=0x004000000000f243
- (void)deleteOldFiles;	// IMP=0x001000000000f19c
- (void)deleteSupplementalsAssetsDir;	// IMP=0x001000000000f0d5
- (void)deleteSystemDbFiles:(struct __CFString *)arg1;	// IMP=0x001000000000efcd
- (void)allowTrustdToWriteAnalyticsFiles;	// IMP=0x001000000000efb5
- (_Bool)allowTrustdToReadFilesForMigration:(id *)arg1;	// IMP=0x001000000000ef0c
- (_Bool)changePermissionsOfKeychainDirectoryFile:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000edec
- (_Bool)fixTrustSettingsPermissions:(id *)arg1;	// IMP=0x001000000000e82e
- (_Bool)fixValidPermissions:(id *)arg1;	// IMP=0x001000000000e6b0
- (_Bool)changeOwnerOfValidFile:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000e4c4

@end


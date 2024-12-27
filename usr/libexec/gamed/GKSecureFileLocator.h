//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface GKSecureFileLocator : NSObject
{
    MISSING_TYPE *fileManager;	// 8 = 0x8
    MISSING_TYPE *rootDirectory;	// 0 = 0x0
    MISSING_TYPE *parentCachesDirectory;	// 0 = 0x0
}

+ (id)globalContextID;	// IMP=0x00200000001b8052
- (void).cxx_destruct;	// IMP=0x00400000001b970b
- (id)init;	// IMP=0x00100000001b96d5
- (void)removeCaches;	// IMP=0x00100000001b9672
- (void)removeCacheDirectoryWithBundleID:(id)arg1 language:(id)arg2 contextID:(id)arg3;	// IMP=0x00100000001b903d
- (id)globalDatabaseFileWithBundleID:(id)arg1 language:(id)arg2 name:(id)arg3;	// IMP=0x00100000001b8c4d
- (id)databaseFileWithBundleID:(id)arg1 language:(id)arg2 contextID:(id)arg3 name:(id)arg4;	// IMP=0x00100000001b8aec
- (id)databaseDirectoryWithBundleID:(id)arg1 language:(id)arg2 contextID:(id)arg3;	// IMP=0x00100000001b867b
- (id)cacheDirectoryWithBundleID:(id)arg1 language:(id)arg2 contextID:(id)arg3;	// IMP=0x00100000001b8547
- (id)initWithFileManager:(id)arg1;	// IMP=0x00100000001b83de

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLScopeChange.h>

@interface CPLScopeChange (CPLCloudKitAcceptSharedScopeTask)
- (_Bool)canAcceptShareWithCloudKit;	// IMP=0x0020000000057303
- (void)updateCKShare:(id)arg1;	// IMP=0x001000000006324c
- (id)rootRecordUsingTempCKAssetURL:(id)arg1 inZone:(id)arg2;	// IMP=0x0010000000063244
- (void)updateWithLibraryInfoCKRecord:(id)arg1 zone:(id)arg2 userRecordID:(id)arg3;	// IMP=0x00100000000631b2
- (void)updateWithRootCKRecord:(id)arg1;	// IMP=0x00100000000631ac
- (void)updateWithCKShare:(id)arg1 currentUserID:(id)arg2;	// IMP=0x00100000000630d1
@end


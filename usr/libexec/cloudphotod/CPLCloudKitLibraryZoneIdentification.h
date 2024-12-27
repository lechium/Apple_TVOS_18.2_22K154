//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CPLCloudKitLibraryZoneIdentification
{
}

+ (id)libraryInfoRecordName;	// IMP=0x00400000000a54a4
+ (_Bool)supportsCloudKitScope:(id)arg1 engineScope:(id)arg2;	// IMP=0x00100000000a5439
+ (long long)scopeTypeForCloudKitScope:(id)arg1 proposedScopeType:(long long)arg2 fetchedRecords:(id)arg3 currentUserID:(id)arg4;	// IMP=0x00100000000a5141
+ (long long)proposedScopeTypeForCloudKitScope:(id)arg1;	// IMP=0x00100000000a4f70
+ (long long)_scopeTypeForCloudKitScope:(id)arg1;	// IMP=0x00100000000a4f65
+ (id)recordNamesForScopeInfo;	// IMP=0x00100000000a4ef3
+ (id)prefixForNewScopesRelativeToMainScopeIdentifier:(id)arg1;	// IMP=0x00100000000a4eeb
+ (id)supportedZonePrefixes;	// IMP=0x00100000000a4ee1
+ (id)primaryZoneIDFromProposedZoneIDs:(id)arg1;	// IMP=0x00100000000a4c1c
- (_Bool)supportsZoneCreation;	// IMP=0x00400000000a5cc3
- (_Bool)supportsZoneDelete;	// IMP=0x00100000000a5cbb
- (id)updatedScopeChangeFromScopeChange:(id)arg1 currentUserID:(id)arg2 withCKRecord:(id)arg3;	// IMP=0x00100000000a59cf
- (id)scopeChangeFromCKRecords:(id)arg1 currentUserID:(id)arg2 previousScopeChange:(id)arg3;	// IMP=0x00100000000a5732
- (_Bool)_simulateExitForScopeIdentifier:(id)arg1;	// IMP=0x00100000000a5641
- (id)_libraryStateFromCKRecord:(id)arg1;	// IMP=0x00100000000a54b1

@end


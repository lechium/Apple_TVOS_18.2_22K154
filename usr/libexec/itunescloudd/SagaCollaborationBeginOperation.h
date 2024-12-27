//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SagaCollaborationBeginOperation
{
    unsigned long long _persistentID;	// 8 = 0x8
    unsigned long long _sharingMode;	// 16 = 0x10
    _Bool _libraryUpdateRequired;	// 24 = 0x18
    unsigned long long _resultingCollaborationCloudLibraryID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000022c52
@property(readonly, nonatomic) _Bool libraryUpdateRequired; // @synthesize libraryUpdateRequired=_libraryUpdateRequired;
@property(readonly, nonatomic) unsigned long long resultingCollaborationCloudLibraryID; // @synthesize resultingCollaborationCloudLibraryID=_resultingCollaborationCloudLibraryID;
- (void)start;	// IMP=0x0010000000022404
- (_Bool)isPersistent;	// IMP=0x00100000000223fc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000002235c
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000222b9
- (id)description;	// IMP=0x0010000000022271
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 playlistPersistentID:(long long)arg3 sharingMode:(unsigned long long)arg4;	// IMP=0x001000000002221b

@end


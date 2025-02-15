//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

@interface ICCollaborationEditRequest
{
    unsigned long long _playlistCloudLibraryID;	// 8 = 0x8
    unsigned int _cloudLibraryRevision;	// 16 = 0x10
    NSDictionary *_properties;	// 24 = 0x18
    NSArray *_trackEdits;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000003650
- (id)_requestBody;	// IMP=0x00100000000035f3
- (id)canonicalResponseForResponse:(id)arg1;	// IMP=0x00100000000034dd
- (id)initWithDatabaseID:(unsigned int)arg1 playlistSagaID:(unsigned long long)arg2 cloudLibraryRevision:(unsigned int)arg3 properties:(id)arg4 trackEdits:(id)arg5;	// IMP=0x001000000000338c

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SagaRemovePlaylistOperation
{
    NSArray *_playlistSagaIDs;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000c2ff3
- (void).cxx_destruct;	// IMP=0x00200000000c2ca9
- (void)main;	// IMP=0x00100000000c286b
- (_Bool)isPersistent;	// IMP=0x00100000000c2863
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000c27c9
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000c265a
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 playlistSagaIDs:(id)arg3;	// IMP=0x00100000000c25cc
- (id)initWithClientIdentity:(id)arg1 PlaylistSagaIDs:(id)arg2;	// IMP=0x00100000000c2546

@end


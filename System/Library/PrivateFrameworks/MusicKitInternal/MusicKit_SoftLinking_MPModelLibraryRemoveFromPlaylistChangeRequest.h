//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelLibraryRemoveFromPlaylistChangeRequest, MPModelPlaylist;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPModelLibraryRemoveFromPlaylistChangeRequest
{
    MPModelLibraryRemoveFromPlaylistChangeRequest *_underlyingRequest;	// 8 = 0x8
    MPModelPlaylist *_underlyingPlaylist;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000008832
- (void)performWithCompletionPolicy:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000864b
- (id)initWithPlaylist:(id)arg1 entriesToRemove:(id)arg2;	// IMP=0x00000000000083da

@end


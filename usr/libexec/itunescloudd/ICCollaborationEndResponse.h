//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ICCollaborationEndResponse
{
    _Bool _updateRequired;	// 8 = 0x8
    unsigned int _convertedPlaylistCloudLibraryID;	// 12 = 0xc
    unsigned int _playlistCloudLibraryIDToDelete;	// 16 = 0x10
    NSString *_convertedPlaylistGlobalID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000128014
@property(nonatomic) unsigned int playlistCloudLibraryIDToDelete; // @synthesize playlistCloudLibraryIDToDelete=_playlistCloudLibraryIDToDelete;
@property(retain, nonatomic) NSString *convertedPlaylistGlobalID; // @synthesize convertedPlaylistGlobalID=_convertedPlaylistGlobalID;
@property(nonatomic) unsigned int convertedPlaylistCloudLibraryID; // @synthesize convertedPlaylistCloudLibraryID=_convertedPlaylistCloudLibraryID;
@property(nonatomic) _Bool updateRequired; // @synthesize updateRequired=_updateRequired;

@end


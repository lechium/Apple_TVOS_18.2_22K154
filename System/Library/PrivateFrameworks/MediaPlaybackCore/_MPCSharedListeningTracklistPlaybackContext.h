//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPPlaybackContext.h>

@class MSVSectionedCollection, NSIndexPath;

__attribute__((visibility("hidden")))
@interface _MPCSharedListeningTracklistPlaybackContext : MPPlaybackContext
{
    MSVSectionedCollection *_tracklist;	// 8 = 0x8
    NSIndexPath *_startItemIndexPath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010a415
@property(retain, nonatomic) NSIndexPath *startItemIndexPath; // @synthesize startItemIndexPath=_startItemIndexPath;
@property(retain, nonatomic) MSVSectionedCollection *tracklist; // @synthesize tracklist=_tracklist;
- (id)getSharedListeningTracklistWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000029cccc

@end


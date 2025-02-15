//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ML3ImportOperation.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ML3SetCloudIDImportOperation : ML3ImportOperation
{
    NSArray *_trackInfo;	// 8 = 0x8
    NSArray *_playlistInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000144ccb
- (_Bool)_importPlaylistsUsingImportSession:(void *)arg1;	// IMP=0x0000000000144322
- (_Bool)_importTracksUsingImportSession:(void *)arg1;	// IMP=0x0000000000143888
- (_Bool)_performImportWithTransaction:(id)arg1;	// IMP=0x0000000000142abe
- (void)main;	// IMP=0x00000000001428b2
- (unsigned long long)importSource;	// IMP=0x00000000001428a7

@end


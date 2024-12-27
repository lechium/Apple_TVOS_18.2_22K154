//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SHMediaLibraryUpdateReport : NSObject
{
    NSMutableArray *_locallyFoundTracks;	// 8 = 0x8
    NSMutableArray *_missingFromLocalStoreTracks;	// 16 = 0x10
    NSMutableArray *_locallyFoundGroups;	// 24 = 0x18
    NSMutableArray *_missingFromLocalStoreGroups;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000002bf2f
@property(readonly, nonatomic) NSMutableArray *missingFromLocalStoreGroups; // @synthesize missingFromLocalStoreGroups=_missingFromLocalStoreGroups;
@property(readonly, nonatomic) NSMutableArray *locallyFoundGroups; // @synthesize locallyFoundGroups=_locallyFoundGroups;
@property(readonly, nonatomic) NSMutableArray *missingFromLocalStoreTracks; // @synthesize missingFromLocalStoreTracks=_missingFromLocalStoreTracks;
@property(readonly, nonatomic) NSMutableArray *locallyFoundTracks; // @synthesize locallyFoundTracks=_locallyFoundTracks;
- (id)init;	// IMP=0x001000000002be26

@end


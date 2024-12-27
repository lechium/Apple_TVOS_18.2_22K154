//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SHMediaItemFetcher, SHRemoteConfiguration;

@interface SHMediaLibrarySnapshotUpdater : NSObject
{
    SHMediaItemFetcher *_mediaItemFetcher;	// 8 = 0x8
    SHRemoteConfiguration *_remoteConfiguration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000003c294
@property(retain, nonatomic) SHRemoteConfiguration *remoteConfiguration; // @synthesize remoteConfiguration=_remoteConfiguration;
@property(retain, nonatomic) SHMediaItemFetcher *mediaItemFetcher; // @synthesize mediaItemFetcher=_mediaItemFetcher;
- (void)updateChanges:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003b7de
- (void)updateSnapshot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003b5f2
@property(readonly, copy, nonatomic) CDUnknownBlockType condition;
- (id)initWithMediaItemFetcher:(id)arg1 remoteConfiguration:(id)arg2;	// IMP=0x001000000003b4b7
- (id)init;	// IMP=0x001000000003b429

@end


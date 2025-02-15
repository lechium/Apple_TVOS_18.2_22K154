//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNMockFavoritesLogger : NSObject
{
}

- (void)reportFavoritesAccessedBeforeFirstUnlock;	// IMP=0x00000000000b5676
- (void)failedToWriteFavoritesToPath:(id)arg1 error:(id)arg2 simulateCrashReport:(_Bool)arg3;	// IMP=0x00000000000b5670
- (void)failedToVerifyWrittenFavoritesExistsAtPath:(id)arg1;	// IMP=0x00000000000b566a
- (void)failedToWriteRemoteFavorites:(id)arg1;	// IMP=0x00000000000b5664
- (void)failedToVerifyFavorites:(id)arg1 withPropertyListFavorites:(id)arg2 error:(id)arg3;	// IMP=0x00000000000b565e
- (void)failedToConvertFavoritesToPropertyList:(id)arg1;	// IMP=0x00000000000b5658
- (void)failedToReadFavoritesFromPath:(id)arg1 error:(id)arg2 simulateCrashReport:(_Bool)arg3;	// IMP=0x00000000000b5652
- (void)failedToReadRemoteFavorites:(id)arg1;	// IMP=0x00000000000b564c
- (void)finishedWritingFavoritesToPath:(id)arg1 entriesCount:(unsigned long long)arg2;	// IMP=0x00000000000b5646
- (void)finishedWritingRemoteFavorites;	// IMP=0x00000000000b5640
- (void)finishedReadingFavoritesFromPath:(id)arg1 entriesCount:(unsigned long long)arg2;	// IMP=0x00000000000b563a
- (void)finishedReadingRemoteFavorites;	// IMP=0x00000000000b5634
- (void)rematchingFavorites:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b5619
- (void)writingFavorites:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b55fe
- (void)readingFavorites:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b55e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


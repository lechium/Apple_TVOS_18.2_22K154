//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, TVHKMediaLibraryRevision;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryFetchControllerManagerOperation : TVHKAsynchronousOperation
{
    NSArray *_fetchControllers;	// 8 = 0x8
    TVHKMediaLibraryRevision *_mediaLibraryRevision;	// 16 = 0x10
    NSSet *_changedDMAPServerProtocols;	// 24 = 0x18
    NSDictionary *_dependentMediaEntitiesFetchControllersDictionary;	// 32 = 0x20
    NSMutableDictionary *_changedSourceMediaEntityDictionary;	// 40 = 0x28
}

+ (id)_dependentMediaEntitiesFetchControllersDictionaryForFetchControllers:(id)arg1;	// IMP=0x006000000001e051
+ (id)new;	// IMP=0x006000000001d71a
- (void).cxx_destruct;	// IMP=0x000000000001ee10
@property(readonly, nonatomic) NSMutableDictionary *changedSourceMediaEntityDictionary; // @synthesize changedSourceMediaEntityDictionary=_changedSourceMediaEntityDictionary;
@property(readonly, copy, nonatomic) NSDictionary *dependentMediaEntitiesFetchControllersDictionary; // @synthesize dependentMediaEntitiesFetchControllersDictionary=_dependentMediaEntitiesFetchControllersDictionary;
@property(readonly, copy, nonatomic) NSSet *changedDMAPServerProtocols; // @synthesize changedDMAPServerProtocols=_changedDMAPServerProtocols;
@property(readonly, copy, nonatomic) TVHKMediaLibraryRevision *mediaLibraryRevision; // @synthesize mediaLibraryRevision=_mediaLibraryRevision;
@property(readonly, copy, nonatomic) NSArray *fetchControllers; // @synthesize fetchControllers=_fetchControllers;
- (void)_didCompleteQueryForFetchController:(id)arg1 withResult:(id)arg2;	// IMP=0x000000000001e4c8
- (id)_startQueryUserInfoForFetchController:(id)arg1;	// IMP=0x000000000001e327
- (void)executionDidBegin;	// IMP=0x000000000001d973
- (id)initWithFetchControllers:(id)arg1 mediaLibraryRevision:(id)arg2 changedDMAPServerProtocols:(id)arg3;	// IMP=0x000000000001d7b8
- (id)init;	// IMP=0x000000000001d749

@end


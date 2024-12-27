//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOTileKeyList, GEOTileRequester;

__attribute__((visibility("hidden")))
@interface GEOTileServerLocalProxyBatchContext : NSObject
{
    GEOTileKeyList *_fullList;	// 8 = 0x8
    GEOTileKeyList *_interestList;	// 16 = 0x10
    GEOTileKeyList *_requesterList;	// 24 = 0x18
    GEOTileKeyList *_pendingRequesterList;	// 32 = 0x20
    GEOTileKeyList *_cacheMissNoDataList;	// 40 = 0x28
    GEOTileKeyList *_cacheMissStaleDataList;	// 48 = 0x30
    GEOTileKeyList *_cacheMissStaleUnusableDataList;	// 56 = 0x38
    unsigned char _loadReason;	// 64 = 0x40
    _Bool _proactivelyLoadOnFailure;	// 65 = 0x41
    GEOTileRequester *_tileRequester;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000024446c
@property(retain, nonatomic) GEOTileRequester *tileRequester; // @synthesize tileRequester=_tileRequester;
@property(nonatomic) _Bool proactivelyLoadOnFailure; // @synthesize proactivelyLoadOnFailure=_proactivelyLoadOnFailure;
@property(nonatomic) unsigned char loadReason; // @synthesize loadReason=_loadReason;
@property(retain, nonatomic) GEOTileKeyList *cacheMissStaleUnusableDataList; // @synthesize cacheMissStaleUnusableDataList=_cacheMissStaleUnusableDataList;
@property(retain, nonatomic) GEOTileKeyList *cacheMissStaleDataList; // @synthesize cacheMissStaleDataList=_cacheMissStaleDataList;
@property(retain, nonatomic) GEOTileKeyList *cacheMissNoDataList; // @synthesize cacheMissNoDataList=_cacheMissNoDataList;
@property(retain, nonatomic) GEOTileKeyList *pendingRequesterList; // @synthesize pendingRequesterList=_pendingRequesterList;
@property(retain, nonatomic) GEOTileKeyList *requesterList; // @synthesize requesterList=_requesterList;
@property(retain, nonatomic) GEOTileKeyList *interestList; // @synthesize interestList=_interestList;
@property(retain, nonatomic) GEOTileKeyList *fullList; // @synthesize fullList=_fullList;

@end


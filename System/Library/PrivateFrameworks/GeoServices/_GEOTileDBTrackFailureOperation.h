//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOTileDBTrackFailureOperation : NSObject
{
    struct _GEOTileKey _key;	// 8 = 0x8
    CDUnion_20bcf645 _tileSet;	// 24 = 0x18
    _Bool _shouldProactivelyLoad;	// 28 = 0x1c
}

- (id)dataForKey:(const struct _GEOTileKey *)arg1 ETag:(id *)arg2 originalLoadReason:(unsigned char *)arg3 isKnownNotToExist:(_Bool *)arg4;	// IMP=0x0000000000203115
- (_Bool)isSupercededByOperation:(id)arg1;	// IMP=0x000000000020303a
- (void)performWithDB:(id)arg1;	// IMP=0x0000000000203016
- (_Bool)canIncreaseDataSizeInDB;	// IMP=0x000000000020300e
@property(readonly, nonatomic) unsigned long long sizeInBytes;
@property(readonly, nonatomic) struct _GEOTileKey *key;
- (id)initWithTileKey:(const struct _GEOTileKey *)arg1 tileSet:(CDUnion_20bcf645)arg2 shouldProactivelyLoad:(_Bool)arg3;	// IMP=0x0000000000202f84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _OSLogCollectionReference;

__attribute__((visibility("hidden")))
@interface _OSLogChunkFileReference : NSObject
{
    _OSLogCollectionReference *_oslcr;	// 8 = 0x8
    char *_path;	// 16 = 0x10
    unsigned long long _xot;	// 24 = 0x18
    unsigned long long _xet;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000017d3a
@property(readonly, nonatomic) unsigned long long xattrEndTime; // @synthesize xattrEndTime=_xet;
@property(readonly, nonatomic) unsigned long long xattrOldestTime; // @synthesize xattrOldestTime=_xot;
@property(readonly, nonatomic) char *path; // @synthesize path=_path;
- (id)copyMappedChunkFile:(id *)arg1;	// IMP=0x0000000000017c0a
- (_Bool)readXattrForTimespan:(id *)arg1;	// IMP=0x00000000000179c4
- (void)dealloc;	// IMP=0x000000000001798a
- (id)initWithCollection:(id)arg1 subpath:(const char *)arg2;	// IMP=0x000000000001790b

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSFileWatcherFileHandleInfo : NSObject
{
    int fileHandle;	// 8 = 0x8
    _Bool closed;	// 12 = 0xc
}

+ (id)openFileWithPath:(id)arg1;	// IMP=0x0060000000945691
- (id)description;	// IMP=0x0000000000945838
- (void)dealloc;	// IMP=0x00000000009455e9
- (void)close;	// IMP=0x000000000094557b
- (_Bool)verifyAccessByAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x00000000009454e9
@property(readonly) _Bool isDirectory;

@end


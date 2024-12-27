//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDirectoryEnumerator, NSMutableArray;

@interface CPLBucketFileStorageEnumerator : NSObject
{
    NSDirectoryEnumerator *_enumerator;	// 8 = 0x8
    unsigned long long _sizeOfItemPtr;	// 16 = 0x10
    id *_itemPtr;	// 24 = 0x18
    NSMutableArray *_keeper;	// 32 = 0x20
    id _singleKeeper;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001d1a44
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00100000001d171a
- (void)dealloc;	// IMP=0x00100000001d16db
- (id)initWithDirectoryEnumerator:(id)arg1;	// IMP=0x00100000001d1670

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

@interface CMFallStatsItemsIterator : NSObject
{
    NSData *_data;	// 8 = 0x8
    NSDictionary *_item;	// 16 = 0x10
    struct Reader fMslReader;	// 24 = 0x18
    struct MemoryDelegate fMslReaderDelegate;	// 224 = 0xe0
    struct ReaderIterator fMslIterator;	// 248 = 0xf8
}

- (id).cxx_construct;	// IMP=0x0000000000160e76
- (void).cxx_destruct;	// IMP=0x0000000000160e48
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000015f8ee
- (void)dealloc;	// IMP=0x000000000015f8a4
- (id)initWithData:(id)arg1;	// IMP=0x000000000015f832

@end


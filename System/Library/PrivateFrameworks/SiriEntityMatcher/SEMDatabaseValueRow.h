//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SEMDatabaseValueRow : NSObject
{
    NSArray *_databaseValueArray;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000023c4a
- (id)dataValueAtColumnIndex:(unsigned long long)arg1;	// IMP=0x0000000000023bf6
- (id)numberValueAtColumnIndex:(unsigned long long)arg1;	// IMP=0x0000000000023ba2
- (id)stringValueAtColumnIndex:(unsigned long long)arg1;	// IMP=0x0000000000023b4e
- (unsigned long long)count;	// IMP=0x0000000000023b38
- (id)description;	// IMP=0x0000000000023b22
- (id)init;	// IMP=0x0000000000023ada
- (id)initWithDatabaseValueArray:(id)arg1;	// IMP=0x0000000000023a35

@end


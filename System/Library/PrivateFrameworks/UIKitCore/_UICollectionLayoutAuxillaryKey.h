//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutAuxillaryKey : NSObject
{
    _Bool _isSupplementary;	// 8 = 0x8
    NSString *_elementKind;	// 16 = 0x10
    long long _index;	// 24 = 0x18
    long long _auxillaryKind;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004d4c90
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d4c5a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d4b2f
- (unsigned long long)hash;	// IMP=0x00000000004d4b0a
- (id)description;	// IMP=0x00000000004d49f6

@end


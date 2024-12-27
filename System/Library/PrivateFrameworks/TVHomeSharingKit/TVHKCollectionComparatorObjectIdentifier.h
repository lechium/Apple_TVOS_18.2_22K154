//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface TVHKCollectionComparatorObjectIdentifier : NSObject
{
    NSObject<NSCopying> *_rootIdentifier;	// 8 = 0x8
    unsigned long long _collisionCount;	// 16 = 0x10
}

+ (id)new;	// IMP=0x0010000000046e3b
- (void).cxx_destruct;	// IMP=0x00000000000472e5
@property(readonly, nonatomic) unsigned long long collisionCount; // @synthesize collisionCount=_collisionCount;
@property(readonly, copy, nonatomic) NSObject<NSCopying> *rootIdentifier; // @synthesize rootIdentifier=_rootIdentifier;
- (id)description;	// IMP=0x00000000000471f6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004703f
- (unsigned long long)hash;	// IMP=0x0000000000046f8a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000046f57
- (id)initWithRootIdentifier:(id)arg1 collisionCount:(unsigned long long)arg2;	// IMP=0x0000000000046ed9
- (id)init;	// IMP=0x0000000000046e6a

@end


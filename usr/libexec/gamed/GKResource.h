//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol NSObject><NSCopying;

@interface GKResource : NSObject
{
    _Bool _invalid;	// 8 = 0x8
    NSMutableDictionary *_metadataLookup;	// 16 = 0x10
    id <NSObject><NSCopying> _resourceID;	// 24 = 0x18
    id _representedItem;	// 32 = 0x20
    double _TTL;	// 40 = 0x28
}

+ (id)resourceWithID:(id)arg1 representedItem:(id)arg2 TTL:(double)arg3;	// IMP=0x00200000000ea8c9
+ (id)resourceWithID:(id)arg1 representedItem:(id)arg2;	// IMP=0x00100000000ea8b4
+ (id)resourceWithID:(id)arg1;	// IMP=0x00100000000ea89d
+ (id)resourceForRemoveGames:(id)arg1;	// IMP=0x00100000000d9d22
+ (id)resourceForPlayer:(id)arg1 TTL:(double)arg2;	// IMP=0x00100000000eae7d
+ (id)resourceForPlayer:(id)arg1;	// IMP=0x00100000000eae68
- (void).cxx_destruct;	// IMP=0x00200000000eae35
@property(retain, nonatomic) NSMutableDictionary *metadataLookup; // @synthesize metadataLookup=_metadataLookup;
- (id);	// IMP=0x00100000000eae1a
@property(nonatomic, getter=isInvalid) _Bool invalid; // @synthesize invalid=_invalid;
@property(nonatomic) double TTL; // @synthesize TTL=_TTL;
@property(retain, nonatomic) id representedItem; // @synthesize representedItem=_representedItem;
@property(retain, nonatomic) id <NSObject><NSCopying> resourceID; // @synthesize resourceID=_resourceID;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00100000000ead27
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000eac99
- (unsigned long long)hash;	// IMP=0x00100000000eac83
- (id)description;	// IMP=0x00100000000eaaff
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000eaa7a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000eaa6f
- (id)init;	// IMP=0x00100000000eaa2b
- (id)initWithResourceID:(id)arg1 representedItem:(id)arg2 TTL:(double)arg3;	// IMP=0x00100000000ea951

@end


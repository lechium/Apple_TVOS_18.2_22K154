//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface TPSSearchQuery : NSObject
{
    MISSING_TYPE *identifier;	// 8 = 0x8
    MISSING_TYPE *searchTerm;	// 24 = 0x18
    MISSING_TYPE *options;	// 40 = 0x28
    MISSING_TYPE *matchingStyle;	// 48 = 0x30
    MISSING_TYPE *contentTypeFilter;	// 56 = 0x38
    MISSING_TYPE *maxCount;	// 64 = 0x40
    MISSING_TYPE *isCancelled;	// 72 = 0x48
    MISSING_TYPE *rankingModifier;	// 80 = 0x50
}

+ (id)escapeSearchTerm:(id)arg1;	// IMP=0x001000000006c4e0
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000095ee0
- (void).cxx_destruct;	// IMP=0x0000000000095e90
- (id)init;	// IMP=0x0000000000095e30
@property(nonatomic, readonly) NSString *description;
- (id)initWithIdentifier:(id)arg1 searchTerm:(id)arg2;	// IMP=0x0000000000095a00
- (id)initWithIdentifier:(id)arg1 searchTerm:(id)arg2 options:(unsigned long long)arg3 matchingStyle:(long long)arg4 contentTypeFilter:(long long)arg5;	// IMP=0x0000000000095860
@property(nonatomic, copy) CDUnknownBlockType rankingModifier;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled;
@property(nonatomic) long long maxCount; // @synthesize maxCount;
@property(nonatomic) long long contentTypeFilter; // @synthesize contentTypeFilter;
@property(nonatomic) long long matchingStyle; // @synthesize matchingStyle;
@property(nonatomic) unsigned long long options; // @synthesize options;
@property(nonatomic, copy) NSString *searchTerm;
@property(nonatomic, copy) NSString *identifier;
- (id)makeCSQueryWith:(id)arg1;	// IMP=0x000000000006c040
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000096590
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000096200
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000096790
@property(nonatomic, readonly) long long hash;

@end


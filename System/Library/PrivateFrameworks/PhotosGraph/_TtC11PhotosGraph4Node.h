//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface _TtC11PhotosGraph4Node : NSObject
{
    MISSING_TYPE *identifier;	// 8 = 0x8
    MISSING_TYPE *labels;	// 16 = 0x10
    MISSING_TYPE *properties;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001aec70
- (id)init;	// IMP=0x00000000001aec10
- (id)copyWithZone:(void *)arg1;	// IMP=0x00000000001aec00
- (void)resolveIdentifier:(unsigned long long)arg1;	// IMP=0x00000000001aebe0
- (id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 properties:(id)arg3;	// IMP=0x00000000001aeb40
@property(nonatomic, readonly) NSDictionary *properties;
@property(nonatomic, readonly) NSSet *labels;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier;

@end


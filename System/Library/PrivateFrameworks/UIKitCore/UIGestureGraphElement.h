//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface UIGestureGraphElement : NSObject
{
    NSMutableDictionary *_properties;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a8c906
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x0000000000a8c8ea
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000a8c8d8
- (id)description;	// IMP=0x0000000000a8c57b
- (void)setProperties:(id)arg1;	// IMP=0x0000000000a8c533
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000a8c4dc
- (void)removeAllProperties;	// IMP=0x0000000000a8c4c6
- (void)removePropertyForKey:(id)arg1;	// IMP=0x0000000000a8c4b0
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a8c49a
- (_Bool)hasProperties:(id)arg1;	// IMP=0x0000000000a8c330
- (id)propertyForKey:(id)arg1;	// IMP=0x0000000000a8c31a
- (id)initWithLabel:(id)arg1;	// IMP=0x0000000000a8c23c

@end


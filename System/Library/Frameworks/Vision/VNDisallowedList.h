//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VNDisallowedList : NSObject
{
    NSSet *_identifiers;	// 8 = 0x8
}

+ (id)disallowedListFromUTF8StringArray:(const char **)arg1;	// IMP=0x0010000000330cc2
+ (id)sceneNetV5;	// IMP=0x001000000019f159
+ (id)sceneNetV3;	// IMP=0x001000000019f129
- (void).cxx_destruct;	// IMP=0x0000000000330cb2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000330ca7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000330c3e
- (unsigned long long)hash;	// IMP=0x0000000000330c28
- (_Bool)containsIdentifier:(id)arg1;	// IMP=0x0000000000330c12
@property(readonly, copy) NSSet *allIdentifiers;
@property(readonly) unsigned long long identifierCount;
- (id)initWithIdentifiers:(id)arg1;	// IMP=0x0000000000330b6b

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface CMTimeMappingAsValue : NSValue
{
    CDStruct_82206317 _timeMapping;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000011def
+ (id)valueWithCMTimeMapping:(CDStruct_82206317)arg1;	// IMP=0x0060000000011946
- (Class)classForCoder;	// IMP=0x000000000001204e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011f30
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011df7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011d36
- (unsigned long long)hash;	// IMP=0x0000000000011c5b
- (_Bool)isEqualToValue:(id)arg1;	// IMP=0x0000000000011b10
- (id)description;	// IMP=0x0000000000011a36
- (const char *)objCType;	// IMP=0x0000000000011a29
- (void)getValue:(void *)arg1;	// IMP=0x00000000000119e8
- (CDStruct_82206317)CMTimeMappingValue;	// IMP=0x00000000000119a4

@end


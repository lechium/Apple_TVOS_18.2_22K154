//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

__attribute__((visibility("hidden")))
@interface TVHKDMAPMacDateValueTransformer : NSValueTransformer
{
}

+ (id)_date1904;	// IMP=0x008000000003322d
+ (id)_dateWithSecondsSince1904:(double)arg1;	// IMP=0x0080000000033206
+ (_Bool)allowsReverseTransformation;	// IMP=0x0080000000033111
+ (Class)transformedValueClass;	// IMP=0x0080000000033100
- (id)reverseTransformedValue:(id)arg1;	// IMP=0x0000000000033163
- (id)transformedValue:(id)arg1;	// IMP=0x0000000000033119

@end


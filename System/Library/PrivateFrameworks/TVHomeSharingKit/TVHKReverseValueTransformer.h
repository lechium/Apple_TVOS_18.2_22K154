//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

__attribute__((visibility("hidden")))
@interface TVHKReverseValueTransformer : NSValueTransformer
{
    NSValueTransformer *_valueTransformer;	// 8 = 0x8
}

+ (id)new;	// IMP=0x006000000006962b
+ (id)reverseValueTransformerWithValueTransformer:(id)arg1;	// IMP=0x006000000006938a
- (void).cxx_destruct;	// IMP=0x0000000000069850
@property(retain, nonatomic) NSValueTransformer *valueTransformer; // @synthesize valueTransformer=_valueTransformer;
- (id)reverseTransformedValue:(id)arg1;	// IMP=0x00000000000697b1
- (id)transformedValue:(id)arg1;	// IMP=0x0000000000069737
- (id)initWithValueTransformer:(id)arg1;	// IMP=0x00000000000696c9
- (id)init;	// IMP=0x000000000006965a

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UIAttributeTraitStorageRecord : NSObject
{
    UITraitCollection *_traitCollection;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000bb037c
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (id)description;	// IMP=0x0000000000bb02eb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000bb027e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000bb01c2
- (id)initWithTraitCollection:(id)arg1 value:(id)arg2;	// IMP=0x0000000000bb0129

@end


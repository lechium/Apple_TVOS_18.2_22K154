//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _SRUIFDataStoreEntry : NSObject
{
    long long _type;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000094fd
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)initWithPropertyListRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000091df
- (id)propertyListRepresentation;	// IMP=0x000000000000910a
- (id)_valueForPropertyListRepresentation:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000008ff5
- (id)_valuePropertyListRepresentation;	// IMP=0x0000000000008ef7
- (long long)_typeForPropertyListString:(id)arg1;	// IMP=0x0000000000008ed7
- (id)_propertyListStringForType;	// IMP=0x0000000000008eaf
- (id)initWithType:(long long)arg1 value:(id)arg2;	// IMP=0x0000000000008e38

@end


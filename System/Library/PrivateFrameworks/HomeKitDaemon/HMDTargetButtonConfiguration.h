//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDTargetButtonConfiguration : HMFObject
{
    unsigned char _identifier;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000525793
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned char identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x00000000005256f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005255e2
- (id)shortDescription;	// IMP=0x000000000052553d
- (id)description;	// IMP=0x000000000052546d
- (id)buttonName;	// IMP=0x00000000005253cd
- (id)initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3;	// IMP=0x0000000000525303
- (id)init;	// IMP=0x000000000052525b

@end


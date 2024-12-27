//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDTargetConfiguration : HMFObject
{
    NSUUID *_uuid;	// 8 = 0x8
    NSNumber *_identifier;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    long long _category;	// 32 = 0x20
    NSArray *_buttonConfiguration;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002ec8ca
@property(retain, nonatomic) NSArray *buttonConfiguration; // @synthesize buttonConfiguration=_buttonConfiguration;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (unsigned long long)hash;	// IMP=0x00000000002ec809
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ec6f9
- (id)initWithAccessory:(id)arg1 buttonConfiguration:(id)arg2;	// IMP=0x00000000002ec3cd
- (id)description;	// IMP=0x00000000002ec298
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(long long)arg3 buttonConfiguration:(id)arg4;	// IMP=0x00000000002ec198
- (id)init;	// IMP=0x00000000002ec0f0

@end


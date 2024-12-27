//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface ASCDescriber : NSObject
{
    id <NSObject> _object;	// 8 = 0x8
    NSMutableArray *_properties;	// 16 = 0x10
}

+ (id)nilObject;	// IMP=0x004000000001a35c
- (void).cxx_destruct;	// IMP=0x000000000001afad
@property(readonly, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) id <NSObject> object; // @synthesize object=_object;
- (id)description;	// IMP=0x000000000001ae85
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ace2
- (unsigned long long)hash;	// IMP=0x000000000001ac30
- (id)finalizeDescription;	// IMP=0x000000000001ab71
- (id)describeProperties;	// IMP=0x000000000001a8e3
- (id)describeObject;	// IMP=0x000000000001a823
- (void)addObject:(id)arg1 withName:(id)arg2;	// IMP=0x000000000001a735
- (void)addSensitiveObject:(id)arg1 withName:(id)arg2;	// IMP=0x000000000001a6d1
- (void)addDouble:(double)arg1 withName:(id)arg2;	// IMP=0x000000000001a64c
- (void)addUInt64:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x000000000001a5cd
- (void)addInt64:(long long)arg1 withName:(id)arg2;	// IMP=0x000000000001a54e
- (void)addUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x000000000001a4cf
- (void)addInteger:(long long)arg1 withName:(id)arg2;	// IMP=0x000000000001a450
- (void)addBool:(_Bool)arg1 withName:(id)arg2;	// IMP=0x000000000001a3ee
- (id)initWithObject:(id)arg1;	// IMP=0x000000000001a369

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDTimeBasedFlagNameAndHomeSpecifier : NSObject
{
    NSString *_flagName;	// 8 = 0x8
    NSUUID *_homeUUID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001e3692
+ (id)specifierWithFlagName:(id)arg1 homeUUID:(id)arg2;	// IMP=0x00100000001e3620
- (void).cxx_destruct;	// IMP=0x00000000001e35f8
@property(readonly, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly, nonatomic) NSString *flagName; // @synthesize flagName=_flagName;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e3372
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e3367
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e32b9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e31df
- (id)initWithFlagName:(id)arg1 homeUUID:(id)arg2;	// IMP=0x00000000001e3146

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCHIPControllerResidentNodeStorage : HMFObject
{
    NSDictionary *_keyValueStore;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0010000000ec2f4e
- (void).cxx_destruct;	// IMP=0x0000000000ec2f3b
@property(copy) NSDictionary *keyValueStore; // @synthesize keyValueStore=_keyValueStore;
- (id)attributeDescriptions;	// IMP=0x0000000000ec2de1
- (id)logIdentifier;	// IMP=0x0000000000ec2d68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ec2cf4
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ec2be6
- (void)updateHomeModel:(id)arg1;	// IMP=0x0000000000ec2aee
- (_Bool)updateUsingHomeModel:(id)arg1;	// IMP=0x0000000000ec29f4
@property(readonly, copy) NSDictionary *debugDictionaryRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


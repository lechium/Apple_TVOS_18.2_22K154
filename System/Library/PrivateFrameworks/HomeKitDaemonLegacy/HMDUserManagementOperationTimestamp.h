//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, NSDate, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDUserManagementOperationTimestamp : HMFObject
{
    HMDDevice *_device;	// 8 = 0x8
    NSDate *_timestamp;	// 16 = 0x10
    NSNumber *_state;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000968683
- (void).cxx_destruct;	// IMP=0x0000000000968641
@property(readonly) NSNumber *state; // @synthesize state=_state;
@property(readonly) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) HMDDevice *device; // @synthesize device=_device;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000096851c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009683ee
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000968228
- (id)attributeDescriptions;	// IMP=0x00000000009680aa
- (id)shortDescription;	// IMP=0x000000000096800f
- (id)initWithDevice:(id)arg1 state:(unsigned long long)arg2;	// IMP=0x0000000000967f2f

@end


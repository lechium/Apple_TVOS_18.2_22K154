//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHomeLockNotificationContextResolutionResult : HMFObject
{
    NSUUID *_userUUID;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
    NSUUID *_labelIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000c696eb
- (void).cxx_destruct;	// IMP=0x0000000000c696a9
@property(readonly, copy) NSUUID *labelIdentifier; // @synthesize labelIdentifier=_labelIdentifier;
@property(readonly, copy) NSString *label; // @synthesize label=_label;
@property(readonly, copy) NSUUID *userUUID; // @synthesize userUUID=_userUUID;
- (id)attributeDescriptions;	// IMP=0x0000000000c69484
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000c693a1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000c69289
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c6927e
- (unsigned long long)hash;	// IMP=0x0000000000c691bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c69026
- (id)initWithUserUUID:(id)arg1 label:(id)arg2 labelIdentifier:(id)arg3;	// IMP=0x0000000000c68f5c

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDUser, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemovedUser : HMFObject
{
    _Bool _removalInProgress;	// 8 = 0x8
    HMDUser *_user;	// 16 = 0x10
    NSDate *_expirationDate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009b08ee
+ (id)removedUserWithUser:(id)arg1;	// IMP=0x00100000009b0861
- (void).cxx_destruct;	// IMP=0x00000000009b0830
@property(getter=isRemovalInProgress) _Bool removalInProgress; // @synthesize removalInProgress=_removalInProgress;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009b073e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009b067c
- (_Bool)isEqualToUser:(id)arg1;	// IMP=0x00000000009b05e4
- (_Bool)isEqualToUserID:(id)arg1;	// IMP=0x00000000009b054f
- (_Bool)isExpired;	// IMP=0x00000000009b04cb
@property(readonly, nonatomic) NSString *mergeID;
- (id)description;	// IMP=0x00000000009b03a7
- (id)initWithUser:(id)arg1 expiration:(id)arg2;	// IMP=0x00000000009b02f8

@end


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

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000076a33d
+ (id)removedUserWithUser:(id)arg1;	// IMP=0x001000000076a2b0
- (void).cxx_destruct;	// IMP=0x000000000076a27f
@property(getter=isRemovalInProgress) _Bool removalInProgress; // @synthesize removalInProgress=_removalInProgress;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000076a18d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000076a0cb
- (_Bool)isEqualToUser:(id)arg1;	// IMP=0x000000000076a033
- (_Bool)isEqualToUserID:(id)arg1;	// IMP=0x0000000000769f9e
- (_Bool)isExpired;	// IMP=0x0000000000769f1a
@property(readonly, nonatomic) NSString *mergeID;
- (id)description;	// IMP=0x0000000000769df6
- (id)initWithUser:(id)arg1 expiration:(id)arg2;	// IMP=0x0000000000769d47

@end


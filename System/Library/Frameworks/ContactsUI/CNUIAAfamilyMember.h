//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNUIAAfamilyMember : NSObject
{
    _Bool _isMe;	// 8 = 0x8
    NSString *_appleID;	// 16 = 0x10
    NSString *_firstName;	// 24 = 0x18
    NSString *_lastName;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002c617
+ (id)cnuiFamilyMemberWithAAFamilyMember:(id)arg1;	// IMP=0x001000000002c60f
- (void).cxx_destruct;	// IMP=0x000000000002c68b
@property(nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002c628
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002c61f

@end


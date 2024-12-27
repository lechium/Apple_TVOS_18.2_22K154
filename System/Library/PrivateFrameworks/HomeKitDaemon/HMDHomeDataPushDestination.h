//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDUser, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeDataPushDestination : NSObject
{
    _Bool _ignoreConfigCompare;	// 8 = 0x8
    NSString *_username;	// 16 = 0x10
    HMDUser *_user;	// 24 = 0x18
    NSString *_destination;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000b34a79
@property(nonatomic) _Bool ignoreConfigCompare; // @synthesize ignoreConfigCompare=_ignoreConfigCompare;
@property(readonly, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSString *pushDestination;
- (id)description;	// IMP=0x0000000000b348c2
- (id)initWithUser:(id)arg1 destination:(id)arg2;	// IMP=0x0000000000b34800

@end


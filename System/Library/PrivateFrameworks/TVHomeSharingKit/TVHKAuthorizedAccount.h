//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface TVHKAuthorizedAccount : NSObject
{
    NSNumber *_userIdentifier;	// 8 = 0x8
    NSData *_keyList;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000045961
@property(copy, nonatomic) NSData *keyList; // @synthesize keyList=_keyList;
@property(copy, nonatomic) NSNumber *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
- (id)description;	// IMP=0x0000000000045843
- (id)initWithUserIdentifier:(id)arg1 keyList:(id)arg2;	// IMP=0x0000000000045724
- (id)init;	// IMP=0x00000000000456b5
- (id)new;	// IMP=0x0000000000045686

@end


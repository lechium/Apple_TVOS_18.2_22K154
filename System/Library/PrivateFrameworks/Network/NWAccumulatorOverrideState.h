//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWAccumulatorOverrideState : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSString *_state;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000168200
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
- (void)updateWithState:(id)arg1;	// IMP=0x0000000000167ed0
- (id)description;	// IMP=0x0000000000167e30
- (id)init;	// IMP=0x0000000000167df0

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface geo_reentrant_isolater : NSObject
{
    char *_name;	// 8 = 0x8
    struct os_unfair_recursive_lock_s _lock;	// 16 = 0x10
}

- (id)debugDescription;	// IMP=0x0000000000003b2d
- (id)description;	// IMP=0x0000000000003ab8
- (void)dealloc;	// IMP=0x0000000000003a79
- (id)initWithName:(const char *)arg1;	// IMP=0x0000000000003a18

@end


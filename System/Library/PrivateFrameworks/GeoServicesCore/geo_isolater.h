//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface geo_isolater : NSObject
{
    char *_name;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

- (id)debugDescription;	// IMP=0x00000000000035bf
- (id)description;	// IMP=0x000000000000354a
- (void)dealloc;	// IMP=0x000000000000350b
- (id)initWithName:(const char *)arg1;	// IMP=0x00000000000034aa

@end


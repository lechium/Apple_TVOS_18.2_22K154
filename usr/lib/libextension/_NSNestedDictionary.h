//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

__attribute__((visibility("hidden")))
@interface _NSNestedDictionary : NSMutableDictionary
{
    id _locals;	// 8 = 0x8
    id _bindings;	// 16 = 0x10
}

- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000089fa6b
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000089fa19
- (id)objectEnumerator;	// IMP=0x000000000089f9ff
- (id)keyEnumerator;	// IMP=0x000000000089f9e5
- (id)objectForKey:(id)arg1;	// IMP=0x000000000089f989
- (unsigned long long)count;	// IMP=0x000000000089f901

@end


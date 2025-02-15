//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOrderedSet.h>

@class NSKeyValueNonmutatingOrderedSetMethodSet, NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueOrderedSet : NSOrderedSet
{
    NSObject *_container;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSKeyValueNonmutatingOrderedSetMethodSet *_methods;	// 24 = 0x18
}

+ (id)_proxyShare;	// IMP=0x0010000000931c73
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x0000000000931fe0
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000931f2c
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x0000000000931efe
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000931e6c
- (unsigned long long)count;	// IMP=0x0000000000931e3e
- (void)dealloc;	// IMP=0x0000000000931de1
- (void)_proxyNonGCFinalize;	// IMP=0x0000000000931d82
- (CDStruct_a70f6672)_proxyLocator;	// IMP=0x0000000000931d66
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x0000000000931c9a

@end


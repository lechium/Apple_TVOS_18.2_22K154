//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSKeyValueNonmutatingArrayMethodSet, NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueArray : NSArray
{
    NSObject *_container;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSKeyValueNonmutatingArrayMethodSet *_methods;	// 24 = 0x18
}

+ (id)_proxyShare;	// IMP=0x00100000007c263e
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000007c297d
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007c28c9
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000007c2837
- (unsigned long long)count;	// IMP=0x00000000007c2809
- (void)dealloc;	// IMP=0x00000000007c27ac
- (void)_proxyNonGCFinalize;	// IMP=0x00000000007c274d
- (CDStruct_a70f6672)_proxyLocator;	// IMP=0x00000000007c2731
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000007c2665

@end


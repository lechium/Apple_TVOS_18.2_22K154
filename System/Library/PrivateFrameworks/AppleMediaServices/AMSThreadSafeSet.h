//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSThreadSafeObject, NSArray;

__attribute__((visibility("hidden")))
@interface AMSThreadSafeSet : NSObject
{
    AMSThreadSafeObject *_backingSet;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004e863f
@property(retain, nonatomic) AMSThreadSafeObject *backingSet; // @synthesize backingSet=_backingSet;
- (_Bool)containsObject:(id)arg1;	// IMP=0x00000000004e84e3
- (void)removeObject:(id)arg1;	// IMP=0x00000000004e83f2
- (void)addObject:(id)arg1;	// IMP=0x00000000004e8301
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, copy, nonatomic) NSArray *allObjects;
- (id)init;	// IMP=0x00000000004e8014

@end


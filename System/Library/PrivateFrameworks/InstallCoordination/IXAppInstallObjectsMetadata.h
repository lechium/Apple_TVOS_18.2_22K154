//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface IXAppInstallObjectsMetadata : NSObject
{
    unsigned long long _count;	// 8 = 0x8
    NSHashTable *_instances;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005bc26
@property(retain, nonatomic) NSHashTable *instances; // @synthesize instances=_instances;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)addObject:(id)arg1;	// IMP=0x000000000005bb70
- (id)init;	// IMP=0x000000000005badc

@end


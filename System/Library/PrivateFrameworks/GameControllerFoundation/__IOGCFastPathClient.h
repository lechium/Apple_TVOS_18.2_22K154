//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface __IOGCFastPathClient : NSObject
{
    struct __CFAllocator *allocator;	// 8 = 0x8
    unsigned int service;	// 16 = 0x10
    struct IOCFPlugInInterfaceStruct **pluginInterface;	// 24 = 0x18
    struct IOGCFastPathClientInterface **clientInterface;	// 32 = 0x20
    unsigned long long providerID;	// 40 = 0x28
}

- (id)description;	// IMP=0x000000000003d10e
- (void)dealloc;	// IMP=0x000000000003d06d

@end


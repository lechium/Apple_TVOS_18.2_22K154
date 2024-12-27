//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSConnection, NSSet;

__attribute__((visibility("hidden")))
@interface NSConnectionHelper : NSObject
{
    double reqLim;	// 8 = 0x8
    double repLim;	// 16 = 0x10
    _Bool remoteUsesKeyedDO;	// 24 = 0x18
    NSSet *allowlist;	// 32 = 0x20
    _Bool useKeyedDO;	// 40 = 0x28
    NSConnection *parent;	// 48 = 0x30
}

- (void)setAllowList:(id)arg1;	// IMP=0x0000000000762cd7
- (void)dealloc;	// IMP=0x0000000000762c79
- (id)init;	// IMP=0x0000000000762c23

@end


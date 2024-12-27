//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_LSLazyPropertyList.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _LSPlugInPropertyList : _LSLazyPropertyList
{
    _LSLazyPropertyList *_infoPlist;	// 8 = 0x8
    _LSLazyPropertyList *_sdkPlist;	// 16 = 0x10
    NSDictionary *_mergedPlist;	// 24 = 0x18
    struct os_unfair_lock_s _mergeLock;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001113a9
- (void).cxx_destruct;	// IMP=0x0000000000111559
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000111450
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001113b1
- (_Bool)_getValue:(id *)arg1 forPropertyListKey:(id)arg2;	// IMP=0x0000000000111305
- (_Bool)_getPropertyList:(id *)arg1;	// IMP=0x00000000001111ec
- (id)initWithInfoPlist:(id)arg1 SDKPlist:(id)arg2;	// IMP=0x000000000011114c

@end


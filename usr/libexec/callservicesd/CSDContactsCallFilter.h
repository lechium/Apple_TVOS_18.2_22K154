//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface CSDContactsCallFilter
{
    MISSING_TYPE *contactStore;	// 8 = 0x8
    MISSING_TYPE *appleCareHandles;	// 16 = 0x10
    MISSING_TYPE *carrierBundleController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00400000002bdc99
- (id)init;	// IMP=0x00100000002bdc58
- (_Bool)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x00100000002bce87
- (_Bool)isUnknownCaller:(id)arg1;	// IMP=0x00100000002bcd1e

@end


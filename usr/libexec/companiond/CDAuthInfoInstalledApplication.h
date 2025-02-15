//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LSApplicationRecord, NSString;

@interface CDAuthInfoInstalledApplication : NSObject
{
    LSApplicationRecord *_applicationRecord;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000caea
- (id)websiteDomain;	// IMP=0x001000000000cae2
- (id)localizedName;	// IMP=0x001000000000ca96
- (id)teamIdentifier;	// IMP=0x001000000000ca4a
- (id)applicationIdentifier;	// IMP=0x001000000000c9fe
- (id)bundleIdentifier;	// IMP=0x001000000000c9b2
- (id)initWithApplicationRecord:(id)arg1;	// IMP=0x001000000000c947

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


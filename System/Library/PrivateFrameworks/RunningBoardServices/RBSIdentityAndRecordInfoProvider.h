//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RBSIdentityAndRecordInfoProvider : NSObject
{
    NSString *_personaString;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSString *_persistentJobLabel;	// 24 = 0x18
    int _platform;	// 32 = 0x20
    unsigned long long _bundleInode;	// 40 = 0x28
    unsigned long long _execInode;	// 48 = 0x30
}

+ (id)_providerWithIdentity:(id)arg1 record:(id)arg2;	// IMP=0x00100000000106ad
- (void).cxx_destruct;	// IMP=0x000000000001075c
- (id)fetchWrappedInfoWithError:(out id *)arg1;	// IMP=0x000000000001071f
- (id)_initWithIdentity:(id)arg1 record:(id)arg2;	// IMP=0x00000000000104d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


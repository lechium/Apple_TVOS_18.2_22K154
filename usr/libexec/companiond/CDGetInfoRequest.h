//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CDGetInfoRequest : NSObject
{
    NSData *_storeAccountToken;	// 8 = 0x8
    NSData *_appleAccountToken;	// 16 = 0x10
    NSString *_nonce;	// 24 = 0x18
    unsigned long long _deviceFlags;	// 32 = 0x20
    NSString *_deviceModel;	// 40 = 0x28
    NSString *_deviceName;	// 48 = 0x30
    NSString *_deviceBuildVersion;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000001baf5
@property(copy, nonatomic) NSString *deviceBuildVersion; // @synthesize deviceBuildVersion=_deviceBuildVersion;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(nonatomic) unsigned long long deviceFlags; // @synthesize deviceFlags=_deviceFlags;
@property(copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(copy, nonatomic) NSData *appleAccountToken; // @synthesize appleAccountToken=_appleAccountToken;
@property(copy, nonatomic) NSData *storeAccountToken; // @synthesize storeAccountToken=_storeAccountToken;
@property(readonly, copy) NSString *description;
- (id)makeRapportDictionary;	// IMP=0x001000000001b7b7
- (id)initWithRapportDictionary:(id)arg1;	// IMP=0x001000000001b5f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


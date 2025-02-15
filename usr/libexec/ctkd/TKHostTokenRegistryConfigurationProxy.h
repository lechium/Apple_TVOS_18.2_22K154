//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TKHostTokenRegistry;

@interface TKHostTokenRegistryConfigurationProxy : NSObject
{
    NSString *_callerBundleID;	// 8 = 0x8
    NSArray *_allowedForBundles;	// 16 = 0x10
    TKHostTokenRegistry *_registry;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000099e0
@property(readonly, nonatomic) __weak TKHostTokenRegistry *registry; // @synthesize registry=_registry;
- (void)removeTokenID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000989c
- (void)updateTokenID:(id)arg1 data:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000096b4
- (void)readDataForTokenID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009521
- (void)updateKeychainItemsForTokenID:(id)arg1 items:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009262
- (void)getKeychainItemsForTokenID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000090c7
- (id)ensureTokenWithTokenID:(id)arg1;	// IMP=0x0010000000008e55
- (void)createTokenID:(id)arg1 persistent:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008cab
- (void)getTokenIDsForClassID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008957
- (void)endTransactionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008849
- (void)beginTransactionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008766
- (_Bool)ensureAccessForClassID:(id)arg1;	// IMP=0x001000000000874f
- (void)getClassIDsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008445
- (_Bool)haveAccessForClassID:(id)arg1 verbose:(_Bool)arg2;	// IMP=0x0010000000007c9b
- (id)initWithRegistry:(id)arg1 callerBundleID:(id)arg2 allowedForBundles:(id)arg3;	// IMP=0x0010000000007bd7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


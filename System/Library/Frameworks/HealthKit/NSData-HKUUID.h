//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (HKUUID)
+ (id)hk_dataWithHexString:(id)arg1;	// IMP=0x0010000000158f6f
+ (id)hk_randomDataOfLength:(long long)arg1;	// IMP=0x0010000000158e16
+ (id)hk_nilDataMD5;	// IMP=0x0010000000158c68
+ (id)hk_dataWithSHA256Fingerprint:(id)arg1 error:(out id *)arg2;	// IMP=0x00100000001589eb
- (id)hk_dataForAllUUIDs;	// IMP=0x0010000000072378
- (_Bool)hk_enumerateUUIDsWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000072060
- (unsigned long long)hk_countOfUUIDs;	// IMP=0x001000000007203b
- (void)hk_enumerateUUIDBytesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000071fa8
- (void)hk_enumerateUUIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000015f6b
- (id)hk_hexString;	// IMP=0x00100000001590c2
- (id)hk_SHA256;	// IMP=0x0010000000158d76
- (id)hk_MD5;	// IMP=0x0010000000158cd6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKSecureKey : NSObject
{
}

+ (int)deleteOSVersionAttestationRefKey;	// IMP=0x00400000000a3375
+ (struct __SecKey *)osVersionAttestationRefKey;	// IMP=0x00100000000a324e
+ (int)storeOSVersionAttestationRefKey:(struct __SecKey *)arg1;	// IMP=0x00100000000a30d9
+ (struct __SecKey *)createOSVersionAttestationRefKeyWithContext:(id)arg1 accessControl:(struct __SecAccessControl *)arg2 error:(id *)arg3;	// IMP=0x00100000000a2b7f

@end


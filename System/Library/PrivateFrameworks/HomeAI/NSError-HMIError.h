//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (HMIError)
+ (id)hmiPrivateErrorWithCode:(long long)arg1 description:(id)arg2 suggestion:(id)arg3 underlyingError:(id)arg4;	// IMP=0x006000000006194c
+ (id)hmiPrivateErrorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;	// IMP=0x0060000000061920
+ (id)hmiPrivateErrorWithCode:(long long)arg1 description:(id)arg2;	// IMP=0x00600000000618f0
+ (id)hmiPrivateErrorWithCode:(long long)arg1;	// IMP=0x00600000000618be
+ (id)hmiPrivateErrorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0060000000061890
+ (id)hmiErrorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;	// IMP=0x0060000000061864
+ (id)hmiErrorWithCode:(long long)arg1 description:(id)arg2;	// IMP=0x0060000000061834
+ (id)hmiErrorWithCode:(long long)arg1;	// IMP=0x0060000000061802
+ (id)hmiErrorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x00600000000617d4
+ (id)_hmiErrorWithCode:(unsigned long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;	// IMP=0x006000000006152a
@end


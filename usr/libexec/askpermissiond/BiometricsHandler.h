//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BiometricsHandler : NSObject
{
}

+ (void)_storeToken:(id)arg1;	// IMP=0x002000000000a5f1
+ (void)_retreiveTokenWithAction:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a2ed
+ (void)_removeToken;	// IMP=0x001000000000a06a
+ (void)_presentBiometricsDialogWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009e4a
+ (void)storeToken:(id)arg1;	// IMP=0x0010000000009b71
+ (id)retreiveTokenWithAction:(long long)arg1;	// IMP=0x001000000000986f
+ (void)reset;	// IMP=0x001000000000983f
+ (void)removeToken;	// IMP=0x001000000000982d
+ (void)setState:(long long)arg1;	// IMP=0x00100000000097d3
+ (_Bool)isSupported;	// IMP=0x0010000000009646
+ (id)storeQueue;	// IMP=0x00100000000095ef
+ (long long)state;	// IMP=0x001000000000959d

@end


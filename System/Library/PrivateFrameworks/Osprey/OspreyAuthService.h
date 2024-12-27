//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, OspreyGRPCChannel;

__attribute__((visibility("hidden")))
@interface OspreyAuthService : NSObject
{
    OspreyGRPCChannel *_channel;	// 8 = 0x8
    NSUUID *_authUUID;	// 16 = 0x10
    unsigned long long _authStrategyVersion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000008c1d
- (void)createClientSessionWithData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000000854e
- (void)certificateDataWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007fba
- (id)initWithChannel:(id)arg1 authStrategyVersion:(unsigned long long)arg2;	// IMP=0x0000000000007ef2

@end


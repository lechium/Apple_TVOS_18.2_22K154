//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtCC24IntelligencePlatformCore18EventLogServiceXPC6Server : NSObject
{
    MISSING_TYPE *storage;	// 8 = 0x8
    MISSING_TYPE *bufferedWriter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007f2c1
- (id)init;	// IMP=0x0000000000080412
- (void)logInstantWithId:(long long)arg1 timestamp:(id)arg2 name:(id)arg3 parent:(long long)arg4 dependencies:(id)arg5 payloadType:(id)arg6 payloadVariant:(id)arg7 payload:(id)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x0000000000080200
- (void)logEndWithId:(long long)arg1 timestamp:(id)arg2 dependencies:(id)arg3 payloadType:(id)arg4 payloadVariant:(id)arg5 payload:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000007fb6e
- (void)logStartWithId:(long long)arg1 timestamp:(id)arg2 name:(id)arg3 parent:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000007f6cb
- (void)dealloc;	// IMP=0x000000000007f2a4

@end


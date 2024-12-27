//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface NWURLSessionRequestBodyData : NSObject
{
    NSObject<OS_dispatch_data> *_data;	// 8 = 0x8
    unsigned long long _length;	// 16 = 0x10
    unsigned long long _offset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000333a10
- (void)close;	// IMP=0x0000000000333a00
- (void)readMinimumIncompleteLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000333970
@property(readonly, nonatomic) long long countOfBytesSent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


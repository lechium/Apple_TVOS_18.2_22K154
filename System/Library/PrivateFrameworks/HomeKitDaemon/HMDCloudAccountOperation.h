//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCloudAccountOperation : NSOperation
{
    NSUUID *_identifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_clientQueue;	// 16 = 0x10
    CDUnknownBlockType _operationBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000dc8247
@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)main;	// IMP=0x0000000000dc7dfd
- (id)description;	// IMP=0x0000000000dc7d81
- (id)initWithBlock:(CDUnknownBlockType)arg1 clientQueue:(id)arg2;	// IMP=0x0000000000dc7c96

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ChunkedDigest, LZMADecoder, NSMutableData, NSString;
@protocol AssetDataConsumer;

@interface LZMADataConsumer : NSObject
{
    NSMutableData *_buffer;	// 8 = 0x8
    LZMADecoder *_decoder;	// 16 = 0x10
    ChunkedDigest *_digest;	// 24 = 0x18
    _Bool _disableAutodetection;	// 32 = 0x20
    id <AssetDataConsumer> _streamAdapter;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000196e02
- (void)truncateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000196dab
- (void)suspendWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000196d29
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000196cd2
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000196c56
- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000196ae0
- (void)consumeData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001967e9
- (void)consumeData:(id)arg1 andWaitWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001967d7
- (id)init;	// IMP=0x0010000000196781

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


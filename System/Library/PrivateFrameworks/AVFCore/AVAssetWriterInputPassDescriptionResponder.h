//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetWriterInputPassDescription;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputPassDescriptionResponder : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 8 = 0x8
    int _stoppedResponding;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serializationQueue;	// 24 = 0x18
    _Bool _hasRespondedAtLeastOnce;	// 32 = 0x20
    AVAssetWriterInputPassDescription *_mostRecentPassDescription;	// 40 = 0x28
    CDUnknownBlockType _callbackBlock;	// 48 = 0x30
}

- (_Bool)_hasStoppedResponding;	// IMP=0x00000000000c626d
- (void)stopRespondingToPassDescriptions;	// IMP=0x00000000000c6201
- (void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;	// IMP=0x00000000000c61df
- (void)respondToNewPassDescription:(id)arg1;	// IMP=0x00000000000c606d
- (void)dealloc;	// IMP=0x00000000000c6007
- (id)initWithCallbackQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c5eb7
- (id)init;	// IMP=0x00000000000c5ea1

@end


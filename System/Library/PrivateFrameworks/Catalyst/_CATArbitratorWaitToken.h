//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _CATArbitratorWaitToken : NSObject
{
    _Atomic int mState;	// 8 = 0x8
    NSMutableDictionary *mTokenByKey;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *mDelegateQueue;	// 24 = 0x18
    NSObject<OS_dispatch_group> *mGroup;	// 32 = 0x20
    CDUnknownBlockType mCompletionBlock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000004c82
- (_Bool)whenStateIs:(int)arg1 atomicallySwapWith:(int)arg2;	// IMP=0x0000000000004c72
- (void)cancel;	// IMP=0x0000000000004c0a
- (void)performCompletionBlock;	// IMP=0x00000000000049f2
- (void)resume;	// IMP=0x00000000000048bf
- (void)waitForRegistrationEntry:(id)arg1 forKey:(id)arg2 exclusive:(_Bool)arg3;	// IMP=0x00000000000047b6
- (id)initWithDelegateQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000045f4

@end


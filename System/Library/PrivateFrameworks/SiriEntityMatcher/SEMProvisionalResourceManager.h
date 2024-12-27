//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue;

@interface SEMProvisionalResourceManager : NSObject
{
    NSString *_resourceName;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_activationQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_expirationQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_operationQueue;	// 32 = 0x20
    double _expirationInterval;	// 40 = 0x28
    _Bool _isActive;	// 48 = 0x30
    CDUnknownBlockType _activationBlock;	// 56 = 0x38
    CDUnknownBlockType _deactivationBlock;	// 64 = 0x40
    long long _operationsInProgress;	// 72 = 0x48
    NSDate *_expirationDate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000043229
@property(retain) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (_Bool)isActive;	// IMP=0x0000000000043160
- (void)_setExpirationTimer;	// IMP=0x0000000000042e2b
- (long long)deactivateWithError:(id *)arg1;	// IMP=0x0000000000042bbb
- (long long)activateWithError:(id *)arg1 operationBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004293f
- (void)activateAsyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042697
- (id)initWithResourceName:(id)arg1 lifespan:(double)arg2 activationBlock:(CDUnknownBlockType)arg3 deactivationBlock:(CDUnknownBlockType)arg4 serializeOperations:(_Bool)arg5;	// IMP=0x0000000000042207
- (id)init;	// IMP=0x00000000000421bf

@end


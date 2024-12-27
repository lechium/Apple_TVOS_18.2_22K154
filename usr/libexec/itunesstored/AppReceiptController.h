//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue;
@protocol OS_dispatch_queue;

@interface AppReceiptController : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    ISOperationQueue *_operationQueue;	// 16 = 0x10
}

+ (id)sharedController;	// IMP=0x004000000016df6a
+ (void)refreshAppReceipt:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016d974
+ (void)refreshAllReceipts:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016d787
+ (void)observeXPCServer:(id)arg1;	// IMP=0x001000000016d6f7
+ (void)getApplicationReceiptPathWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016d44a
+ (_Bool)connectionHasEntitlement:(id)arg1;	// IMP=0x001000000016d22e
- (void).cxx_destruct;	// IMP=0x002000000016e22d
- (id)_operationQueue;	// IMP=0x000000000016e19a
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000016e07b
- (void)_addOperation:(id)arg1;	// IMP=0x001000000016dffd
- (void)start;	// IMP=0x001000000016dff7
- (void)dealloc;	// IMP=0x001000000016d1a3
- (id)init;	// IMP=0x001000000016d14b

@end


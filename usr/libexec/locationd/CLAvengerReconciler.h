//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CLAvengerReconciler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (id)attemptReconciliationWithAddress:(id)arg1 advertisementData:(id)arg2;	// IMP=0x002000000108f518
- (void)dealloc;	// IMP=0x001000000108f4e9
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000108f4d5

@end


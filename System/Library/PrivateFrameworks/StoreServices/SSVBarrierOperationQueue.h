//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperationQueue.h>

__attribute__((visibility("hidden")))
@interface SSVBarrierOperationQueue : NSOperationQueue
{
}

- (void)addBarrierOperation:(id)arg1;	// IMP=0x0000000000148300
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;	// IMP=0x0000000000147fad
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000147f5a
- (void)addOperation:(id)arg1;	// IMP=0x0000000000147cf9

@end


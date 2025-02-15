//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperation, NSOperationQueue;

@interface SHLOperationQueue : NSObject
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
    NSOperation *_tailOperation;	// 16 = 0x10
}

+ (id)defaultQueue;	// IMP=0x004000000002b801
- (void).cxx_destruct;	// IMP=0x002000000002bb31
@property(nonatomic) __weak NSOperation *tailOperation; // @synthesize tailOperation=_tailOperation;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)cancelAllOperations;	// IMP=0x001000000002baa0
- (void)addOperation:(id)arg1 waitUntilFinished:(_Bool)arg2;	// IMP=0x001000000002b903
- (void)addOperation:(id)arg1;	// IMP=0x001000000002b8ef
- (id)initOperationQueue;	// IMP=0x001000000002b866

@end


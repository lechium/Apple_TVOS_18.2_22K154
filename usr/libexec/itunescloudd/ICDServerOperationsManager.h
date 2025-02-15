//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ICDServerOperationsManager : NSObject
{
    _Bool _networkActivityIndicatorVisible;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    NSOperationQueue *_backgroundOperationQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000007bad2
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) NSOperationQueue *backgroundOperationQueue; // @synthesize backgroundOperationQueue=_backgroundOperationQueue;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)_tearDownKVO;	// IMP=0x001000000007ba59
- (void)_setupKVO;	// IMP=0x001000000007b9f8
- (void)_setupInternalQueues;	// IMP=0x001000000007b934
@property(nonatomic, getter=isNetworkActivityIndicatorVisible) _Bool networkActivityIndicatorVisible; // @synthesize networkActivityIndicatorVisible=_networkActivityIndicatorVisible;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000007b7b7
- (id)listCloudServerOperations;	// IMP=0x001000000007b15d
- (_Bool)cancelOperationsByClass:(Class)arg1;	// IMP=0x001000000007afdd
- (_Bool)hasOperationsOfClass:(Class)arg1;	// IMP=0x001000000007aeaa
- (void)enumerateBackgroundOperationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000007ad30
- (void)enumerateOperationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000007abb6
- (void)addBackgroundOperation:(id)arg1 priority:(int)arg2;	// IMP=0x001000000007aa60
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x001000000007a90a
- (void)dealloc;	// IMP=0x001000000007a8cc
- (id)init;	// IMP=0x001000000007a86b

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKThreadSafeMutableArray : NSObject
{
    struct _opaque_pthread_mutex_t _storageLock;	// 8 = 0x8
    NSMutableArray *_storage;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000001a914
@property(readonly) __weak NSArray *arrayRepresentation;
- (id)description;	// IMP=0x000000000001a8f0
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000001a885
- (void)removeObjectsInArray:(id)arg1;	// IMP=0x000000000001a831
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000001a793
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a703
- (id)init;	// IMP=0x000000000001a69f
- (id)initWithNSMutableArray:(id)arg1;	// IMP=0x000000000001a61e

@end


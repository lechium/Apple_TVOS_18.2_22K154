//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKDiscoveryBonjour, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GKDiscoveryBonjourResolveContainer : NSObject
{
    NSMutableArray *_serviceRefList;	// 8 = 0x8
    GKDiscoveryBonjour *_context;	// 16 = 0x10
    CDUnknownBlockType _resolveCompletionHandler;	// 24 = 0x18
}

@property(nonatomic) GKDiscoveryBonjour *context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType resolveCompletionHandler; // @synthesize resolveCompletionHandler=_resolveCompletionHandler;
@property(retain, nonatomic) NSMutableArray *serviceRefList; // @synthesize serviceRefList=_serviceRefList;
- (void)dealloc;	// IMP=0x00000000000725ed
- (id)init;	// IMP=0x00000000000725a1

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CADXPCInvocationContextHolder : NSObject
{
    NSMutableArray *_retainedArguments;	// 8 = 0x8
    id _proxy;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000037b3b
@property(readonly, nonatomic) id proxy; // @synthesize proxy=_proxy;
- (void)clear;	// IMP=0x0000000000037af8
- (void)retainProxy:(id)arg1 andArgumentsInInvocation:(id)arg2;	// IMP=0x00000000000379b3

@end


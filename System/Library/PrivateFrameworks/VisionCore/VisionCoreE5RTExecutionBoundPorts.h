//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VisionCoreE5RTExecutionBoundPorts : NSObject
{
    NSMutableDictionary *_namedPorts;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001fa43
- (void)releasePortNamed:(id)arg1;	// IMP=0x000000000001f9d3
- (void)releaseAllPorts;	// IMP=0x000000000001f9c5
- (_Bool)getPort:(void **)arg1 named:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001f8d3
- (_Bool)recordPort:(void *)arg1 named:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001f7b8
@property(readonly, copy, nonatomic) NSArray *allPortNames;
- (void)dealloc;	// IMP=0x000000000001f768
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000001f6f8
- (id)init;	// IMP=0x000000000001f6e1

@end


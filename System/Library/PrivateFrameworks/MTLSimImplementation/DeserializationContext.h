//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLDeserializer;

__attribute__((visibility("hidden")))
@interface DeserializationContext : NSObject
{
    id <MTLDeserializer> _deserializer;	// 8 = 0x8
}

- (id)functionWithFunctionRef:(unsigned long long)arg1;	// IMP=0x00000000000021ec
- (void)dealloc;	// IMP=0x00000000000021a9
- (id)initWithDeserializer:(id)arg1;	// IMP=0x000000000000215e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


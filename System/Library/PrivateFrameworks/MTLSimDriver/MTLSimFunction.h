//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSimFunction : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    unsigned int _functionRef;	// 16 = 0x10
    unsigned long long _functionType;	// 24 = 0x18
    NSString *label;	// 32 = 0x20
    unsigned long long patchType;	// 40 = 0x28
    long long patchControlPointCount;	// 48 = 0x30
    NSArray *vertexAttributes;	// 56 = 0x38
    NSArray *stageInputAttributes;	// 64 = 0x40
    NSString *name;	// 72 = 0x48
    NSDictionary *functionConstantsDictionary;	// 80 = 0x50
}

@property(readonly) NSDictionary *functionConstantsDictionary; // @synthesize functionConstantsDictionary;
@property(readonly) NSString *name; // @synthesize name;
@property(readonly) NSArray *stageInputAttributes; // @synthesize stageInputAttributes;
@property(readonly) NSArray *vertexAttributes; // @synthesize vertexAttributes;
@property(readonly) long long patchControlPointCount; // @synthesize patchControlPointCount;
@property(readonly) unsigned long long patchType; // @synthesize patchType;
@property(copy) NSString *label; // @synthesize label;
@property(readonly) unsigned long long functionType; // @synthesize functionType=_functionType;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly) unsigned long long options;
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000008c81
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2;	// IMP=0x0000000000008c79
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;	// IMP=0x0000000000008c71
@property(readonly) unsigned int functionRef;
- (void)dealloc;	// IMP=0x0000000000008b93
- (id)initWithDevice:(id)arg1 functionType:(unsigned long long)arg2 functionRef:(unsigned int)arg3;	// IMP=0x0000000000008b2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _GCGamepadEventFusion, _GCGamepadEventFusionConfig;

__attribute__((visibility("hidden")))
@interface _GCGamepadEventFusionDescription : NSObject
{
    _GCGamepadEventFusionConfig *_config;	// 8 = 0x8
    NSArray *_sourcesDescription;	// 16 = 0x10
    _GCGamepadEventFusion *_materializedObject;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000c37a6
- (void).cxx_destruct;	// IMP=0x00000000000c3c62
- (id)materializeWithContext:(id)arg1;	// IMP=0x00000000000c3a05
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c3998
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c387c
- (id)init;	// IMP=0x00000000000c3859
- (id)initWithConfiguration:(id)arg1 sources:(id)arg2;	// IMP=0x00000000000c37ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _GCControllerInputComponent, _GCControllerInputDescription;
@protocol NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface _GCControllerInputComponentDescription : NSObject
{
    _GCControllerInputDescription *_controllerInputDescriptions;	// 8 = 0x8
    NSArray *_bindingDescriptions;	// 16 = 0x10
    _GCControllerInputComponent *_materializedInputComponent;	// 24 = 0x18
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000f06e7
- (void).cxx_destruct;	// IMP=0x00000000000f1301
@property(readonly, copy) _GCControllerInputDescription *controllerInputDescriptions; // @synthesize controllerInputDescriptions=_controllerInputDescriptions;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)_applyBinding:(id)arg1 toComponent:(id)arg2;	// IMP=0x00000000000f111a
- (_Bool)update:(id)arg1 withContext:(id)arg2;	// IMP=0x00000000000f0df9
- (id)createWithContext:(id)arg1;	// IMP=0x00000000000f0d23
- (id)materializeWithContext:(id)arg1;	// IMP=0x00000000000f0a8d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f0a0c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f0805
- (id)init;	// IMP=0x00000000000f07da
- (id)initWithIdentifier:(id)arg1 controllerInputs:(id)arg2 bindings:(id)arg3;	// IMP=0x00000000000f06ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


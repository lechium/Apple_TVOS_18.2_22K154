//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCAdaptiveTriggersXPCProxyClientEndpoint, NSArray, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCAdaptiveTriggersXPCProxyClientEndpointDescription : NSObject
{
    NSArray *_initialStatuses;	// 8 = 0x8
    GCAdaptiveTriggersXPCProxyClientEndpoint *_materializedObject;	// 16 = 0x10
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000bb013
- (void).cxx_destruct;	// IMP=0x00000000000bb56a
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (id)materializeWithContext:(id)arg1;	// IMP=0x00000000000bb27b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bb20e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bb0e6
- (id)init;	// IMP=0x00000000000bb0c3
- (id)initWithIdentifier:(id)arg1 initialStatuses:(id)arg2;	// IMP=0x00000000000bb01b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


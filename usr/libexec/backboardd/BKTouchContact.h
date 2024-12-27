//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSHIDEventHitTestLayerInformation, BKSHIDTouchRoutingPolicy, BKSWindowServerHitTestSecurityAnalysis, NSArray, NSMutableSet, NSString;

@interface BKTouchContact : NSObject
{
    long long _pathIndex;	// 8 = 0x8
    unsigned int _touchIdentifier;	// 16 = 0x10
    unsigned int _userIdentifier;	// 20 = 0x14
    unsigned int _slotID;	// 24 = 0x18
    long long _presence;	// 32 = 0x20
    long long _previousPresence;	// 40 = 0x28
    long long _hitTestPolicy;	// 48 = 0x30
    long long _hitTestContextCategory;	// 56 = 0x38
    unsigned int _transducerType;	// 64 = 0x40
    unsigned short _eventPhaseBits;	// 68 = 0x44
    struct CGRect _hitTestRegion;	// 72 = 0x48
    struct CGRect _exclusiveHitTestRegion;	// 104 = 0x68
    struct CGPoint _normalLocation;	// 136 = 0x88
    double _positionZ;	// 152 = 0x98
    struct CGPoint _offset;	// 160 = 0xa0
    struct BKPathZGradientInfo _zGradient;	// 176 = 0xb0
    struct BKPointTriple _denormalizedLocation;	// 200 = 0xc8
    BKSHIDTouchRoutingPolicy *_routingPolicy;	// 256 = 0x100
    BKSHIDEventHitTestLayerInformation *_hitTestInformationAtDown;	// 264 = 0x108
    BKSWindowServerHitTestSecurityAnalysis *_hitTestSecurityAnalysis;	// 272 = 0x110
    NSMutableSet *_destinations;	// 280 = 0x118
    NSArray *_hostingChain;	// 288 = 0x120
    _Bool _touchDetached;	// 296 = 0x128
    _Bool _transferred;	// 297 = 0x129
    _Bool _tapToWake;	// 298 = 0x12a
}

- (void).cxx_destruct;	// IMP=0x002000000006f51c
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x001000000006f2cb
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006f22c
@property(readonly) unsigned long long hash;
- (id)init;	// IMP=0x001000000006f17e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end


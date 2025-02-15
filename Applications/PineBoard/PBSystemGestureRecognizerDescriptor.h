//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBGestureRecognizerDescriptor;
@protocol PBGestureRecognizerDescriptor;

@interface PBSystemGestureRecognizerDescriptor : NSObject
{
    PBGestureRecognizerDescriptor<PBGestureRecognizerDescriptor> *_gestureRecognizerDescriptor;	// 8 = 0x8
    unsigned long long _activationMask;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000c141f
@property(readonly, nonatomic) unsigned long long activationMask; // @synthesize activationMask=_activationMask;
@property(readonly, nonatomic) PBGestureRecognizerDescriptor<PBGestureRecognizerDescriptor> *gestureRecognizerDescriptor; // @synthesize gestureRecognizerDescriptor=_gestureRecognizerDescriptor;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00100000000c1344
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00100000000c12f3
- (id)succinctDescriptionBuilder;	// IMP=0x00100000000c126a
- (id)succinctDescription;	// IMP=0x00100000000c1219
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c10ce
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDescriptor:(id)arg1;	// IMP=0x00100000000c1068
- (id)initWithDescriptor:(id)arg1 activationMask:(unsigned long long)arg2;	// IMP=0x00100000000c0ff1

// Remaining properties
@property(readonly) Class superclass;

@end


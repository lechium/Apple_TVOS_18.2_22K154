//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PBGestureRecognizerDescriptor : NSObject
{
    unsigned long long _hash;	// 8 = 0x8
}

@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a005f
@property(readonly) unsigned long long hash;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000009ff9b
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x001000000009ff4a
- (id)succinctDescriptionBuilder;	// IMP=0x001000000009fef4
- (id)succinctDescription;	// IMP=0x001000000009fea3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009fe97
@property(readonly, nonatomic) unsigned long long type;
- (void)appendDescriptionToBuilder:(id)arg1;	// IMP=0x001000000009fe89
- (id)hashBuilder;	// IMP=0x001000000009fe21
- (_Bool)isTypeOf:(unsigned long long)arg1;	// IMP=0x001000000009fdfb
- (id)init;	// IMP=0x001000000009fdbf
- (void)applySettingsToGestureRecognizer:(id)arg1;	// IMP=0x00100000000a012c
- (id)systemGestureRecognizerDescriptorWithActivationMask:(unsigned long long)arg1;	// IMP=0x00100000000c1430
@property(readonly, nonatomic) double _minimumPressDuration;
@property(readonly, nonatomic) unsigned long long _numberOfPressBeganRequired;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayIdentity, NSString;

__attribute__((visibility("hidden")))
@interface _UIRemoteViewControllerSceneContext : NSObject
{
    _Bool _isCapturingContentForAdditionalRenderingDestination;	// 8 = 0x8
    NSString *_systemShellHostingSpaceIdentifier;	// 16 = 0x10
    NSString *_systemDisplayIdentifier;	// 24 = 0x18
    FBSDisplayIdentity *_displayIdentity;	// 32 = 0x20
    long long _screenReferenceDisplayModeStatus;	// 40 = 0x28
    double _systemReferenceAngle;	// 48 = 0x30
    unsigned long long _systemReferenceAngleMode;	// 56 = 0x38
    NSString *_hardwareKeyboardExclusivityIdentifier;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000024d155
- (void).cxx_destruct;	// IMP=0x000000000024d43b
@property(readonly, copy, nonatomic) NSString *systemDisplayIdentifier; // @synthesize systemDisplayIdentifier=_systemDisplayIdentifier;
@property(readonly, nonatomic) NSString *systemShellHostingSpaceIdentifier; // @synthesize systemShellHostingSpaceIdentifier=_systemShellHostingSpaceIdentifier;
@property(readonly, nonatomic) _Bool isCapturingContentForAdditionalRenderingDestination; // @synthesize isCapturingContentForAdditionalRenderingDestination=_isCapturingContentForAdditionalRenderingDestination;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024d413
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000024d31c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000024d15d
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024ce50
- (id)initWithDisplayIdentity:(id)arg1 screenReferenceDisplayModeStatus:(long long)arg2 enhancedWindowEnabled:(_Bool)arg3 systemReferenceAngle:(double)arg4 systemReferenceAngleMode:(unsigned long long)arg5 isCapturingContentForAdditionalRenderingDestination:(_Bool)arg6 hardwareKeyboardExclusivityIdentifier:(id)arg7 systemShellHostingSpaceIdentifier:(id)arg8 systemDisplayIdentifier:(id)arg9;	// IMP=0x000000000024cd42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


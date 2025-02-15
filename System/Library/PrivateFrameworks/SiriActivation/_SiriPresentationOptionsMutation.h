//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, SiriPresentationOptions;

__attribute__((visibility("hidden")))
@interface _SiriPresentationOptionsMutation : NSObject
{
    SiriPresentationOptions *_baseModel;	// 8 = 0x8
    _Bool _wakeScreen;	// 16 = 0x10
    _Bool _hideOtherWindowsDuringAppearance;	// 17 = 0x11
    _Bool _shouldAllowBiometricAutoUnlock;	// 18 = 0x12
    _Bool _shouldDeactivateScenesBelow;	// 19 = 0x13
    long long _rotationStyle;	// 24 = 0x18
    long long _requestSource;	// 32 = 0x20
    long long _inputType;	// 40 = 0x28
    NSSet *_launchActions;	// 48 = 0x30
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasWakeScreen:1;
        unsigned int hasHideOtherWindowsDuringAppearance:1;
        unsigned int hasShouldAllowBiometricAutoUnlock:1;
        unsigned int hasShouldDeactivateScenesBelow:1;
        unsigned int hasRotationStyle:1;
        unsigned int hasRequestSource:1;
        unsigned int hasInputType:1;
        unsigned int hasLaunchActions:1;
    } _mutationFlags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000038982
- (id)generate;	// IMP=0x0000000000038744
- (void)setLaunchActions:(id)arg1;	// IMP=0x0000000000038722
- (void)setInputType:(long long)arg1;	// IMP=0x0000000000038714
- (void)setRequestSource:(long long)arg1;	// IMP=0x0000000000038706
- (void)setRotationStyle:(long long)arg1;	// IMP=0x00000000000386f8
- (void)setShouldDeactivateScenesBelow:(_Bool)arg1;	// IMP=0x00000000000386eb
- (void)setShouldAllowBiometricAutoUnlock:(_Bool)arg1;	// IMP=0x00000000000386de
- (void)setHideOtherWindowsDuringAppearance:(_Bool)arg1;	// IMP=0x00000000000386d1
- (void)setWakeScreen:(_Bool)arg1;	// IMP=0x00000000000386c4
- (id)initWithBaseModel:(id)arg1;	// IMP=0x0000000000038659
- (id)init;	// IMP=0x0000000000038645

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


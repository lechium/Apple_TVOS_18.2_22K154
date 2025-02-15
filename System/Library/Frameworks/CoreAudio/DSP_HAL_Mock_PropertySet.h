//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DSP_HAL_Mock_PropertySet : NSObject
{
    struct DSP_HAL_Mock_Property *_propAvailableOffloadsInput;	// 8 = 0x8
    struct DSP_HAL_Mock_Property *_propVoiceActivityState;	// 16 = 0x10
    struct DSP_HAL_Mock_Property *_propDSPGraphParam;	// 24 = 0x18
    function_0a15f2eb _propertyUpdater;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x0000000000034548
- (void).cxx_destruct;	// IMP=0x0000000000034519
@property(nonatomic) function_0a15f2eb propertyUpdater; // @synthesize propertyUpdater=_propertyUpdater;
@property(nonatomic) struct DSP_HAL_Mock_Property *propDSPGraphParam; // @synthesize propDSPGraphParam=_propDSPGraphParam;
@property(nonatomic) struct DSP_HAL_Mock_Property *propVoiceActivityState; // @synthesize propVoiceActivityState=_propVoiceActivityState;
@property(nonatomic) struct DSP_HAL_Mock_Property *propAvailableOffloadsInput; // @synthesize propAvailableOffloadsInput=_propAvailableOffloadsInput;
- (id)getHostedDSPPropertyAtAddress:(struct AudioObjectPropertyAddress)arg1 withQualifierData:(id)arg2;	// IMP=0x000000000003402b
- (_Bool)setHostedDSPPropertyAtAddress:(struct AudioObjectPropertyAddress)arg1 withData:(id)arg2 withQualifier:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000033e80
- (_Bool)hasHostedDSPPropertyAtAddress:(struct AudioObjectPropertyAddress)arg1;	// IMP=0x0000000000033e0a
- (id)getHostedDSPPropertyInfoArray;	// IMP=0x0000000000033732
- (void)configureForFeatureFlag:(int)arg1;	// IMP=0x00000000000332ea
- (unsigned int)getVoiceActivityState;	// IMP=0x0000000000033299
- (void)toggleVoiceActivityAndNotify;	// IMP=0x00000000000330b5
- (void)configureForProcessor:(function_1b957124)arg1;	// IMP=0x0000000000032d37
- (void)dealloc;	// IMP=0x0000000000032cc1
- (id)init;	// IMP=0x0000000000032c7e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


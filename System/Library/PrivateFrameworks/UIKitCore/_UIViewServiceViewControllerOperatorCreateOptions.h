//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSMachPortSendRight, NSArray, NSString, NSUUID, UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UIViewServiceViewControllerOperatorCreateOptions : NSObject
{
    _Bool _hostCanDynamicallySpecifySupportedInterfaceOrientations;	// 8 = 0x8
    NSString *_viewControllerClassName;	// 16 = 0x10
    NSUUID *_contextToken;	// 24 = 0x18
    NSArray *_displayConfigurations;	// 32 = 0x20
    UITraitCollection *_traitCollection;	// 40 = 0x28
    BSMachPortSendRight *_hostAccessibilityServerPort;	// 48 = 0x30
    long long _availableTextServices;	// 56 = 0x38
    long long _initialInterfaceOrientation;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000157f32d
- (void).cxx_destruct;	// IMP=0x000000000157f3f2
@property(nonatomic) _Bool hostCanDynamicallySpecifySupportedInterfaceOrientations; // @synthesize hostCanDynamicallySpecifySupportedInterfaceOrientations=_hostCanDynamicallySpecifySupportedInterfaceOrientations;
@property(nonatomic) long long initialInterfaceOrientation; // @synthesize initialInterfaceOrientation=_initialInterfaceOrientation;
@property(nonatomic) long long availableTextServices; // @synthesize availableTextServices=_availableTextServices;
@property(retain, nonatomic) BSMachPortSendRight *hostAccessibilityServerPort; // @synthesize hostAccessibilityServerPort=_hostAccessibilityServerPort;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(copy, nonatomic) NSArray *displayConfigurations; // @synthesize displayConfigurations=_displayConfigurations;
@property(retain, nonatomic) NSUUID *contextToken; // @synthesize contextToken=_contextToken;
@property(copy, nonatomic) NSString *viewControllerClassName; // @synthesize viewControllerClassName=_viewControllerClassName;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000157f013
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000157ed97

@end


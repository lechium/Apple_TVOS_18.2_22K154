//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _TtP7SwiftUI36PlatformAccessibilityElementProtocol_;

@interface NSObject (SwiftUIAccessibilityPrivate)
@property(retain, nonatomic) id accessibilitySwiftUIStoredLinkRotor;
@property(copy, nonatomic) CDUnknownBlockType accessibilitySwiftUIDefaultActionStoredBlock;
@property(copy, nonatomic, setter=_swiftui_setAccessibilityLabel:) NSString *swiftui_accessibilityLabel;
- (void)swiftui_addRenderedSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;	// IMP=0x0020000000009da7
- (void)swiftui_insertRenderedSubview:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0020000000009f84
@property(nonatomic, readonly) NSObject<_TtP7SwiftUI36PlatformAccessibilityElementProtocol_> *rotorOwnerElement;
@property(nonatomic, readonly) NSObject<_TtP7SwiftUI36PlatformAccessibilityElementProtocol_> *knownRepresentedElement;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;

@interface NSObject (AXUISettingsWelcomeControllerCommon)
@property(retain, nonatomic, setter=ax_setBuddyDynamicHeightConstraints:) NSMutableArray *ax_buddyDynamicHeightConstraints;
@property(retain, nonatomic, setter=ax_setBuddyObservedTableViews:) NSMutableArray *ax_buddyObservedTableViews;
- (id)_accessibilityUIFindSubviewDescendant:(CDUnknownBlockType)arg1;	// IMP=0x003000000001724a
- (id)_accessibilityUIFindAXDescendants:(CDUnknownBlockType)arg1 byAddingElements:(CDUnknownBlockType)arg2;	// IMP=0x00300000000170f8
- (id)_accessibilityUIFindAnyAXDescendant:(CDUnknownBlockType)arg1 byAddingElements:(CDUnknownBlockType)arg2;	// IMP=0x0030000000016fe3
- (id)_atvaccessibilityLabel;	// IMP=0x0030000000025913
@property(readonly, nonatomic) NSDictionary *_atvaccessibilitySemanticContext;
- (id)_atvaccessibilityITMLSemanticContext;	// IMP=0x0030000000025796
- (id)_accessibilityBadgeTextForTextElement:(id)arg1;	// IMP=0x00300000000254a7
- (id)_atvaccessibilityITMLClass;	// IMP=0x003000000002540a
@property(readonly, nonatomic) NSString *_atvaccessibilityITMLAccessibilityContent;
- (id)_atvAccessibilityITMLAccessibilityContentWithElement:(id)arg1;	// IMP=0x0030000000024b46
- (id)_atvaccessibilityAncestorHasAXID:(id)arg1;	// IMP=0x0030000000024a5d
- (id)_atvaccessibilityClosestElementAbove:(id)arg1;	// IMP=0x0030000000024843
- (id)_atvaccessibilityGeometricNearestHeader;	// IMP=0x0030000000024710
@end


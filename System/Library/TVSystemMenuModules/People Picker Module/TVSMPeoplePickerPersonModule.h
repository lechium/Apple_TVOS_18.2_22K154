//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSObservation, NSString, TVPeoplePickerUser, TVSMAnalyticsElementInfo, TVSMMonogramViewController, UIViewController;
@protocol TVSMModuleContentViewController, TVSMModuleDelegate, TVSMModuleExpandedContentViewController, TVSMModuleOverlayContentViewController;

@interface TVSMPeoplePickerPersonModule : NSObject
{
    TVSMMonogramViewController<TVSMModuleContentViewController> *_contentViewController;	// 8 = 0x8
    NSObservation *_profilePhotoObserver;	// 16 = 0x10
    _Bool _selected;	// 24 = 0x18
    id <TVSMModuleDelegate> _delegate;	// 32 = 0x20
    long long _type;	// 40 = 0x28
    long long _style;	// 48 = 0x30
    NSString *_identifier;	// 56 = 0x38
    TVPeoplePickerUser *_user;	// 64 = 0x40
    NSString *_analyticsIdentifier;	// 72 = 0x48
    CDUnknownBlockType _actionHandler;	// 80 = 0x50
}

+ (id)availableStyles;	// IMP=0x0010000000002c50
- (void).cxx_destruct;	// IMP=0x00000000000035e0
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(copy, nonatomic) NSString *analyticsIdentifier; // @synthesize analyticsIdentifier=_analyticsIdentifier;
@property(readonly, nonatomic) TVPeoplePickerUser *user; // @synthesize user=_user;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <TVSMModuleDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateContentViewControllerForUser:(id)arg1;	// IMP=0x00000000000032e0
- (void)contentModuleViewControllerDidTriggerAction:(id)arg1;	// IMP=0x0000000000003210
@property(readonly, nonatomic) TVSMAnalyticsElementInfo *analyticsElementInfo;
@property(readonly, nonatomic) NSString *analyticsActionType;
@property(readonly, nonatomic) UIViewController<TVSMModuleContentViewController> *contentViewController;
@property(readonly, nonatomic) NSString *accessibilityIdentifierSuffix;
- (void)handleAction;	// IMP=0x0000000000002e00
- (_Bool)dismissAfterAction;	// IMP=0x0000000000002de0
- (id)initWithUser:(id)arg1;	// IMP=0x0000000000002c70

// Remaining properties
@property(readonly, nonatomic) NSArray *childModules;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIViewController<TVSMModuleExpandedContentViewController> *expandedContentViewController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIViewController<TVSMModuleExpandedContentViewController>",?,R,N

@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIViewController<TVSMModuleOverlayContentViewController> *overlayContentViewController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIViewController<TVSMModuleOverlayContentViewController>",?,R,N

@property(readonly) Class superclass;

@end


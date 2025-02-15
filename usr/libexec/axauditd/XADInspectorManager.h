//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXAuditElement, AXElement, AXUpdateElementVisualsCoalescer, NSDate, NSMutableArray, NSString;
@protocol OS_dispatch_queue, XADInspectorManagerDelegate;

@interface XADInspectorManager : NSObject
{
    _Bool _showVisuals;	// 8 = 0x8
    _Bool __registeredForNotifications;	// 9 = 0x9
    int _targetPid;	// 12 = 0xc
    id <XADInspectorManagerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    unsigned long long _monitoredEventType;	// 32 = 0x20
    AXElement *_appMatchingTargetPid;	// 40 = 0x28
    struct __AXObserver *__axEventObserver;	// 48 = 0x30
    NSMutableArray *__focusedElementHistory;	// 56 = 0x38
    AXElement *__currentElement;	// 64 = 0x40
    AXUpdateElementVisualsCoalescer *__elementVisualsCoalescer;	// 72 = 0x48
    AXAuditElement *__mostRecentElementFetchedVisionOS;	// 80 = 0x50
    NSDate *_lastFetchDateForDeviceCoodinate;	// 88 = 0x58
    struct CGPoint __lastPoint;	// 96 = 0x60
}

+ (id)sharedManager;	// IMP=0x0020000000003310
- (void).cxx_destruct;	// IMP=0x0020000000007e99
@property(nonatomic) _Bool _registeredForNotifications; // @synthesize _registeredForNotifications=__registeredForNotifications;
@property(retain, nonatomic) NSDate *lastFetchDateForDeviceCoodinate; // @synthesize lastFetchDateForDeviceCoodinate=_lastFetchDateForDeviceCoodinate;
@property(retain, nonatomic) AXAuditElement *_mostRecentElementFetchedVisionOS; // @synthesize _mostRecentElementFetchedVisionOS=__mostRecentElementFetchedVisionOS;
@property(retain, nonatomic) AXUpdateElementVisualsCoalescer *_elementVisualsCoalescer; // @synthesize _elementVisualsCoalescer=__elementVisualsCoalescer;
@property(nonatomic) struct CGPoint _lastPoint; // @synthesize _lastPoint=__lastPoint;
@property(retain, nonatomic, setter=_setCurrentElement:) AXElement *_currentElement; // @synthesize _currentElement=__currentElement;
@property(retain, nonatomic) NSMutableArray *_focusedElementHistory; // @synthesize _focusedElementHistory=__focusedElementHistory;
@property(nonatomic) struct __AXObserver *_axEventObserver; // @synthesize _axEventObserver=__axEventObserver;
@property(retain, nonatomic) AXElement *appMatchingTargetPid; // @synthesize appMatchingTargetPid=_appMatchingTargetPid;
@property(nonatomic) int targetPid; // @synthesize targetPid=_targetPid;
@property(nonatomic) _Bool showVisuals; // @synthesize showVisuals=_showVisuals;
@property(nonatomic) unsigned long long monitoredEventType; // @synthesize monitoredEventType=_monitoredEventType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) __weak id <XADInspectorManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateAttributesIfElementIsValid;	// IMP=0x0010000000007cb4
- (_Bool)_initializeAXObserverIfNeeded;	// IMP=0x0010000000007b0f
- (void)_registerForAXNotifications:(_Bool)arg1;	// IMP=0x0010000000007917
- (void)_registerForNotificationsIfNecessary:(_Bool)arg1;	// IMP=0x00100000000078b3
- (id)_accessibilityNotificationsToObserve;	// IMP=0x00100000000078a6
- (void)deviceDidGetTargeted;	// IMP=0x0010000000007830
- (void)moveInDirection:(unsigned long long)arg1 allowMovingToContainers:(_Bool)arg2 allowMoveToNonAXElements:(_Bool)arg3;	// IMP=0x0010000000007708
- (id)_nextElementNavigationInDirection:(long long)arg1 forElement:(id)arg2;	// IMP=0x001000000000749b
- (id)lastElementInHierarchy:(id)arg1;	// IMP=0x0010000000007162
- (id)firstElementInHierarchy:(id)arg1;	// IMP=0x00100000000070bd
- (id)fetchElementAtNormalizedDeviceCoordinate:(struct CGPoint)arg1;	// IMP=0x0010000000006edb
- (id)fetchSpecialElement:(long long)arg1;	// IMP=0x0010000000006e1c
- (id)frontmostAppForTargetPid;	// IMP=0x0010000000006daf
- (void)element:(id)arg1 valueForParameterizedAttribute:(id)arg2 withObject:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006bf5
- (void)element:(id)arg1 valueForAttribute:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006448
- (void)element:(id)arg1 performAction:(id)arg2 withValue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000577c
- (_Bool)allowDeveloperActionsOnElement:(id)arg1;	// IMP=0x001000000000573c
- (void)previewOnElement:(id)arg1;	// IMP=0x0010000000005685
- (void)focusOnElement:(id)arg1;	// IMP=0x0010000000005616
- (void)focusOnElementAtPoint:(struct CGPoint)arg1;	// IMP=0x001000000000541e
- (void)focusOnAXElement:(id)arg1;	// IMP=0x001000000000539b
- (void)focusOnAXElement:(id)arg1 scrollToVisible:(_Bool)arg2;	// IMP=0x0010000000005317
- (id)_elementDataFromSimulatorToken:(id)arg1;	// IMP=0x00100000000052ad
- (_Bool)_elementTokenIsSumulatorToken:(id)arg1;	// IMP=0x0010000000005258
- (void)_addElementToHistory:(id)arg1;	// IMP=0x0010000000004f6d
- (void)_updateElementHighlight;	// IMP=0x0010000000004ee4
- (void)_initializeElementVisualsCoalescer;	// IMP=0x0010000000004c02
- (void)_informDelegateOfInspectorFocus;	// IMP=0x0010000000004b91
- (id)_generateSpokenDescriptionForElement:(id)arg1;	// IMP=0x0010000000004840
- (id)_auditInspectorFocuseObject;	// IMP=0x001000000000473f
- (id)_AXAuditElementFromAXElement:(id)arg1;	// IMP=0x0010000000004695
- (id)_inspectorSections;	// IMP=0x001000000000458d
- (id)_actionSection;	// IMP=0x0010000000003fb0
- (id)_humanReadableStringForAction:(int)arg1;	// IMP=0x0010000000003f82
- (id)_hierarchySection;	// IMP=0x0010000000003e82
- (id)_basicSection;	// IMP=0x0010000000003be4
- (id)_elementSection;	// IMP=0x0010000000003997
- (id)_internalAttributes;	// IMP=0x0010000000003947
- (id)addAttribute:(id)arg1 toSection:(id)arg2 withPrefix:(id)arg3 performsAction:(_Bool)arg4 settable:(_Bool)arg5 humanReadable:(id)arg6 valueType:(long long)arg7 overrideIsInternalWithValue:(id)arg8;	// IMP=0x00100000000037cc
- (id)_developerOnlyAttributes;	// IMP=0x00100000000037bf
- (void)connectionInterrupted;	// IMP=0x001000000000361c
- (void)hideVisualsSynchronously;	// IMP=0x00100000000035d8
- (void)lockOnCurrentElement;	// IMP=0x00100000000033fd
- (id)init;	// IMP=0x0010000000003395

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


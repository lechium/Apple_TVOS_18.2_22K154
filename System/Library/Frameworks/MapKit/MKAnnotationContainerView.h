//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MKAnnotationView, MKPinAnnotationView, MKPriorityToIndexMap, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol MKAnnotationContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface MKAnnotationContainerView : UIView
{
    NSMutableOrderedSet *_annotationViews;	// 8 = 0x8
    NSMutableDictionary *_clusteringAnnotationViews;	// 16 = 0x10
    NSMutableArray *_customFeatureDataSourceObservers;	// 24 = 0x18
    NSMutableArray *_awaitingDropPins;	// 32 = 0x20
    MKAnnotationView *_selectedAnnotationView;	// 40 = 0x28
    MKAnnotationView *_annotationViewToSelect;	// 48 = 0x30
    id <MKAnnotationContainerViewDelegate> _delegate;	// 56 = 0x38
    MKAnnotationView *_draggingAnnotationView;	// 64 = 0x40
    struct CGPoint _previousMouseDragPoint;	// 72 = 0x48
    double _previousMouseDragTimeStamp;	// 88 = 0x58
    struct CGPoint _mouseDownPoint;	// 96 = 0x60
    struct CGPoint _draggingAnnotationViewCenter;	// 112 = 0x70
    unsigned long long _mapType;	// 128 = 0x80
    _Bool _clickedOnAnnotationView;	// 136 = 0x88
    _Bool _didDragAnnotationView;	// 137 = 0x89
    MKAnnotationView *_userLocationView;	// 144 = 0x90
    double _annotationViewsRotationRadians;	// 152 = 0x98
    struct CGAffineTransform _mapTransform;	// 160 = 0xa0
    _Bool _suppressCallout;	// 208 = 0xd0
    NSMutableArray *_pinsToAnimate;	// 216 = 0xd8
    double _mapPitchRadians;	// 224 = 0xe0
    CDStruct_0a13ab6d _mapDisplayStyle;	// 232 = 0xe8
    _Bool _mapFocused;	// 238 = 0xee
    _Bool _parallaxEnabled;	// 239 = 0xef
    _Bool _suppress;	// 240 = 0xf0
    _Bool _isUpdating;	// 241 = 0xf1
    double _lastUpdate;	// 248 = 0xf8
    NSMutableDictionary *_clusterableAnnotationViews;	// 256 = 0x100
    NSMutableArray *_requiredPriorityAnnotationViews;	// 264 = 0x108
    NSMutableSet *_collidableAnnotationViews;	// 272 = 0x110
    NSMutableDictionary *_collidingAnnotationViews;	// 280 = 0x118
    NSMutableDictionary *_existingClusterAnnotationViews;	// 288 = 0x120
    MKPriorityToIndexMap *_priorityMap;	// 296 = 0x128
    NSMutableSet *_prioritiesToAdd;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x00000000001c8cd3
@property(readonly, nonatomic) MKAnnotationView *draggingAnnotationView; // @synthesize draggingAnnotationView=_draggingAnnotationView;
@property(nonatomic) _Bool suppressCallout; // @synthesize suppressCallout=_suppressCallout;
- (void)updateAnnotationViewsWithDelay;	// IMP=0x00000000001c8c9b
- (void)_performStateUpdatesIfNeeded;	// IMP=0x00000000001c8aea
- (void)_updateCollidableAnnotationViews;	// IMP=0x00000000001c84f0
- (void)_updateClusterableAnnotationViews:(id)arg1 withID:(id)arg2;	// IMP=0x00000000001c7915
- (id)_existingClusterViewsForClusterID:(id)arg1;	// IMP=0x00000000001c784e
- (_Bool)_updateAnnotationViewPositions;	// IMP=0x00000000001c7831
- (void)stopSuppressingUpdates;	// IMP=0x00000000001c7820
- (void)suppressUpdates;	// IMP=0x00000000001c77ef
- (_Bool)_updateAnnotationViews:(id)arg1;	// IMP=0x00000000001c71a6
- (void)_updateAnnotationView:(id)arg1;	// IMP=0x00000000001c711d
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001c7045
- (CDStruct_02837cd9)_mapRectWithFraction:(double)arg1 ofVisible:(CDStruct_02837cd9)arg2;	// IMP=0x00000000001c6f8b
- (void)transitionTo:(long long)arg1;	// IMP=0x00000000001c6e52
- (_Bool)_updatePriorityMapIfNeeded;	// IMP=0x00000000001c6de6
- (void)_addPrioritiesForAnnotationViewIfNeeded:(id)arg1;	// IMP=0x00000000001c6c60
- (void)_updateZPositionForAnnotationView:(id)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x00000000001c6aa9
- (void)annotationViewDidChangeDisplayPriority:(id)arg1;	// IMP=0x00000000001c69ca
- (void)annotationViewDidChangeMetrics:(id)arg1;	// IMP=0x00000000001c6995
- (void)annotationViewDidChangeHidden:(id)arg1;	// IMP=0x00000000001c67ae
- (void)annotationViewDidChangeZPriority:(id)arg1;	// IMP=0x00000000001c65dd
@property(readonly, nonatomic) CDStruct_089f5ccb currentComparisonContext;
- (void)selectAnnotationView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001c630e
- (void)dropPinsIfNeeded;	// IMP=0x00000000001c62f7
- (void)removeAnnotationView:(id)arg1;	// IMP=0x00000000001c5f01
- (void)finishAddingAndRemovingAnnotationViews;	// IMP=0x00000000001c5ed1
- (void)addAnnotationView:(id)arg1 allowAnimation:(_Bool)arg2;	// IMP=0x00000000001c5600
- (void)_willRemoveInternalAnnotationView:(id)arg1;	// IMP=0x00000000001c555e
- (void)_dropPinsIfNeeded:(_Bool)arg1;	// IMP=0x00000000001c5065
- (void)setUserLocationView:(id)arg1;	// IMP=0x00000000001c4f38
@property(readonly, nonatomic) MKAnnotationView *userLocationView;
@property(readonly, nonatomic) _Bool hasPendingAnimations;
@property(readonly, nonatomic) _Bool hasDroppingPins;
- (struct UIEdgeInsets)accessoryPadding;	// IMP=0x00000000001c4db5
- (void)pinDidDrop:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001c4ca7
- (void)_dropDraggingAnnotationViewAnimated:(_Bool)arg1;	// IMP=0x00000000001c4a63
- (struct CGPoint)draggingAnnotationViewDropPointForPoint:(struct CGPoint)arg1;	// IMP=0x00000000001c4a19
- (struct CGPoint)draggingAnnotationViewDropPoint;	// IMP=0x00000000001c493d
- (void)draggingTouchMovedToPoint:(struct CGPoint)arg1 edgeInsets:(struct UIEdgeInsets)arg2;	// IMP=0x00000000001c479f
- (void)_draggingAnnotationViewDidPause:(id)arg1;	// IMP=0x00000000001c4758
- (void)_liftForDragging:(id)arg1 mouseDownPoint:(struct CGPoint)arg2;	// IMP=0x00000000001c4643
- (id)annotationViewForPoint:(struct CGPoint)arg1;	// IMP=0x00000000001c4627
- (id)_annotationViewForSelectionAtPoint:(struct CGPoint)arg1 avoidCurrent:(_Bool)arg2 maxDistance:(double)arg3;	// IMP=0x00000000001c4148
@property(readonly, nonatomic) NSMutableOrderedSet *annotationViews;
- (void)updateUserLocationView;	// IMP=0x00000000001c410f
- (void)updateAnnotationView:(id)arg1;	// IMP=0x00000000001c40fd
- (struct CGPoint)pointForCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x00000000001c4090
- (struct CLLocationCoordinate2D)coordinateForAnnotationView:(id)arg1;	// IMP=0x00000000001c3fe8
- (void)_updateAnnotationViewsForReason:(long long)arg1 updatePositions:(_Bool)arg2;	// IMP=0x00000000001c397c
- (void)updateAnnotationViewsForReason:(long long)arg1;	// IMP=0x00000000001c3965
- (void)deselectAnnotationView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001c38a3
- (void)updateCalloutStateForSelectedAnnotationView:(id)arg1;	// IMP=0x00000000001c3850
- (void)removeAnnotationViewsRotationAnimations;	// IMP=0x00000000001c369a
- (void)setAnnotationViewsRotationRadians:(double)arg1 animation:(id)arg2;	// IMP=0x00000000001c3557
@property(readonly, nonatomic) MKPinAnnotationView *bubblePin;
- (void)visibleCenteringRectChanged;	// IMP=0x00000000001c33de
- (struct CGRect)_visibleRect;	// IMP=0x00000000001c337f
- (struct CGRect)_visibleCenteringRectInView:(id)arg1;	// IMP=0x00000000001c330b
- (struct CGRect)_visibleCenteringRect;	// IMP=0x00000000001c32ac
- (_Bool)_view:(id)arg1 containsPoint:(struct CGPoint)arg2;	// IMP=0x00000000001c31f7
- (_Bool)accessoryContainsPoint:(struct CGPoint)arg1;	// IMP=0x00000000001c31ef
- (_Bool)calloutContainsPoint:(struct CGPoint)arg1;	// IMP=0x00000000001c317c
- (_Bool)calloutsShouldHaveParallax;	// IMP=0x00000000001c316c
- (_Bool)mapFocused;	// IMP=0x00000000001c315c
- (void)setCalloutsShouldHaveParallax:(_Bool)arg1;	// IMP=0x00000000001c314c
- (void)setMapFocused:(_Bool)arg1;	// IMP=0x00000000001c3137
- (void)setMapDisplayStyle:(CDStruct_0a13ab6d)arg1;	// IMP=0x00000000001c2fc3
@property(nonatomic) unsigned long long mapType;
- (void)setMapPitchRadians:(double)arg1;	// IMP=0x00000000001c2cf6
@property(nonatomic) __weak id <MKAnnotationContainerViewDelegate> delegate;
- (void)dealloc;	// IMP=0x00000000001c2ab6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001c296c
- (id)globalAnnotations;	// IMP=0x00000000001c9302
- (id)annotationsInMapRect:(CDStruct_02837cd9)arg1;	// IMP=0x00000000001c90e9
- (unsigned char)sceneState;	// IMP=0x00000000001c90de
- (unsigned char)sceneID;	// IMP=0x00000000001c90d6
- (void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id *)arg2 locale:(id *)arg3;	// IMP=0x00000000001c90d0
- (void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id *)arg2 locale:(id *)arg3;	// IMP=0x00000000001c90ca
- (id)clusterStyleAttributes;	// IMP=0x00000000001c90c2
- (_Bool)isClusteringEnabled;	// IMP=0x00000000001c90ba
- (void)removeObserver:(id)arg1;	// IMP=0x00000000001c909d
- (void)addObserver:(id)arg1;	// IMP=0x00000000001c9023
- (void)invalidateCustomFeatureDataSource;	// IMP=0x00000000001c8f5b
- (void)invalidateCustomFeatureDataSourceRect:(CDStruct_02837cd9)arg1;	// IMP=0x00000000001c8e01

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


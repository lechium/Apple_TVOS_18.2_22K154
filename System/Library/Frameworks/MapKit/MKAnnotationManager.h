//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKAnnotationView, MKQuadTrie, NSArray, NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet, NSTimer;
@protocol MKAnnotation, MKAnnotationManagerDelegate, MKAnnotationMarkerContainer, MKAnnotationRepresentation;

__attribute__((visibility("hidden")))
@interface MKAnnotationManager : NSObject
{
    id <MKAnnotationMarkerContainer> _container;	// 8 = 0x8
    id <MKAnnotationManagerDelegate> _delegate;	// 16 = 0x10
    _Bool _annotationRepresentationsAreAddedImmediately;	// 24 = 0x18
    NSTimer *_updateVisibleTimer;	// 32 = 0x20
    MKQuadTrie *_annotations;	// 40 = 0x28
    NSHashTable *_visibleAnnotations;	// 48 = 0x30
    NSMutableSet *_pendingAnnotations;	// 56 = 0x38
    NSMutableSet *_disallowAnimationAnnotations;	// 64 = 0x40
    NSMutableSet *_invalidCoordinateAnnotations;	// 72 = 0x48
    id <MKAnnotation> _selectedAnnotation;	// 80 = 0x50
    id <MKAnnotation> _draggedAnnotation;	// 88 = 0x58
    NSMapTable *_annotationsToRepresentations;	// 96 = 0x60
    NSMutableSet *_annotationRepresentations;	// 104 = 0x68
    NSMapTable *_reusableAnnotationRepresentations;	// 112 = 0x70
    NSMutableSet *_pendingRemovalAnnotationRepresentations;	// 120 = 0x78
    NSMutableDictionary *_registeredIdentifierToRepresentationClasses;	// 128 = 0x80
    NSHashTable *_allClusterAnnotations;	// 136 = 0x88
    _Bool _isChangingCoordinate;	// 144 = 0x90
    _Bool _isDeferringContainerSelection;	// 145 = 0x91
    _Bool _deferredContainerSelectionAnimated;	// 146 = 0x92
    MKAnnotationView *_userLocationView;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000000d1e53
@property(nonatomic) __weak id <MKAnnotation> draggedAnnotation; // @synthesize draggedAnnotation=_draggedAnnotation;
@property(nonatomic) _Bool annotationRepresentationsAreAddedImmediately; // @synthesize annotationRepresentationsAreAddedImmediately=_annotationRepresentationsAreAddedImmediately;
@property(nonatomic) __weak id <MKAnnotationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MKAnnotationMarkerContainer> container; // @synthesize container=_container;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000d18bf
- (void)_removeRepresentationForAnnotation:(id)arg1 fromCull:(_Bool)arg2;	// IMP=0x00000000000d16a6
- (void)cleanUpAnnotationRepresentationForRemoval:(id)arg1;	// IMP=0x00000000000d165f
- (id)_addRepresentationForAnnotation:(id)arg1;	// IMP=0x00000000000d13b2
- (void)configureDefaultAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;	// IMP=0x00000000000d113c
- (void)configureAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;	// IMP=0x00000000000d10d1
- (id)newInternalAnnotationRepresentationForInternalAnnotation:(id)arg1;	// IMP=0x00000000000d1039
- (_Bool)annotationIsInternal:(id)arg1;	// IMP=0x00000000000d0ff7
- (id)representationForAnnotation:(id)arg1;	// IMP=0x00000000000d0fe1
@property(readonly, nonatomic) __weak id <MKAnnotationRepresentation> selectedAnnotationRepresentation;
- (void)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000d0e2c
- (void)_annotationDidChangeState:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000d0cce
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000d09e6
@property(readonly, nonatomic) NSArray *annotationRepresentations;
@property(readonly, nonatomic) NSArray *annotations;
- (void)updateVisibleAnnotations;	// IMP=0x00000000000d01e1
- (void)showAnnotationsInMapRect:(CDStruct_02837cd9)arg1;	// IMP=0x00000000000cfd34
- (id)annotationsInMapRect:(CDStruct_02837cd9)arg1;	// IMP=0x00000000000cfd1e
- (_Bool)containsAnnotation:(id)arg1;	// IMP=0x00000000000cfd08
- (void)registerClass:(Class)arg1 forRepresentationReuseIdentifier:(id)arg2;	// IMP=0x00000000000cfbf5
- (id)dequeueReusableAnnotationRepresentationWithIdentifier:(id)arg1;	// IMP=0x00000000000cfa4b
- (void)addRepresentationsForAnnotations:(id)arg1;	// IMP=0x00000000000cf762
- (void)replaceAnnotation:(id)arg1 withAnnotation:(id)arg2;	// IMP=0x00000000000cf5cd
- (void)removeAnnotations:(id)arg1;	// IMP=0x00000000000cf48b
- (void)removeAnnotation:(id)arg1 updateVisible:(_Bool)arg2;	// IMP=0x00000000000cf473
- (void)removeAnnotation:(id)arg1;	// IMP=0x00000000000cf456
- (void)_removeAnnotation:(id)arg1 updateVisible:(_Bool)arg2 removeFromContainer:(_Bool)arg3;	// IMP=0x00000000000cf2c9
- (id)addRepresentationForAnnotation:(id)arg1;	// IMP=0x00000000000cf146
- (void)addAnnotations:(id)arg1;	// IMP=0x00000000000cf00a
- (void)addAnnotation:(id)arg1 allowAnimation:(_Bool)arg2;	// IMP=0x00000000000cef82
- (void)addAnnotation:(id)arg1;	// IMP=0x00000000000cef6b
- (void)_addAnnotation:(id)arg1 updateVisible:(_Bool)arg2;	// IMP=0x00000000000ced7e
- (void)_setupUpdateVisibleAnnotationsTimer;	// IMP=0x00000000000cecb6
- (void)dealloc;	// IMP=0x00000000000ce7b0
- (id)init;	// IMP=0x00000000000ce6b0

@end


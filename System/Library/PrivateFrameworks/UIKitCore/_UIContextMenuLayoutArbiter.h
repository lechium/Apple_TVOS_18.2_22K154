//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIView, _UIContextMenuLayoutArbiterInput;

__attribute__((visibility("hidden")))
@interface _UIContextMenuLayoutArbiter : NSObject
{
    UIView *_containerView;	// 8 = 0x8
    unsigned long long _currentLayout;	// 16 = 0x10
    _UIContextMenuLayoutArbiterInput *_currentInput;	// 24 = 0x18
    CDStruct_17a0fc55 _menuAnchor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000abb1d2
@property(retain, nonatomic) _UIContextMenuLayoutArbiterInput *currentInput; // @synthesize currentInput=_currentInput;
@property(nonatomic) unsigned long long currentLayout; // @synthesize currentLayout=_currentLayout;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (void)_drawContentBoundsDebugUI:(struct CGRect)arg1;	// IMP=0x0000000000abab90
- (id)_accessoryPositionsForBaseLayout:(id)arg1;	// IMP=0x0000000000aba078
- (struct CGPoint)_computedMenuAnchorPointForMenuFrame:(struct CGRect)arg1 previewFrame:(struct CGRect)arg2;	// IMP=0x0000000000ab9c29
- (struct CGRect)_computedMenuBoundsForContentBounds:(struct CGRect)arg1 predictedPreviewFrame:(struct CGRect)arg2;	// IMP=0x0000000000ab988d
- (struct CGRect)_computedPreviewBoundsForContentBounds:(struct CGRect)arg1 sourceWindowBounds:(struct CGRect)arg2;	// IMP=0x0000000000ab90e9
- (void)_positionPlatterFrame:(inout struct CGRect *)arg1 andActionViewFrame:(inout struct CGRect *)arg2 inBounds:(struct CGRect)arg3 aboutSourcePoint:(struct CGPoint)arg4;	// IMP=0x0000000000ab7703
- (unsigned long long)_automaticAlignmentAndOffset:(out double *)arg1 forAttachment:(unsigned long long)arg2 sourcePoint:(struct CGPoint)arg3;	// IMP=0x0000000000ab74b3
- (unsigned long long)_defaultAttachmentEdge;	// IMP=0x0000000000ab6cf5
- (double)contentSpacing;	// IMP=0x0000000000ab6ab1
- (struct CGRect)contentBoundsForConstrainingPreview;	// IMP=0x0000000000ab69e3
@property(readonly, nonatomic) struct CGRect contentBounds;
- (struct CGRect)sourceWindowBounds;	// IMP=0x0000000000ab65bc
- (id)computedLayoutWithInput:(id)arg1;	// IMP=0x0000000000ab4fd6
@property(readonly, nonatomic) CDStruct_17a0fc55 menuAnchor; // @synthesize menuAnchor=_menuAnchor;
- (id)initWithContainerView:(id)arg1 layout:(unsigned long long)arg2;	// IMP=0x0000000000ab4ed1

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface WKInspectorHighlightView : UIView
{
    struct RetainPtr<NSMutableArray<CAShapeLayer *>> _layers;	// 8 = 0x8
    struct optional<WebCore::InspectorOverlayHighlight> _highlight;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000044422e
- (void).cxx_destruct;	// IMP=0x00000000004441e9
- (void)update:(const void *)arg1 scale:(double)arg2 frame:(const struct FloatRect *)arg3;	// IMP=0x000000000044389c
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000004435ab
- (void)_layoutForRectsHighlight:(const void *)arg1;	// IMP=0x00000000004434b0
- (void)_layoutForNodeListHighlight:(const void *)arg1;	// IMP=0x0000000000443441
- (void)_layoutForNodeHighlight:(const void *)arg1 offset:(unsigned int)arg2;	// IMP=0x0000000000442ac6
- (void)_createLayers:(unsigned long long)arg1;	// IMP=0x0000000000442982
- (void)_removeAllLayers;	// IMP=0x000000000044284b
- (void)dealloc;	// IMP=0x000000000044280d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000442772

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebCore/WAKView.h>

@class NSMutableArray, WebNodeHighlight;

__attribute__((visibility("hidden")))
@interface WebNodeHighlightView : WAKView
{
    WebNodeHighlight *_webNodeHighlight;	// 8 = 0x8
    NSMutableArray *_layers;	// 16 = 0x10
}

- (id)webNodeHighlight;	// IMP=0x0000000000104d80
- (void)layoutSublayers:(id)arg1;	// IMP=0x0000000000104c60
- (void)_layoutForRectsHighlight:(void *)arg1 parent:(id)arg2;	// IMP=0x0000000000104b30
- (void)_layoutForNodeHighlight:(void *)arg1 parent:(id)arg2;	// IMP=0x0000000000103e10
- (void)_attach:(id)arg1 numLayers:(unsigned long long)arg2;	// IMP=0x0000000000103d00
- (_Bool)isFlipped;	// IMP=0x0000000000103cf0
- (void)detachFromWebNodeHighlight;	// IMP=0x0000000000103cc0
- (void)dealloc;	// IMP=0x0000000000103c50
- (id)initWithWebNodeHighlight:(id)arg1;	// IMP=0x0000000000103bd0
- (void)_removeAllLayers;	// IMP=0x0000000000103a70

@end


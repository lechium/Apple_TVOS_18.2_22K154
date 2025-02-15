//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLRenderPipelineState;

__attribute__((visibility("hidden")))
@interface ARUIRingsRenderState : NSObject
{
    id <MTLRenderPipelineState> _renderPipelineState;	// 8 = 0x8
    unsigned long long _renderArea;	// 16 = 0x10
    long long _centeredAroundPercentSegmentDrawCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001a32e
@property(nonatomic) long long centeredAroundPercentSegmentDrawCount; // @synthesize centeredAroundPercentSegmentDrawCount=_centeredAroundPercentSegmentDrawCount;
@property(nonatomic) unsigned long long renderArea; // @synthesize renderArea=_renderArea;
- (_Bool)shouldRunStateForRing:(id)arg1;	// IMP=0x000000000001a2fe
- (void)didInitialize;	// IMP=0x000000000001a2e8
- (id)name;	// IMP=0x000000000001a2e0
- (id)initWithPipelineLibrary:(id)arg1;	// IMP=0x000000000001a20c
- (id)renderPipelineDescriptorFromLibrary:(id)arg1;	// IMP=0x000000000001a204
@property(retain, nonatomic) id <MTLRenderPipelineState> renderPipelineState;
- (id)initWithDevice:(id)arg1 library:(id)arg2;	// IMP=0x000000000001a0ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


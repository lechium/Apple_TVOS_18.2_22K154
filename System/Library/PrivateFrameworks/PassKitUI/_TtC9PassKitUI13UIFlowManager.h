//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9PassKitUI13UIFlowManager : NSObject
{
    MISSING_TYPE *parentRenderer;	// 8 = 0x8
    MISSING_TYPE *resultHandler;	// 16 = 0x10
    MISSING_TYPE *onViewLoaded;	// 32 = 0x20
    MISSING_TYPE *root;	// 48 = 0x30
    MISSING_TYPE *activeNode;	// 56 = 0x38
    MISSING_TYPE *completion;	// 64 = 0x40
    MISSING_TYPE *isPerformingMutation;	// 80 = 0x50
    MISSING_TYPE *inflightRenderersBeingPresented;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000598f0
- (id)init;	// IMP=0x0000000000059890
- (void)rendererDidDisappearWithRenderer:(id)arg1;	// IMP=0x0000000000059c60
- (void)rendererDidRunOutOfContentWithRenderer:(id)arg1;	// IMP=0x0000000000059c40

@end


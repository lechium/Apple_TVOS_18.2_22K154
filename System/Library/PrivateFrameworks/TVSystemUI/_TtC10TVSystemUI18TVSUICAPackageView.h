//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC10TVSystemUI18TVSUICAPackageView : UIView
{
    MISSING_TYPE *rootLayer;	// 8 = 0x8
    MISSING_TYPE *originalSize;	// 16 = 0x10
    MISSING_TYPE *publishedObjectMap;	// 32 = 0x20
    MISSING_TYPE *stateController;	// 40 = 0x28
    MISSING_TYPE *pendingCompletion;	// 48 = 0x30
    MISSING_TYPE *pendingCompletionToState;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000065ca0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000065c40
- (void)layoutSubviews;	// IMP=0x0000000000065880
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000065100
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(_Bool)arg3;	// IMP=0x0000000000065d10

@end


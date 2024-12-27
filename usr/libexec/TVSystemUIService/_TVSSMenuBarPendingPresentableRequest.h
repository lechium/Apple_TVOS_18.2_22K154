//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewController;
@protocol TVSSBannerPresentable;

@interface _TVSSMenuBarPendingPresentableRequest : NSObject
{
    UIViewController<TVSSBannerPresentable> *_presentable;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000e49a0
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) UIViewController<TVSSBannerPresentable> *presentable; // @synthesize presentable=_presentable;
- (id)initWithPresentableViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e4860

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVSPPillView, UIView;

@interface TVSSPillContentViewProviderUpdateContext : NSObject
{
    UIView *_containerView;	// 8 = 0x8
    TVSPPillView *_pillView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000123540
@property(readonly, nonatomic) TVSPPillView *pillView; // @synthesize pillView=_pillView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (id)initWithContainerView:(id)arg1 pillView:(id)arg2;	// IMP=0x0010000000123410

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

@interface __AISSetupViewController : UIViewController
{
    MISSING_TYPE *__shouldAutoDismiss;	// 8 = 0x8
    MISSING_TYPE *__isPreEstablishedClient;	// 16 = 0x10
    MISSING_TYPE *hostingController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000031140
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000031000
- (void)viewDidLoad;	// IMP=0x0000000000030960
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000030290
- (id)initWithContext:(id)arg1 dontSuggestUserAction:(id)arg2 skipAction:(id)arg3 shouldAutoDismiss:(_Bool)arg4 isPreEstablishedClient:(_Bool)arg5 reportHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000030050
@property(nonatomic) _Bool isPreEstablishedClient;
@property(nonatomic) _Bool shouldAutoDismiss;

@end


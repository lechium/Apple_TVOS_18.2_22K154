//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@interface PBNavigationController : UINavigationController
{
    CDUnknownBlockType _dismissLastViewControllerBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000117b5f
@property(copy, nonatomic) CDUnknownBlockType dismissLastViewControllerBlock; // @synthesize dismissLastViewControllerBlock=_dismissLastViewControllerBlock;
- (id)_lastViewController;	// IMP=0x0010000000117abc
- (void)_delegateDidDismissViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001179a3
- (void)removeViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001178b0
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000117768

@end


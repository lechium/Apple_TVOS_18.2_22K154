//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIAlertController.h"

@protocol UIKBAlertControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIKBAlertController : UIAlertController
{
    id <UIKBAlertControllerDelegate> _kbDelegate;	// 440 = 0x1b8
}

@property(nonatomic) id <UIKBAlertControllerDelegate> kbDelegate; // @synthesize kbDelegate=_kbDelegate;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000d0ab80

@end


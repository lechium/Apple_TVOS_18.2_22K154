//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface UIViewControllerAction : NSObject
{
    NSString *_name;	// 8 = 0x8
    int _transition;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
    double _curlUpRevealedHeight;	// 32 = 0x20
    UIViewController *_viewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000007c4a27
- (id)initWithViewController:(id)arg1 name:(id)arg2 transition:(int)arg3;	// IMP=0x00000000007c498b

@end


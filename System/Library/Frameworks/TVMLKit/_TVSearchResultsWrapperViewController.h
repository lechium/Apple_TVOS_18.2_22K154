//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class _TVStackCollectionViewController;

__attribute__((visibility("hidden")))
@interface _TVSearchResultsWrapperViewController : UIViewController
{
    _TVStackCollectionViewController *_stackCollectionViewController;	// 8 = 0x8
    UIViewController *_defaultResultsViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a1120
@property(retain, nonatomic) UIViewController *defaultResultsViewController; // @synthesize defaultResultsViewController=_defaultResultsViewController;
@property(retain, nonatomic) _TVStackCollectionViewController *stackCollectionViewController; // @synthesize stackCollectionViewController=_stackCollectionViewController;
- (id)preferredFocusEnvironments;	// IMP=0x00000000000a1069
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000a0ca0
- (void)viewDidLoad;	// IMP=0x00000000000a0b20
- (id)initWithStackCollectionViewController:(id)arg1;	// IMP=0x00000000000a0977

@end


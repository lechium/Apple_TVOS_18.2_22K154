//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface UIStoryboardPopoverSegueTemplate
{
    unsigned long long _permittedArrowDirections;	// 8 = 0x8
    NSArray *_passthroughViews;	// 16 = 0x10
    UIView *_anchorView;	// 24 = 0x18
    UIBarButtonItem *_anchorBarButtonItem;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001280b60
@property(retain, nonatomic) UIBarButtonItem *anchorBarButtonItem; // @synthesize anchorBarButtonItem=_anchorBarButtonItem;
@property(retain, nonatomic) UIView *anchorView; // @synthesize anchorView=_anchorView;
@property(copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
- (id)segueWithDestinationViewController:(id)arg1;	// IMP=0x00000000012808d8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000012807ff
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000012806cb

@end


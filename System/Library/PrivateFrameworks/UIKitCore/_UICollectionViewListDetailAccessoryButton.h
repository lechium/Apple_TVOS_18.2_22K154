//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class UIColor;
@protocol UITableConstants;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListDetailAccessoryButton : UIButton
{
    long long _type;	// 160 = 0xa0
    id <UITableConstants> _constants;	// 168 = 0xa8
    CDUnknownBlockType _actionHandler;	// 176 = 0xb0
    UIColor *_accessoryTintColor;	// 184 = 0xb8
    UIColor *_accessoryBackgroundColor;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000bbb8e3
@property(retain, nonatomic) UIColor *accessoryBackgroundColor; // @synthesize accessoryBackgroundColor=_accessoryBackgroundColor;
@property(retain, nonatomic) UIColor *accessoryTintColor; // @synthesize accessoryTintColor=_accessoryTintColor;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id <UITableConstants> constants; // @synthesize constants=_constants;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)updateConfiguration;	// IMP=0x0000000000bbb7ed
- (id)_renderedImage;	// IMP=0x0000000000bbb746
- (void)_executeActionHandler;	// IMP=0x0000000000bbb654
- (id)initWithConstants:(id)arg1;	// IMP=0x0000000000bbb4b5

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class CNAvatarView, UILabel;

__attribute__((visibility("hidden")))
@interface CNUIPeopleCell : UITableViewCell
{
    CNAvatarView *_avatarView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b475b
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void)setupConstraints;	// IMP=0x00000000000b4506
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000b43c1

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIMenu, _UIContextMenuListView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuNode : NSObject
{
    _Bool _leftOfParentWhenCascading;	// 8 = 0x8
    _UIContextMenuListView *_listView;	// 16 = 0x10
    UIMenu *_menu;	// 24 = 0x18
    _UIContextMenuNode *_previous;	// 32 = 0x20
    _UIContextMenuNode *_next;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003ea85a
@property(nonatomic) _Bool leftOfParentWhenCascading; // @synthesize leftOfParentWhenCascading=_leftOfParentWhenCascading;
@property(nonatomic) __weak _UIContextMenuNode *next; // @synthesize next=_next;
@property(nonatomic) __weak _UIContextMenuNode *previous; // @synthesize previous=_previous;
@property(retain, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) _UIContextMenuListView *listView; // @synthesize listView=_listView;
- (id)description;	// IMP=0x00000000003ea6e4

@end


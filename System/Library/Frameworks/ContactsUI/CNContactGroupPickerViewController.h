//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UITableView;
@protocol CNContactGroupPickerDelegate;

__attribute__((visibility("hidden")))
@interface CNContactGroupPickerViewController : UIViewController
{
    NSArray *_pickableGroups;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    id <CNContactGroupPickerDelegate> _groupPickerDelegate;	// 24 = 0x18
}

+ (id)pickableGroupsWithPickedGroups:(id)arg1;	// IMP=0x001000000001b52a
+ (id)propertySections;	// IMP=0x001000000001b33f
+ (_Bool)propertiesLeftToPickWithPickedGroups:(id)arg1;	// IMP=0x001000000001b2f0
- (void).cxx_destruct;	// IMP=0x000000000001bfa0
@property(nonatomic) __weak id <CNContactGroupPickerDelegate> groupPickerDelegate; // @synthesize groupPickerDelegate=_groupPickerDelegate;
- (id)_loadPickableGroupsWithPickedGroups:(id)arg1;	// IMP=0x000000000001bf5a
- (void)cancel:(id)arg1;	// IMP=0x000000000001bf0e
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000000001bef9
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000001be5c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000001bd6b
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000001bc29
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000001bbd7
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000001bbba
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001babf
- (void)loadView;	// IMP=0x000000000001b94d
- (void)dealloc;	// IMP=0x000000000001b90b
- (id)initWithGroups:(id)arg1;	// IMP=0x000000000001b856

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol AMSUINotificationSettingsViewModelDelegate;

__attribute__((visibility("hidden")))
@interface AMSUINotificationSettingsViewModel : NSObject
{
    _Bool _showAllowNotificationsButton;	// 8 = 0x8
    id <AMSUINotificationSettingsViewModelDelegate> _delegate;	// 16 = 0x10
    NSArray *_sections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004cb9e
@property(nonatomic) _Bool showAllowNotificationsButton; // @synthesize showAllowNotificationsButton=_showAllowNotificationsButton;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <AMSUINotificationSettingsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notificationInAppSettingsTableViewCellDidToggleValue:(id)arg1 forItem:(id)arg2;	// IMP=0x000000000004ca80
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000000004c8b7
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000004c780
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000004c424
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000004c2db
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000004c279

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


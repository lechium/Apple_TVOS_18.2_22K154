//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class NSIndexPath, UITableView, UIView;

@protocol UITableViewFocusDelegateLegacy <UITableViewDelegate>

@optional
- (NSIndexPath *)indexPathForPreferredFocusedItemForTableView:(UITableView *)arg1;
- (_Bool)tableView:(UITableView *)arg1 shouldUpdateFocusFromRowAtIndexPath:(NSIndexPath *)arg2 toView:(UIView *)arg3 heading:(unsigned long long)arg4;
- (void)tableView:(UITableView *)arg1 didUnfocusRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didFocusRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)_tableView:(UITableView *)arg1 canFocusRowAtIndexPath:(NSIndexPath *)arg2;
@end


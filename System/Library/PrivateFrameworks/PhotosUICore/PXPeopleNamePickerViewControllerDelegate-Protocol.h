//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class CNContact, NSString, PHPerson, PXPeopleNamePickerViewController;

@protocol PXPeopleNamePickerViewControllerDelegate <NSObject>
- (void)namePickerController:(PXPeopleNamePickerViewController *)arg1 didPickString:(NSString *)arg2;
- (void)namePickerController:(PXPeopleNamePickerViewController *)arg1 didPickContact:(CNContact *)arg2;
- (void)namePickerController:(PXPeopleNamePickerViewController *)arg1 didPickPerson:(PHPerson *)arg2;

@optional
- (void)namePickerControllerWillChangeText:(PXPeopleNamePickerViewController *)arg1;
- (void)namePickerControllerDidEndEditing:(PXPeopleNamePickerViewController *)arg1;
- (void)namePickerControllerDidStartEditing:(PXPeopleNamePickerViewController *)arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContact, CNContactProperty, NSArray;

@protocol CNContactPickerHostProtocol <NSObject>
- (void)pickerDidCancel;
- (void)pickerDidSelectContacts:(NSArray *)arg1 properties:(NSArray *)arg2;
- (void)pickerDidSelectContact:(CNContact *)arg1 property:(CNContactProperty *)arg2;
@end


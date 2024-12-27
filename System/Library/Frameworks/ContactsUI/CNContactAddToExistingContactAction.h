//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@class CNContact, CNContactPickerViewController, NSString;

__attribute__((visibility("hidden")))
@interface CNContactAddToExistingContactAction : CNContactAction
{
    CNContact *_chosenContact;	// 8 = 0x8
    CNContactPickerViewController *_contactPicker;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000017241
@property(retain, nonatomic) CNContactPickerViewController *contactPicker; // @synthesize contactPicker=_contactPicker;
@property(retain, nonatomic) CNContact *chosenContact; // @synthesize chosenContact=_chosenContact;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;	// IMP=0x0000000000017144
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;	// IMP=0x0000000000016ff0
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x0000000000016f8d
- (void)performActionWithSender:(id)arg1;	// IMP=0x0000000000016e6a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNContactStore.h>

@interface CNContactStore (PhotoLibraryAdditions)
- (id)contactsMatchingPhoneNumber:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x0060000000003b03
- (id)contactsMatchingEmailAddress:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x006000000000398f
- (id)_allContactIDsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x006000000000358e
- (id)allContactIDsMatchingEmailAddress:(id)arg1 orPhoneNumber:(id)arg2;	// IMP=0x0060000000003298
- (id)allContactIDsMatchingEmailAddress:(id)arg1;	// IMP=0x0060000000003284
@end


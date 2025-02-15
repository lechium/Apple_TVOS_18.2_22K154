//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/CNTask.h>

@class CNChangeHistoryEventFactory, CNSaveRequest;
@protocol CNChangeHistoryEventVisitorPrivate;

__attribute__((visibility("hidden")))
@interface CNSaveRequestVisitationTask : CNTask
{
    CNSaveRequest *_saveRequest;	// 24 = 0x18
    id <CNChangeHistoryEventVisitorPrivate> _visitor;	// 32 = 0x20
    CNChangeHistoryEventFactory *_factory;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000d8b2d
@property(readonly) CNChangeHistoryEventFactory *factory; // @synthesize factory=_factory;
@property(readonly) id <CNChangeHistoryEventVisitorPrivate> visitor; // @synthesize visitor=_visitor;
@property(readonly) CNSaveRequest *saveRequest; // @synthesize saveRequest=_saveRequest;
- (void)sendDifferentMeCardEvent;	// IMP=0x00000000000d89ff
- (void)sendPreferredContactForImageEvents;	// IMP=0x00000000000d891b
- (void)sendPreferredContactForNameEvents;	// IMP=0x00000000000d883b
- (void)sendUnlinkContactEvents;	// IMP=0x00000000000d875a
- (void)sendLinkContactsEvents;	// IMP=0x00000000000d8673
- (void)sendRemoveSubgroupFromGroupEvents;	// IMP=0x00000000000d858f
- (void)sendAddSubgroupToGroupEvents;	// IMP=0x00000000000d84ab
- (void)sendRemoveMemberFromGroupEvents;	// IMP=0x00000000000d83c7
- (void)sendAddMemberToGroupEvents;	// IMP=0x00000000000d82e3
- (void)sendDeletedGroupEvents;	// IMP=0x00000000000d8202
- (void)sendUpdatedGroupEvents;	// IMP=0x00000000000d8121
- (void)sendAddedGroupEvents;	// IMP=0x00000000000d803d
- (void)sendDeletedContactEvents;	// IMP=0x00000000000d7f5c
- (void)sendUpdatedContactEvents;	// IMP=0x00000000000d7e79
- (void)sendAddedContactEvents;	// IMP=0x00000000000d7d95
- (id)run:(id *)arg1;	// IMP=0x00000000000d7cad
- (id)initWithSaveRequest:(id)arg1 visitor:(id)arg2 factory:(id)arg3;	// IMP=0x00000000000d7bd7

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class IMMessage, IMMessageItem;

@interface NSArray (IMItems)
- (void)im_logGUIDsForReason:(id)arg1;	// IMP=0x003000000005f6c4
@property(readonly, nonatomic) IMMessageItem *lastMessageItem;
@property(readonly, nonatomic) IMMessageItem *firstMessageItem;
- (_Bool)equivalentToRecipients:(id)arg1;	// IMP=0x0030000000072958
- (id)indexesOfPartsOfMessageItem:(id)arg1;	// IMP=0x00300000000a5bb6
- (id)indexesOfPartsOfMessage:(id)arg1;	// IMP=0x00300000000a5a20
- (id)__imItems;	// IMP=0x0030000000118633
- (void)__enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00300000001184c4
@property(readonly, nonatomic) IMMessageItem *__imLastMessageItem;
- (id)messages;	// IMP=0x00300000001182e9
- (void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00300000001181d9
@property(readonly, nonatomic) IMMessage *lastIncomingFinishedMessage;
@property(readonly, nonatomic) IMMessage *lastIncomingMessage;
@property(readonly, nonatomic) IMMessage *lastFinishedMessage;
@property(readonly, nonatomic) IMMessage *lastMessage;
@property(readonly, nonatomic) IMMessage *firstMessage;
@end


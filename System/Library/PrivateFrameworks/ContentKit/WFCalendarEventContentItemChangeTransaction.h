//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFContentItemChangeTransaction.h"

@class EKEvent, EKEventStore;

__attribute__((visibility("hidden")))
@interface WFCalendarEventContentItemChangeTransaction : WFContentItemChangeTransaction
{
    EKEvent *_mutableEvent;	// 8 = 0x8
    EKEventStore *_eventStore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000debe9
@property(readonly, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(readonly, nonatomic) EKEvent *mutableEvent; // @synthesize mutableEvent=_mutableEvent;
- (void)removeAllAttachments;	// IMP=0x00000000000dea17
- (void)addAttachments:(id)arg1;	// IMP=0x00000000000de733
- (void)updateAttachments:(id)arg1;	// IMP=0x00000000000de65e
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1 isNew:(_Bool)arg2;	// IMP=0x00000000000de476
- (id)initWithContentItem:(id)arg1 eventStore:(id)arg2;	// IMP=0x00000000000de2bb

@end


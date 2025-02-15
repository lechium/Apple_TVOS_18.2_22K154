//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CSDConversationNoticeDelegate, OS_dispatch_queue;

@interface CSDConversationNoticeManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <CSDConversationNoticeDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000017db17
@property(readonly, nonatomic) __weak id <CSDConversationNoticeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)removeConversationNoticeWithUUID:(id)arg1;	// IMP=0x001000000017da9b
- (void)activateConversationNoticeWithActionURL:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000017d936
- (id)fetchUpcomingNoticeFromQueue;	// IMP=0x001000000017d8d8
- (void)conversation:(id)arg1 receivedActivitySessionEvent:(id)arg2;	// IMP=0x001000000017ce9b
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x001000000017ce08

@end


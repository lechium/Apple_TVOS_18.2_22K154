//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHMatchResultUserNotificationContentProvider;

@interface SHMatchResultUserNotificationContentDeliverer : NSObject
{
    SHMatchResultUserNotificationContentProvider *_contentProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000012d76
@property(readonly, nonatomic) SHMatchResultUserNotificationContentProvider *contentProvider; // @synthesize contentProvider=_contentProvider;
- (void)deliverContentForMatchedMediaItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012abb
- (void)deliverContentForNoMatchWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000128d5
- (id)initWithContentProvider:(id)arg1;	// IMP=0x001000000001286a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


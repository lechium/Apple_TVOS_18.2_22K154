//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InAppMessages/NSObject-Protocol.h>

@class IAMMessage, IAMMessageCoordinator, NSString;

@protocol IAMMessageTarget <NSObject>
@property(readonly, nonatomic) NSString *targetIdentifier;
- (void)messageCoordinator:(IAMMessageCoordinator *)arg1 didUpdatePriorityMessage:(IAMMessage *)arg2 forTarget:(NSString *)arg3;

@optional
@property(readonly, nonatomic) _Bool shouldBeNotifiedOfNilPriorityMessageAfterRegistration;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@end


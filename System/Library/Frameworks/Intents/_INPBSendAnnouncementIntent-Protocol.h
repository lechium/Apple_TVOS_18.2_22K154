//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBAnnouncement, _INPBHomeFilter, _INPBIntentMetadata;

@protocol _INPBSendAnnouncementIntent <NSObject>
+ (Class)recipientsType;
@property(readonly, nonatomic) _Bool hasSharedUserID;
@property(copy, nonatomic) NSString *sharedUserID;
@property(readonly, nonatomic) unsigned long long recipientsCount;
@property(copy, nonatomic) NSArray *recipients;
@property(nonatomic) _Bool hasIsReply;
@property(nonatomic) _Bool isReply;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) _Bool hasAnnouncement;
@property(retain, nonatomic) _INPBAnnouncement *announcement;
- (_INPBHomeFilter *)recipientsAtIndex:(unsigned long long)arg1;
- (void)addRecipients:(_INPBHomeFilter *)arg1;
- (void)clearRecipients;
@end


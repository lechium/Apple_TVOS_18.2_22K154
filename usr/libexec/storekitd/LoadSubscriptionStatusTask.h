//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, _TtC9storekitd6Client;

@interface LoadSubscriptionStatusTask
{
    _TtC9storekitd6Client *_client;	// 8 = 0x8
    NSString *_logKey;	// 16 = 0x10
    long long _reason;	// 24 = 0x18
    NSString *_subscriptionGroupID;	// 32 = 0x20
    NSArray *_statuses;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000061958
@property(readonly, nonatomic) NSArray *statuses; // @synthesize statuses=_statuses;
@property(readonly, nonatomic) NSString *subscriptionGroupID; // @synthesize subscriptionGroupID=_subscriptionGroupID;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(readonly, nonatomic) _TtC9storekitd6Client *client; // @synthesize client=_client;
- (void)_replaceDate:(id *)arg1 ifBeforeDate:(id)arg2;	// IMP=0x001000000006189e
- (void)_parseResponse:(id)arg1;	// IMP=0x0010000000060860
- (void)main;	// IMP=0x001000000005fb83
- (id)initWithSubscriptionGroupID:(id)arg1 reason:(long long)arg2 client:(id)arg3;	// IMP=0x001000000005fa9a

@end


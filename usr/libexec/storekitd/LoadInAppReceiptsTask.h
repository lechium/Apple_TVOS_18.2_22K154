//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSSet, NSString, _TtC9storekitd6Client;

@interface LoadInAppReceiptsTask
{
    _Bool _includeFinishedConsumables;	// 8 = 0x8
    _Bool _more;	// 9 = 0x9
    _TtC9storekitd6Client *_client;	// 16 = 0x10
    NSString *_localRevision;	// 24 = 0x18
    NSString *_logKey;	// 32 = 0x20
    long long _reason;	// 40 = 0x28
    NSString *_serverRevision;	// 48 = 0x30
    NSArray *_receipts;	// 56 = 0x38
    NSSet *_unfinishedTransactionIDs;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000007173
@property(readonly, nonatomic) NSSet *unfinishedTransactionIDs; // @synthesize unfinishedTransactionIDs=_unfinishedTransactionIDs;
@property(readonly, nonatomic) NSArray *receipts; // @synthesize receipts=_receipts;
@property(readonly, nonatomic) NSString *serverRevision; // @synthesize serverRevision=_serverRevision;
@property(readonly, nonatomic) _Bool more; // @synthesize more=_more;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(readonly, nonatomic) NSString *localRevision; // @synthesize localRevision=_localRevision;
@property(readonly, nonatomic) _Bool includeFinishedConsumables; // @synthesize includeFinishedConsumables=_includeFinishedConsumables;
@property(readonly, nonatomic) _TtC9storekitd6Client *client; // @synthesize client=_client;
- (void)main;	// IMP=0x0010000000006056
- (id)initWithLocalRevision:(id)arg1 reason:(long long)arg2 includeFinishedConsumables:(_Bool)arg3 client:(id)arg4;	// IMP=0x0010000000005f56

@end


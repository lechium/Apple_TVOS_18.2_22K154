//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthenticationCore/NSObject-Protocol.h>

@class LACDTOKVStoreValue, NSUUID, NSXPCConnection;

@protocol LACDTOKVStoreWriteRequest <NSObject>
@property(readonly, nonatomic) _Bool bypassEntitlements;
@property(readonly, nonatomic) NSUUID *contextUUID;
@property(readonly, nonatomic) NSXPCConnection *connection;
@property(readonly, nonatomic) LACDTOKVStoreValue *value;
@property(readonly, nonatomic) long long key;
@end


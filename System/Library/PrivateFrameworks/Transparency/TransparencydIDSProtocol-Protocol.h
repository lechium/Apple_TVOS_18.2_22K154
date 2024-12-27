//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class KTStaticKeyPeer, NSData, NSString;

@protocol TransparencydIDSProtocol
- (void)sasTTR:(NSData *)arg1 toHandle:(NSString *)arg2 pushToken:(NSString *)arg3 complete:(void (^)(NSError *))arg4;
- (void)getKTSessionByID:(NSString *)arg1 complete:(void (^)(KTIDSSession *))arg2;
- (void)getKTSessionByHandle:(NSString *)arg1 complete:(void (^)(NSArray *))arg2;
- (void)listKTSession:(void (^)(NSArray *))arg1;
- (void)deleteKTSession:(NSString *)arg1 complete:(void (^)(_Bool))arg2;
- (void)setupKTSession:(KTStaticKeyPeer *)arg1 complete:(void (^)(KTIDSSession *, NSError *))arg2;
@end


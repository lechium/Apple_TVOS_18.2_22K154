//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@protocol _TtP10PegasusKit12PGSDaemonXPC_
- (void)reportPegasusFeedbackWithPayloadData:(NSData *)arg1 forUseragent:(NSString *)arg2;
- (void)getIsDeviceSetupCompleteWithReply:(void (^)(long long, NSError *))arg1;
- (void)getBagDataWithReply:(void (^)(NSData *, NSError *))arg1;
- (void)getQueryContextDataForClient:(unsigned long long)arg1 reply:(void (^)(NSData *, NSError *))arg2;
@end


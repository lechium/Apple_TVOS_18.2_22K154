//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAPBTLEControlOutputStream, HAPBTLEControlPacket, NSError;

@protocol HAPBTLEControlOutputStreamDelegate <NSObject>
- (void)controlOutputStreamDidComplete:(HAPBTLEControlOutputStream *)arg1;
- (void)controlOutputStream:(HAPBTLEControlOutputStream *)arg1 didCloseWithError:(NSError *)arg2;
- (void)controlOutputStreamDidOpen:(HAPBTLEControlOutputStream *)arg1;
- (void)controlOutputStream:(HAPBTLEControlOutputStream *)arg1 didReceiveRequestToSendControlPacket:(HAPBTLEControlPacket *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end


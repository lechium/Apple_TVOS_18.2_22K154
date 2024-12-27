//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSError, NSObject, NSString, _DT_GCDAsyncSocket;
@protocol OS_dispatch_queue;

@protocol GCDAsyncSocketDelegate

@optional
- (void)socket:(_DT_GCDAsyncSocket *)arg1 didReceiveTrust:(struct __SecTrust *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)socketDidSecure:(_DT_GCDAsyncSocket *)arg1;
- (void)socketDidDisconnect:(_DT_GCDAsyncSocket *)arg1 withError:(NSError *)arg2;
- (void)socketDidCloseReadStream:(_DT_GCDAsyncSocket *)arg1;
- (double)socket:(_DT_GCDAsyncSocket *)arg1 shouldTimeoutWriteWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (double)socket:(_DT_GCDAsyncSocket *)arg1 shouldTimeoutReadWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (void)socket:(_DT_GCDAsyncSocket *)arg1 didWritePartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)socket:(_DT_GCDAsyncSocket *)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(_DT_GCDAsyncSocket *)arg1 didReadPartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)socket:(_DT_GCDAsyncSocket *)arg1 didReadData:(NSData *)arg2 withTag:(long long)arg3;
- (void)socket:(_DT_GCDAsyncSocket *)arg1 didConnectToHost:(NSString *)arg2 port:(unsigned short)arg3;
- (void)socket:(_DT_GCDAsyncSocket *)arg1 didAcceptNewSocket:(_DT_GCDAsyncSocket *)arg2;
- (NSObject<OS_dispatch_queue> *)newSocketQueueForConnectionFromAddress:(NSData *)arg1 onSocket:(_DT_GCDAsyncSocket *)arg2;
@end


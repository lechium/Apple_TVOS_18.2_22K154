//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@protocol BMWriteServiceServer
- (void)writeData:(NSData *)arg1 version:(unsigned int)arg2 timestamp:(double)arg3 toStream:(NSString *)arg4 asUser:(unsigned int)arg5 reply:(void (^)(NSError *))arg6;
@end


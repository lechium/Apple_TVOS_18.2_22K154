//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSInputStream, NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface _CATRemoteConnectionSendDataWithStreamContext : NSObject
{
    NSMutableData *mBuffer;	// 8 = 0x8
    NSData *mHeaderData;	// 16 = 0x10
    unsigned long long mBytesRead;	// 24 = 0x18
    NSInputStream *_stream;	// 32 = 0x20
    unsigned long long _dataLength;	// 40 = 0x28
    unsigned long long _bufferSize;	// 48 = 0x30
    id _userInfo;	// 56 = 0x38
    unsigned long long _bytesWritten;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000001caea
@property(nonatomic) unsigned long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property(readonly, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
@property(readonly, nonatomic) unsigned long long dataLength; // @synthesize dataLength=_dataLength;
@property(readonly, copy, nonatomic) NSInputStream *stream; // @synthesize stream=_stream;
- (id)bufferedDataWithError:(id *)arg1;	// IMP=0x000000000001c7e6
@property(readonly, nonatomic) unsigned long long clientBytesWritten;
@property(readonly, nonatomic) _Bool hasBytesRemaining;
- (void)dealloc;	// IMP=0x000000000001c6e1
- (id)initWithStream:(id)arg1 length:(unsigned long long)arg2 bufferSize:(unsigned long long)arg3 userInfo:(id)arg4;	// IMP=0x000000000001c577

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


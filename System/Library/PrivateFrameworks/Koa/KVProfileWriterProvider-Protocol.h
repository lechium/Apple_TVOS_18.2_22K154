//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Koa/NSObject-Protocol.h>

@class NSObject, NSOutputStream;
@protocol KVProfileWriter;

@protocol KVProfileWriterProvider <NSObject>
- (NSObject<KVProfileWriter> *)profileWriterForFormat:(unsigned char)arg1 outputStream:(NSOutputStream *)arg2 error:(id *)arg3;
@end


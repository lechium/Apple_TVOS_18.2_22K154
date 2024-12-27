//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, VCSandboxedURL;

__attribute__((visibility("hidden")))
@interface VCMediaRecorderHistoryRequestContext : NSObject
{
    NSData *_serializedDirectoryURL;	// 8 = 0x8
    VCSandboxedURL *_directoryURL;	// 16 = 0x10
    unsigned char _mediaType;	// 24 = 0x18
    unsigned int _timestamp;	// 28 = 0x1c
    NSString *_transactionID;	// 32 = 0x20
    CDStruct_1b6d18a9 _movieFragmentInterval;	// 40 = 0x28
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 movieFragmentInterval; // @synthesize movieFragmentInterval=_movieFragmentInterval;
@property(readonly, nonatomic) unsigned int timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(readonly, nonatomic) unsigned char mediaType; // @synthesize mediaType=_mediaType;
- (id)deserializeDirectoryURL;	// IMP=0x0000000000411a10
@property(readonly, nonatomic) _Bool hasDirectoryURL;
- (id)description;	// IMP=0x00000000004118da
- (id)directoryURLDescription;	// IMP=0x0000000000411864
- (void)dealloc;	// IMP=0x00000000004117f0
- (id)initWithSerializedRequest:(id)arg1;	// IMP=0x000000000041164b

@end


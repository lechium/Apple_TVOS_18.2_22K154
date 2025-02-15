//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol VCMediaRecorderProtocol;

__attribute__((visibility("hidden")))
@interface VCMediaRecorderManagerStreamTokenClientList : NSObject
{
    long long _streamToken;	// 8 = 0x8
    id <VCMediaRecorderProtocol> _mediaRecorder;	// 16 = 0x10
    NSMutableArray *_clientContextList;	// 24 = 0x18
}

+ (long long)streamTokenFromClientContext:(id)arg1;	// IMP=0x006000000016fa2f
+ (_Bool)isValidContext:(id)arg1;	// IMP=0x006000000016fa06
@property(readonly, nonatomic) NSArray *clientContextList; // @synthesize clientContextList=_clientContextList;
@property(readonly, nonatomic) id <VCMediaRecorderProtocol> mediaRecorder; // @synthesize mediaRecorder=_mediaRecorder;
- (void)dealloc;	// IMP=0x000000000016fa44
- (void)removeContext:(id)arg1;	// IMP=0x000000000016f9f0
- (id)newContext;	// IMP=0x000000000016f99d
- (id)initWithStreamToken:(long long)arg1 mediaRecorder:(id)arg2;	// IMP=0x000000000016f90f

@end


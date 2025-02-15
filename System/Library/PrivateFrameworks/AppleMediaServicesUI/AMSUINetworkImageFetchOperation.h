//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, NSURLSession, NSURLSessionTask;

__attribute__((visibility("hidden")))
@interface AMSUINetworkImageFetchOperation
{
    NSURLSessionTask *_sessionTask;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSURLSession *_URLSession;	// 24 = 0x18
}

+ (id)keyPathsForValuesAffectingIsFinished;	// IMP=0x006000000004b5a5
+ (id)keyPathsForValuesAffectingIsExecuting;	// IMP=0x006000000004b517
- (void).cxx_destruct;	// IMP=0x000000000004bd00
@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
- (id)_eagerlyDecompressImage:(id)arg1;	// IMP=0x000000000004bbe9
- (void)_didCompleteTaskWithData:(id)arg1 error:(id)arg2;	// IMP=0x000000000004ba61
- (float)_sessionTaskPriorityForQueuePriority:(long long)arg1;	// IMP=0x000000000004ba36
- (void)cancel;	// IMP=0x000000000004b9c9
- (void)start;	// IMP=0x000000000004b6eb
- (void)setQueuePriority:(long long)arg1;	// IMP=0x000000000004b634
- (_Bool)isFinished;	// IMP=0x000000000004b5d1
- (_Bool)isExecuting;	// IMP=0x000000000004b53b
- (_Bool)isAsynchronous;	// IMP=0x000000000004b50f
- (id)initWithURL:(id)arg1 URLSession:(id)arg2;	// IMP=0x000000000004b46d

@end


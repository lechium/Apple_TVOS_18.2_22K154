//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSURLAuthenticationChallenge;

__attribute__((visibility("hidden")))
@interface NSURLDownloadInternal : NSObject
{
    struct _CFURLDownload *cfDownload;	// 8 = 0x8
    struct _CFURLAuthChallenge *currCFChallenge;	// 16 = 0x10
    NSURLAuthenticationChallenge *currNSChallenge;	// 24 = 0x18
    id delegate;	// 32 = 0x20
    _Bool downloadActive;	// 40 = 0x28
    NSOperationQueue *_targetQueue;	// 48 = 0x30
}

- (void)dealloc;	// IMP=0x0000000000223217

@end


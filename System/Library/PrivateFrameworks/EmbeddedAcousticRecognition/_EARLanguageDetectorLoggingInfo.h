//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, _EARLanguageDetectorRequestContext;

@interface _EARLanguageDetectorLoggingInfo : NSObject
{
    NSDictionary *_loggingDict;	// 8 = 0x8
    _EARLanguageDetectorRequestContext *_context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000090b86e
@property(copy, nonatomic) _EARLanguageDetectorRequestContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSDictionary *loggingDict; // @synthesize loggingDict=_loggingDict;

@end


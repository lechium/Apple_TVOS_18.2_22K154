//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface VSJSAppScriptEvaluatorResult : NSObject
{
    _Bool _loaded;	// 8 = 0x8
    NSString *_url;	// 16 = 0x10
    NSError *_loadError;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000710be
@property(retain, nonatomic) NSError *loadError; // @synthesize loadError=_loadError;
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;

@end


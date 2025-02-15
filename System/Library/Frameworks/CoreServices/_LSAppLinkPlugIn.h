//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURLComponents, _LSAppLinkOpenState;

__attribute__((visibility("hidden")))
@interface _LSAppLinkPlugIn : NSObject
{
    NSURLComponents *_URLComponents;	// 8 = 0x8
    unsigned long long _limit;	// 16 = 0x10
    _LSAppLinkOpenState *_state;	// 24 = 0x18
}

+ (_Bool)canHandleURLComponents:(id)arg1;	// IMP=0x006000000004fe34
+ (id)plugInClasses;	// IMP=0x006000000004fdc8
- (void).cxx_destruct;	// IMP=0x00000000000500d5
@property(retain) _LSAppLinkOpenState *state; // @synthesize state=_state;
@property unsigned long long limit; // @synthesize limit=_limit;
@property(retain) NSURLComponents *URLComponents; // @synthesize URLComponents=_URLComponents;
- (id)appLinksWithContext:(struct LSContext *)arg1 error:(id *)arg2;	// IMP=0x000000000005002c

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITextInputSessionActionInformation : NSObject
{
    _Bool _sessionHasOnlyPrimaryInput;	// 8 = 0x8
    _Bool _sessionHasDictation;	// 9 = 0x9
    NSString *_sessionActionString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000014f20da
@property(nonatomic) _Bool sessionHasDictation; // @synthesize sessionHasDictation=_sessionHasDictation;
@property(nonatomic) _Bool sessionHasOnlyPrimaryInput; // @synthesize sessionHasOnlyPrimaryInput=_sessionHasOnlyPrimaryInput;
@property(copy, nonatomic) NSString *sessionActionString; // @synthesize sessionActionString=_sessionActionString;

@end


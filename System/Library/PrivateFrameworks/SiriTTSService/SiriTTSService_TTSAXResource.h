//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SiriTTSService_TTSAXResource : NSObject
{
    NSString *_language;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000012200a
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ACLSTypeVerifier : NSObject
{
    NSDictionary *_template;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000001f47
@property(retain) NSDictionary *template; // @synthesize template=_template;
- (id)sanitize:(id)arg1 withTemplate:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0010000000001ad9
- (_Bool)verify:(id)arg1 name:(id)arg2 withTemplate:(id)arg3 tag:(unsigned int)arg4;	// IMP=0x001000000000132c
- (id)sanitize:(id)arg1 tag:(unsigned int)arg2;	// IMP=0x00100000000012a1
- (_Bool)verify:(id)arg1 name:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x001000000000120d
- (id)initWithTemplate:(id)arg1;	// IMP=0x00100000000011a5

@end


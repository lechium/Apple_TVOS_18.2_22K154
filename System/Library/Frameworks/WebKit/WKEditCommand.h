//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKEditCommand : NSObject
{
    struct RefPtr<WebKit::WebEditCommandProxy, WTF::RawPtrTraits<WebKit::WebEditCommandProxy>, WTF::DefaultRefDerefTraits<WebKit::WebEditCommandProxy>> _command;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000004160c4
- (void).cxx_destruct;	// IMP=0x00000000004160a3
- (void *)command;	// IMP=0x0000000000416099
- (id)initWithWebEditCommandProxy:(void *)arg1;	// IMP=0x0000000000416036

@end

